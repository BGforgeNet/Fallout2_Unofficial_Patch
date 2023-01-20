#!/usr/bin/env python3
# coding: utf-8

# finds inconsistencies between ssl and msg

import os
from glob import glob
import re

script_paths = [
    y for x in os.walk("scripts_src/") for y in glob(os.path.join(x[0], "*.ssl"))
]

message_count = 0
g_dialog_path = "data/text/english/dialog/generic.msg"
g_dialog_messages = []
with open(g_dialog_path, encoding="cp1252") as fdialog:
    for line in fdialog:
        g_dialog_messages.extend(re.findall(r"\{([0-9]{3,5})\}", line))

for script_path in script_paths:
    script_messages = []
    g_script_messages = []
    with open(script_path) as fscript:
        script_text = fscript.read()
        lines = re.sub(r"/\*.+?\*/", "", script_text, flags=re.DOTALL).split("\n")
        for line in lines:
            if line.lstrip().startswith("//"):
                continue
            script_messages.extend(
                re.findall(
                    r"[^_]+(?:display_mstr|floater|dude_floater|Reply|GOption|GLowOption|NOption|NLowOption|BOption|BLowOption|GMessage|NMessage|BMessage) *\( *([0-9]{3,5}) *[,\)]",
                    line,
                )
            )
            script_messages.extend(re.findall(r"[^_]+mstr *\( *([0-9]{3,5}) *\)", line))
            m = re.search(
                r"[^_]+(?:floater_rand|Reply_Rand) *\( *([0-9]{3,5}) *, *([0-9]{3,5})",
                line,
            )
            if m:
                script_messages.extend(
                    [str(i) for i in range(int(m.group(1)), int(m.group(2)) + 1)]
                )
            g_script_messages.extend(
                re.findall(r"[^_]+g_mstr *\( *([0-9]{3,5}) *\)", line)
            )
    script_messages = list(dict.fromkeys(script_messages))
    g_script_messages = list(dict.fromkeys(g_script_messages))

    m = re.search(r"#define NAME +SCRIPT_([A-Z0-9_]+)", script_text)
    if not m:
        m = re.search(".+/(.+)\.ssl", script_path)
    dialog_path = "data/text/english/dialog/" + m.group(1).lower() + ".msg"
    dialog_messages = []
    try:
        with open(dialog_path, encoding="cp1252") as fdialog:
            for line in fdialog:
                dialog_messages.extend(re.findall(r"\{([0-9]{3,5})\}", line))
    except IOError:
        continue
    script_only = [item for item in script_messages if item not in dialog_messages]
    if script_only:
        print(
            "Messages in "
            + script_path
            + " that missed in "
            + dialog_path
            + ": "
            + " ".join(script_only)
        )
    message_count += len(script_messages)

    g_script_only = [
        item for item in g_script_messages if item not in g_dialog_messages
    ]
    if g_script_only:
        print(
            "Generic messages in "
            + script_path
            + " that missed in "
            + g_dialog_path
            + ": "
            + " ".join(g_script_only)
        )
    message_count += len(g_script_messages)

print("Messages tested: " + str(message_count))

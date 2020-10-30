[Variables]
Index = 0

[HotkeyOpen]
Measure = Plugin
Plugin = Hotkey
HotKey = CTRL ALT V
KeyDownAction = [!ToggleFade][!UpdateMeter Background][!Redraw][!CommandMeasure Clip#Index# "Set"][!SetVariable Index 0]
DynamicVariables = 1

[HotkeyIncrease]
Measure = Plugin
Plugin = Hotkey
Hotkey = RIGHT
KeyDownAction = [!SetVariable Index "((#Index# < #ClipAmount# - 1) ? #Index#+1 : #Index#)"][!Update][!Redraw]
DynamicVariables = 1

[HotkeyDecrease]
Measure = Plugin
Plugin = Hotkey
Hotkey = LEFT
KeyDownAction = [!SetVariable Index "((#Index# > 0) ? #Index#-1 : #Index#)"][!Update][!Redraw]
DynamicVariables = 1

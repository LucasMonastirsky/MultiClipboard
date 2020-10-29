[Variables]
MATCH_EXPRESSION = \n.*\n
SUBSTITUTE = "^\[IMG\] {Width=(.+), Height=(.+)}":"[IMG] (\1 x \2)"

[Clip0]
Measure=Plugin
Plugin=PluginClipboard.dll
IfMatch = #MATCH_EXPRESSION#
IfMatchAction = [!SetOption ContentText0 ClipString #Zero#][!UpdateMeter ContentText0][!Redraw]
IfNotMatchAction = [!SetOption ContentText0 ClipString 1][!UpdateMeter ContentText0][!Redraw]
RegExpSubstitute = 1
Substitute = #SUBSTITUTE#
DynamicVariables = 1

[Clip1]
Measure=Plugin
Plugin=PluginClipboard.dll
IfMatch = #MATCH_EXPRESSION#
IfMatchAction = [!SetOption ContentText1 ClipString #Zero#][!UpdateMeter ContentText1][!Redraw]
IfNotMatchAction = [!SetOption ContentText1 ClipString 1][!UpdateMeter ContentText1][!Redraw]
RegExpSubstitute = 1
Substitute = #SUBSTITUTE#
DynamicVariables = 1

[Clip2]
Measure=Plugin
Plugin=PluginClipboard.dll
IfMatch = #MATCH_EXPRESSION#
IfMatchAction = [!SetOption ContentText2 ClipString #Zero#][!UpdateMeter ContentText2][!Redraw]
IfNotMatchAction = [!SetOption ContentText2 ClipString 1][!UpdateMeter ContentText2][!Redraw]
RegExpSubstitute = 1
Substitute = #SUBSTITUTE#
DynamicVariables = 1

[Clip3]
Measure=Plugin
Plugin=PluginClipboard.dll
IfMatch = #MATCH_EXPRESSION#
IfMatchAction = [!SetOption ContentText3 ClipString #Zero#][!UpdateMeter ContentText3][!Redraw]
IfNotMatchAction = [!SetOption ContentText3 ClipString 1][!UpdateMeter ContentText3][!Redraw]
RegExpSubstitute = 1
Substitute = #SUBSTITUTE#
DynamicVariables = 1

[Clip4]
Measure=Plugin
Plugin=PluginClipboard.dll
IfMatch = #MATCH_EXPRESSION#
IfMatchAction = [!SetOption ContentText4 ClipString #Zero#][!UpdateMeter ContentText4][!Redraw]
IfNotMatchAction = [!SetOption ContentText4 ClipString 1][!UpdateMeter ContentText4][!Redraw]
RegExpSubstitute = 1
Substitute = #SUBSTITUTE#
DynamicVariables = 1
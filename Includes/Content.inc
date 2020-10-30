; Content 0

[ContentBox0]
Meter = Shape
Shape = Rectangle (#Margin# + #ContentWidth# * 0),(#Margin# + #ContentHeight# * 0),#ContentWidth#,#ContentHeight#,#ContentBorderRadius# | Fill Color #ContentBackgroundColor# | StrokeWidth #ContentStrokeWidth# | Stroke Color #ContentBorderColor#
LeftMouseUpAction = [!CommandMeasure Clip0 "Set"][!HideFade]

[ContentMask0]
Meter = Shape
Shape = Rectangle (#Margin# + #ContentWidth# * 0),(#Margin# + #ContentHeight# * 0),(#ContentWidth#-#ContentMargin#-2),(#ContentHeight#-#ContentMargin#-2) | Fill Color #ContentBackgroundColor# | StrokeWidth #ContentStrokeWidth#

[ContentText0]
Meter = String
MeterStyle = StyleContentText
MeasureName = Clip0
X = (#Margin# + #ContentWidth# * 0 + #ContentMargin# * #ContentSpacing# * 0)
Y = (#Margin# + #ContentHeight# * 0 + #ContentMargin#)
W = (#ContentWidth#-#ContentMargin#-2)
H = (#ContentHeight#-#ContentMargin#-2)
Container = ContentMask0

[ContentHighlight0]
Meter = Shape
Shape = Rectangle (#Margin# + #ContentWidth# * 0),(#Margin# + #ContentHeight# * 0),#ContentWidth#,#ContentHeight#,#ContentBorderRadius# | Fill Color 0,0,0,0 | StrokeWidth #HighlightStrokeWidth# | Stroke Color #HighlightColor#

; Content 1

[ContentBox1]
Meter = Shape
Shape = Rectangle (#Margin# + #ContentWidth# * 1 + #ContentSpacing# * 1),(#Margin#),#ContentWidth#,#ContentHeight#,#ContentBorderRadius# | Fill Color #ContentBackgroundColor# | StrokeWidth #ContentStrokeWidth# | Stroke Color #ContentBorderColor#
LeftMouseUpAction = [!CommandMeasure Clip1 "Set"][!HideFade]

[ContentMask1]
Meter = Shape
Shape = Rectangle (#Margin# + #ContentWidth# * 1 + #ContentSpacing# * 1),(#Margin#),(#ContentWidth#-#ContentMargin#-2),(#ContentHeight#-#ContentMargin#-2) | Fill Color #ContentBackgroundColor# | StrokeWidth #ContentStrokeWidth#

[ContentText1]
Meter = String
MeterStyle = StyleContentText
MeasureName = Clip1
X = (#Margin# + #ContentWidth# * 1 + #ContentMargin# + #ContentSpacing# * 1)
Y = (#Margin# + #ContentMargin#)
W = (#ContentWidth#-#ContentMargin#-2)
H = (#ContentHeight#-#ContentMargin#-2)
Container = ContentMask1

[ContentHighlight1]
Meter = Shape
Shape = Rectangle (#Margin# + #ContentWidth# * 1 + #ContentSpacing# * 1),(#Margin#),#ContentWidth#,#ContentHeight#,#ContentBorderRadius# | Fill Color 0,0,0,0 | StrokeWidth #HighlightStrokeWidth# | Stroke Color #HighlightColor#

; Content 2

[ContentBox2]
Meter = Shape
Shape = Rectangle (#Margin# + #ContentWidth# * 2 + #ContentSpacing# * 2),(#Margin#),#ContentWidth#,#ContentHeight#,#ContentBorderRadius# | Fill Color #ContentBackgroundColor# | StrokeWidth #ContentStrokeWidth# | Stroke Color #ContentBorderColor#
LeftMouseUpAction = [!CommandMeasure Clip2 "Set"][!HideFade]

[ContentMask2]
Meter = Shape
Shape = Rectangle (#Margin# + #ContentWidth# * 2 + #ContentSpacing# * 2),(#Margin#),(#ContentWidth#-#ContentMargin#-2),(#ContentHeight#-#ContentMargin#-2) | Fill Color #ContentBackgroundColor# | StrokeWidth #ContentStrokeWidth#

[ContentText2]
Meter = String
MeterStyle = StyleContentText
MeasureName = Clip2
X = (#Margin# + #ContentWidth# * 2 + #ContentMargin# + #ContentSpacing# * 2)
Y = (#Margin# + #ContentMargin#)
W = (#ContentWidth#-#ContentMargin#-2)
H = (#ContentHeight#-#ContentMargin#-2)
Container = ContentMask2

[ContentHighlight2]
Meter = Shape
Shape = Rectangle (#Margin# + #ContentWidth# * 2 + #ContentSpacing# * 2),(#Margin#),#ContentWidth#,#ContentHeight#,#ContentBorderRadius# | Fill Color 0,0,0,0 | StrokeWidth #HighlightStrokeWidth# | Stroke Color #HighlightColor#


; Content 3

[ContentBox3]
Meter = Shape
Shape = Rectangle (#Margin# + #ContentWidth# * 3 + #ContentSpacing# * 3),(#Margin#),#ContentWidth#,#ContentHeight#,#ContentBorderRadius# | Fill Color #ContentBackgroundColor# | StrokeWidth #ContentStrokeWidth# | Stroke Color #ContentBorderColor#
LeftMouseUpAction = [!CommandMeasure Clip3 "Set"][!HideFade]

[ContentMask3]
Meter = Shape
Shape = Rectangle (#Margin# + #ContentWidth# * 3 + #ContentSpacing# * 3),(#Margin#),(#ContentWidth#-#ContentMargin#-2),(#ContentHeight#-#ContentMargin#-2) | Fill Color #ContentBackgroundColor# | StrokeWidth #ContentStrokeWidth#

[ContentText3]
Meter = String
MeterStyle = StyleContentText
MeasureName = Clip3
X = (#Margin# + #ContentWidth# * 3 + #ContentMargin# + #ContentSpacing# * 3)
Y = (#Margin# + #ContentMargin#)
W = (#ContentWidth#-#ContentMargin#-2)
H = (#ContentHeight#-#ContentMargin#-2)
Container = ContentMask3

[ContentHighlight3]
Meter = Shape
Shape = Rectangle (#Margin# + #ContentWidth# * 3 + #ContentSpacing# * 3),(#Margin#),#ContentWidth#,#ContentHeight#,#ContentBorderRadius# | Fill Color 0,0,0,0 | StrokeWidth #HighlightStrokeWidth# | Stroke Color #HighlightColor#

; Content 4

[ContentBox4]
Meter = Shape
Shape = Rectangle (#Margin# + #ContentWidth# * 4 + #ContentSpacing# * 4),(#Margin#),#ContentWidth#,#ContentHeight#,#ContentBorderRadius# | Fill Color #ContentBackgroundColor# | StrokeWidth #ContentStrokeWidth# | Stroke Color #ContentBorderColor#
LeftMouseUpAction = [!CommandMeasure Clip4 "Set"][!HideFade]
 
[ContentMask4]
Meter = Shape
Shape = Rectangle (#Margin# + #ContentWidth# * 4 + #ContentSpacing# * 4),(#Margin#),(#ContentWidth#-#ContentMargin#-2),(#ContentHeight#-#ContentMargin#-2) | Fill Color #ContentBackgroundColor# | StrokeWidth #ContentStrokeWidth#

[ContentText4]
Meter = String
MeterStyle = StyleContentText
MeasureName = Clip4
X = (#Margin# + #ContentWidth# * 4 + #ContentMargin# + #ContentSpacing# * 4)
Y = (#Margin# + #ContentMargin#)
W = (#ContentWidth#-#ContentMargin#-2)
H = (#ContentHeight#-#ContentMargin#-2)
Container = ContentMask4

[ContentHighlight4]
Meter = Shape
Shape = Rectangle (#Margin# + #ContentWidth# * 4 + #ContentSpacing# * 4),(#Margin#),#ContentWidth#,#ContentHeight#,#ContentBorderRadius# | Fill Color 0,0,0,0 | StrokeWidth #HighlightStrokeWidth# | Stroke Color #HighlightColor#

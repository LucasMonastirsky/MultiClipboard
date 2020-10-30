[StyleContentText]
FontSize = #FontSize#
FontColor = #TextColor#
FontFace = #Font#
FontWeight = #FontWeight#
InlineSetting = Weight | 700
InlinePattern = \[IMG\]|\[FILE\]
InlineSetting2 = Color | #UrlColor#
InlinePattern2 = (https?:\/\/(?:www\.|(?!www))[a-zA-Z0-9][a-zA-Z0-9-]+[a-zA-Z0-9]\.[^\s]{2,}|www\.[a-zA-Z0-9][a-zA-Z0-9-]+[a-zA-Z0-9]\.[^\s]{2,}|https?:\/\/(?:www\.|(?!www))[a-zA-Z0-9]+\.[^\s]{2,}|www\.[a-zA-Z0-9]+\.[^\s]{2,})
AntiAlias = 1

[Background]
Meter = Shape
Shape = Rectangle 0,0,#Width#,#Height#,#BackgroundBorderRadius# | Fill Color #BackgroundColor# | StrokeWidth #BackgroundStrokeWidth#
DynamicVariables = 1

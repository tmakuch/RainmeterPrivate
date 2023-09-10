[MeterCodingTitle]
Meter=String
X=#LauncherMargin#
Y=(#LauncherMargin#+3*(#LineHeight#+#VerticalOffset#)+#SingleIconOffset#+#DailySectionCurrentHeightDynamic#+#ComsSectionCurrentHeightDynamic#+#GamesSectionCurrentHeightDynamic#)
W=#ContainerWidth#
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
Text="Coding"
LeftMouseUpAction=#ActionTriggerCloseAllTimer##ActionCloseAllDrawers#[!SetVariable CodingSectionCurrentHeightDynamic "(#CodingSectionCurrentHeightDynamic# <> 0 ? 0 :#CodingSectionExpandedHeight#)"][!Update]
DynamicVariables=1

[MeterProgramWebstorm]
Meter=String
X=(2.5*#LauncherMargin#)
Y=(#LineHeight#+#VerticalOffset#)r
Hidden=(#CodingSectionCurrentHeightDynamic# > 0 ? 0 : 1)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
Text="Webstorm"
LeftMouseUpAction=["C:\Program Files\JetBrains\WebStorm 2023.1.1\bin\webstorm64.exe"]
DynamicVariables=1

[MeterProgramWebstormIconInline]
Meter=Image
X=(#IconsOffset#+3*(#LineHeight#-#SingleIconOffset#))
Y=#SingleIconOffset#r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#CodingSectionCurrentHeightDynamic# > 0 ? 0 : 1)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\webstorm.png
DynamicVariables=1

[MeterProgramWebstormActiveInline]
Meter=Image
X=(#IconsOffset#+3*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#CodingSectionCurrentHeightDynamic# = 0 || [MeasureWebstormHideRunning] ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\active-overlay.png
DynamicVariables=1

[MeterProgramVSCode]
Meter=String
X=(2.5*#LauncherMargin#)
Y=(#LineHeight#+#VerticalOffset#)r
Hidden=(#CodingSectionCurrentHeightDynamic# > 0 ? 0 : 1)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
Text="VS Code"
LeftMouseUpAction=["%localappdata%\Programs\Microsoft VS Code\Code.exe"]
DynamicVariables=1

[MeterProgramVSCodeIconInline]
Meter=Image
X=(#IconsOffset#+3*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#CodingSectionCurrentHeightDynamic# > 0 ? 0 : 1)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\visual-studio-code.png
DynamicVariables=1

[MeterProgamVSCodeActiveInline]
Meter=Image
X=(#IconsOffset#+3*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#CodingSectionCurrentHeightDynamic# = 0 || [MeasureVSCodeHideRunning] ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\active-overlay.png
DynamicVariables=1

[MeterProgramAndroidStudio]
Meter=String
X=(2.5*#LauncherMargin#)
Y=(#LineHeight#+#VerticalOffset#)r
Hidden=(#CodingSectionCurrentHeightDynamic# > 0 ? 0 : 1)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
Text="Android Studio"
LeftMouseUpAction=["C:\Program Files\Android\Android Studio\bin\studio64.exe"]
DynamicVariables=1

[MeterProgramAndroidStudioIconInline]
Meter=Image
X=(#IconsOffset#+3*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#CodingSectionCurrentHeightDynamic# > 0 ? 0 : 1)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\android-studio.png
DynamicVariables=1

[MeterProgramAndroidStudioActiveInline]
Meter=Image
X=(#IconsOffset#+3*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#CodingSectionCurrentHeightDynamic# = 0 || [MeasureAndroidStudioHideRunning] ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\active-overlay.png
DynamicVariables=1

[MeterProgramWebstormIcon]
Meter=Image
X=(#IconsOffset#+#LineHeight#-#SingleIconOffset#)
Y=([MeterCodingTitle:Y]+#SingleIconOffset#)
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#CodingSectionCurrentHeightDynamic# > 0 ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\webstorm.png
DynamicVariables=1

[MeterProgramWebstormActive]
Meter=Image
X=(#IconsOffset#+#LineHeight#-#SingleIconOffset#)
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#CodingSectionCurrentHeightDynamic# > 0 || [MeasureWebstormHideRunning] ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\active-overlay.png
DynamicVariables=1

[MeterProgramVSCodeIcon]
Meter=Image
X=(#IconsOffset#+2*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#CodingSectionCurrentHeightDynamic# > 0 ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\visual-studio-code.png
DynamicVariables=1

[MeterProgamVSCodeActive]
Meter=Image
X=(#IconsOffset#+2*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#CodingSectionCurrentHeightDynamic# > 0 || [MeasureVSCodeHideRunning] ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\active-overlay.png
DynamicVariables=1

[MeterProgramAndroidStudioIcon]
Meter=Image
X=(#IconsOffset#+3*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#CodingSectionCurrentHeightDynamic# > 0 ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\android-studio.png
DynamicVariables=1

[MeterProgramAndroidStudioActive]
Meter=Image
X=(#IconsOffset#+3*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#CodingSectionCurrentHeightDynamic# > 0 || [MeasureAndroidStudioHideRunning] ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\active-overlay.png
DynamicVariables=1
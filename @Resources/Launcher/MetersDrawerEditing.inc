[MeterEditingTitle]
Meter=String
X=#LauncherMargin#
Y=(#LauncherMargin#+5*(#LineHeight#+#VerticalOffset#)+#SingleIconOffset#+#DailySectionCurrentHeightDynamic#+#ComsSectionCurrentHeightDynamic#+#GamesSectionCurrentHeightDynamic#+#CodingSectionCurrentHeightDynamic#+#StreamingSectionCurrentHeightDynamic#)
W=#ContainerWidth#
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
Text="Editing"
LeftMouseUpAction=#ActionTriggerCloseAllTimer##ActionCloseAllDrawers#[!SetVariable EditingSectionCurrentHeightDynamic "(#EditingSectionCurrentHeightDynamic# <> 0 ? 0 :#EditingSectionExpandedHeight#)"][!Update]
DynamicVariables=1

[MeterProgramGimp]
Meter=String
X=(2.5*#LauncherMargin#)
Y=(#LineHeight#+#VerticalOffset#)r
Hidden=(#EditingSectionCurrentHeightDynamic# > 0 ? 0 : 1)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
Text="Gimp"
LeftMouseUpAction=["C:\Program Files\GIMP 2\bin\gimp-2.10.exe"]
DynamicVariables=1

[MeterProgramGimpIconInline]
Meter=Image
X=(#IconsOffset#+#LastIconCount#*(#LineHeight#-#SingleIconOffset#))
Y=#SingleIconOffset#r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#EditingSectionCurrentHeightDynamic# > 0 ? 0 : 1)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\gimp.png
DynamicVariables=1

[MeterProgramGimpActiveInline]
Meter=Image
X=(#IconsOffset#+#LastIconCount#*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#EditingSectionCurrentHeightDynamic# = 0 || [MeasureGimpHideRunning] ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\active-overlay.png
DynamicVariables=1

[MeterProgramAudacity]
Meter=String
X=(2.5*#LauncherMargin#)
Y=(#LineHeight#+#VerticalOffset#)r
Hidden=(#EditingSectionCurrentHeightDynamic# > 0 ? 0 : 1)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
Text="Audacity"
LeftMouseUpAction=["C:\Program Files\Audacity\Audacity.exe"]
DynamicVariables=1

[MeterProgramAudacityIconInline]
Meter=Image
X=(#IconsOffset#+#LastIconCount#*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#EditingSectionCurrentHeightDynamic# > 0 ? 0 : 1)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\audacity.png
DynamicVariables=1

[MeterPrograAudacityActiveInline]
Meter=Image
X=(#IconsOffset#+#LastIconCount#*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#EditingSectionCurrentHeightDynamic# = 0 || [MeasureAudacityHideRunning] ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\active-overlay.png
DynamicVariables=1

[MeterProgramBlender]
Meter=String
X=(2.5*#LauncherMargin#)
Y=(#LineHeight#+#VerticalOffset#)r
Hidden=(#EditingSectionCurrentHeightDynamic# > 0 ? 0 : 1)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
Text="Blender"
LeftMouseUpAction=["C:\Program Files\Blender Foundation\Blender 3.5\blender-launcher.exe"]
DynamicVariables=1

[MeterProgramBlenderIconInline]
Meter=Image
X=(#IconsOffset#+#LastIconCount#*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#EditingSectionCurrentHeightDynamic# > 0 ? 0 : 1)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\blender.png
DynamicVariables=1

[MeterProgramBlenderActiveInline]
Meter=Image
X=(#IconsOffset#+#LastIconCount#*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#EditingSectionCurrentHeightDynamic# = 0 || [MeasureBlenderHideRunning] ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\active-overlay.png
DynamicVariables=1

[MeterProgramGimpIcon]
Meter=Image
X=(#IconsOffset#+2*(#LineHeight#-#SingleIconOffset#))
Y=([MeterEditingTitle:Y]+#SingleIconOffset#)
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#EditingSectionCurrentHeightDynamic# > 0 ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\gimp.png
DynamicVariables=1

[MeterProgramGimpActive]
Meter=Image
X=(#IconsOffset#+2*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#EditingSectionCurrentHeightDynamic# > 0 || [MeasureGimpHideRunning] ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\active-overlay.png
DynamicVariables=1

[MeterProgramAudacityIcon]
Meter=Image
X=(#IconsOffset#+3*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#EditingSectionCurrentHeightDynamic# > 0 ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\audacity.png
DynamicVariables=1

[MeterPrograAudacityActive]
Meter=Image
X=(#IconsOffset#+3*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#EditingSectionCurrentHeightDynamic# > 0 || [MeasureAudacityHideRunning] ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\active-overlay.png
DynamicVariables=1

[MeterProgramBlenderIcon]
Meter=Image
X=(#IconsOffset#+4*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#EditingSectionCurrentHeightDynamic# > 0 ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\blender.png
DynamicVariables=1

[MeterProgramBlenderActive]
Meter=Image
X=(#IconsOffset#+4*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#EditingSectionCurrentHeightDynamic# > 0 || [MeasureBlenderHideRunning] ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\active-overlay.png
DynamicVariables=1

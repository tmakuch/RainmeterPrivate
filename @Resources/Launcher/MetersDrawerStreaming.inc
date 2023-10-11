[MeterStreamingTitle]
Meter=String
X=#LauncherMargin#
Y=(#LauncherMargin#+4*(#LineHeight#+#VerticalOffset#)+#SingleIconOffset#+#DailySectionCurrentHeightDynamic#+#ComsSectionCurrentHeightDynamic#+#GamesSectionCurrentHeightDynamic#+#CodingSectionCurrentHeightDynamic#)
W=#ContainerWidth#
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
Text="Streaming"
LeftMouseUpAction=#ActionTriggerCloseAllTimer##ActionCloseAllDrawers#[!SetVariable StreamingSectionCurrentHeightDynamic "(#StreamingSectionCurrentHeightDynamic# <> 0 ? 0 :#StreamingSectionExpandedHeight#)"][!Update]
DynamicVariables=1

[MeterProgramObsStudio]
Meter=String
X=(2.5*#LauncherMargin#)
Y=(#LineHeight#+#VerticalOffset#)r
Hidden=(#StreamingSectionCurrentHeightDynamic# > 0 ? 0 : 1)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
Text="OBS Studio"
LeftMouseUpAction=["C:\Program Files\obs-studio\bin\64bit\obs64.exe"]
DynamicVariables=1

[MeterProgramObsStudioIconInline]
Meter=Image
X=(#IconsOffset#+#LastIconCount#*(#LineHeight#-#SingleIconOffset#))
Y=#SingleIconOffset#r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#StreamingSectionCurrentHeightDynamic# > 0 ? 0 : 1)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\obs-studio.png
DynamicVariables=1

[MeterProgramObsStudioActiveInline]
Meter=Image
X=(#IconsOffset#+#LastIconCount#*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#StreamingSectionCurrentHeightDynamic# = 0 || [MeasureObsStudioHideRunning] ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\active-overlay.png
DynamicVariables=1

[MeterProgramSoundBoard]
Meter=String
X=(2.5*#LauncherMargin#)
Y=(#LineHeight#+#VerticalOffset#)r
Hidden=(#StreamingSectionCurrentHeightDynamic# > 0 ? 0 : 1)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
Text="SoundBoard"
LeftMouseUpAction=["C:\Program Files (x86)\Deathcounter and Soundboard\DCSB.exe"]
DynamicVariables=1

[MeterProgramSoundBoardIconInline]
Meter=Image
X=(#IconsOffset#+#LastIconCount#*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#StreamingSectionCurrentHeightDynamic# > 0 ? 0 : 1)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\soundboard.png
DynamicVariables=1

[MeterProgramSoundBoardActiveInline]
Meter=Image
X=(#IconsOffset#+#LastIconCount#*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#StreamingSectionCurrentHeightDynamic# = 0 || [MeasureSoundBoardHideRunning] ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\active-overlay.png
DynamicVariables=1

[MeterProgramObsStudioIcon]
Meter=Image
X=(#IconsOffset#+3*(#LineHeight#-#SingleIconOffset#))
Y=([MeterStreamingTitle:Y]+#SingleIconOffset#)
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#StreamingSectionCurrentHeightDynamic# > 0 ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\obs-studio.png
DynamicVariables=1

[MeterProgramObsStudioActive]
Meter=Image
X=(#IconsOffset#+3*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#StreamingSectionCurrentHeightDynamic# > 0 || [MeasureObsStudioHideRunning] ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\active-overlay.png
DynamicVariables=1

[MeterProgramSoundBoardIcon]
Meter=Image
X=(#IconsOffset#+4*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#StreamingSectionCurrentHeightDynamic# > 0 ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\soundboard.png
DynamicVariables=1

[MeterProgramSoundBoardActive]
Meter=Image
X=(#IconsOffset#+4*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#StreamingSectionCurrentHeightDynamic# > 0 || [MeasureSoundBoardHideRunning] ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\active-overlay.png
DynamicVariables=1
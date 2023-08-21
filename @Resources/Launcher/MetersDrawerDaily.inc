[MeterDailyTitle]
Meter=String
X=#LauncherMargin#
Y=(1.5*#LauncherMargin#)
W=#ContainerWidth#
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
Text="Daily"
LeftMouseUpAction=[!SetVariable DailySectionCurrentHeightDynamic "(#DailySectionCurrentHeightDynamic# <> 0 ? 0 :#DailySectionExpandedHeight#)"][!SetVariable CxomsSectionCurrentHeightDynamic 0][!SetVariable GamesSectionCurrentHeightDynamic 0][!SetVariable CodingSectionCurrentHeightDynamic 0][!SetVariable StreamingSectionCurrentHeightDynamic 0][!SetVariable EditingSectionCurrentHeightDynamic 0][!Update]
DynamicVariables=1

[MeterProgramSpotify]
Meter=String
X=(2.5*#LauncherMargin#)
Y=(#LineHeight#+#VerticalOffset#)r
Hidden=(#DailySectionCurrentHeightDynamic# > 0 ? 0 : 1)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
Text="Spotify"
LeftMouseUpAction=["C:\Users\tedeusz\AppData\Roaming\Spotify\Spotify.exe"]
DynamicVariables=1

[MeterProgramSpotifyIconInline]
Meter=Image
X=(#IconsOffset#+3*(#LineHeight#-#SingleIconOffset#))
Y=#SingleIconOffset#r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#DailySectionCurrentHeightDynamic# > 0 ? 0 : 1)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\spotify.png
DynamicVariables=1

[MeterProgramSpotifyActiveInline]
Meter=Image
X=(#IconsOffset#+3*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#DailySectionCurrentHeightDynamic# = 0 || [MeasureSpotifyHideRunning] ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\active-overlay.png
DynamicVariables=1

[MeterProgramChrome]
Meter=String
X=(2.5*#LauncherMargin#)
Y=(#LineHeight#+#VerticalOffset#)r
Hidden=(#DailySectionCurrentHeightDynamic# > 0 ? 0 : 1)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
Text="Chrome"
LeftMouseUpAction=["C:\Program Files\Google\Chrome\Application\chrome.exe"]
DynamicVariables=1

[MeterProgramChromeIconInline]
Meter=Image
X=(#IconsOffset#+3*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#DailySectionCurrentHeightDynamic# > 0 ? 0 : 1)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\chrome.png
DynamicVariables=1

[MeterProgramChromeActiveInline]
Meter=Image
X=(#IconsOffset#+3*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#DailySectionCurrentHeightDynamic# = 0 || [MeasureChromeHideRunning] ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\active-overlay.png
DynamicVariables=1

[MeterProgramSpotifyIcon]
Meter=Image
X=(#IconsOffset#+2*(#LineHeight#-#SingleIconOffset#))
Y=([MeterDailyTitle:Y]+#SingleIconOffset#)
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#DailySectionCurrentHeightDynamic# > 0 ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\spotify.png
DynamicVariables=1

[MeterProgramSpotifyActive]
Meter=Image
X=(#IconsOffset#+2*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#DailySectionCurrentHeightDynamic# > 0 || [MeasureSpotifyHideRunning] ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\active-overlay.png
DynamicVariables=1

[MeterProgramChromeIcon]
Meter=Image
X=(#IconsOffset#+3*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#DailySectionCurrentHeightDynamic# > 0 ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\chrome.png
DynamicVariables=1

[MeterProgramChromeActive]
Meter=Image
X=(#IconsOffset#+3*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#DailySectionCurrentHeightDynamic# > 0 || [MeasureChromeHideRunning] ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\active-overlay.png
DynamicVariables=1
[MeterGamesTitle]
Meter=String
X=#LauncherMargin#
Y=(#LauncherMargin#+#LineHeight#+#VerticalOffset#+#ComsSectionCurrentHeightDynamic#)
W=#ContainerWidth#
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
Text="Games"
LeftMouseUpAction=[!SetVariable GamesSectionCurrentHeightDynamic "(#GamesSectionCurrentHeightDynamic# <> 0 ? 0 :#GamesSectionExpandedHeight#)"][!SetVariable ComsSectionCurrentHeightDynamic 0][!SetVariable CodingSectionCurrentHeightDynamic 0][!SetVariable StreamingSectionCurrentHeightDynamic 0][!SetVariable EditingSectionCurrentHeightDynamic 0][!Update]
DynamicVariables=1

[MeterProgramSteam]
Meter=String
X=(2.5*#LauncherMargin#)
Y=(#LineHeight#+#VerticalOffset#)r
Hidden=(#GamesSectionCurrentHeightDynamic# > 0 ? 0 : 1)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
Text="Steam"
LeftMouseUpAction=["C:\Program Files (x86)\Steam\steam.exe"]
DynamicVariables=1

[MeterProgramSteamIconInline]
Meter=Image
X=(#IconsOffset#+3*(#LineHeight#-#SingleIconOffset#))
Y=#SingleIconOffset#r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#GamesSectionCurrentHeightDynamic# > 0 ? 0 : 1)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\steam.png
DynamicVariables=1

[MeterProgramSteamActiveInline]
Meter=Image
X=(#IconsOffset#+3*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#GamesSectionCurrentHeightDynamic# = 0 || [MeasureSteamHideRunning] ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\active-overlay.png
DynamicVariables=1

[MeterProgramBattleNet]
Meter=String
X=(2.5*#LauncherMargin#)
Y=(#LineHeight#+#VerticalOffset#)r
Hidden=(#GamesSectionCurrentHeightDynamic# > 0 ? 0 : 1)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
Text="Battle.net"
LeftMouseUpAction=["C:\Program Files (x86)\Battle.net\Battle.net.exe"]
DynamicVariables=1

[MeterProgramBattleNetIconInline]
Meter=Image
X=(#IconsOffset#+3*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#GamesSectionCurrentHeightDynamic# > 0 ? 0 : 1)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\battle-net.png
DynamicVariables=1

[MeterProgramBattleNetActiveInline]
Meter=Image
X=(#IconsOffset#+3*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#GamesSectionCurrentHeightDynamic# = 0 || [MeasureBattleNetHideRunning] ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\active-overlay.png
DynamicVariables=1

[MeterProgramUbisoftConnect]
Meter=String
X=(2.5*#LauncherMargin#)
Y=(#LineHeight#+#VerticalOffset#)r
Hidden=(#GamesSectionCurrentHeightDynamic# > 0 ? 0 : 1)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
Text="Ubisoft Connect"
LeftMouseUpAction=["C:\Program Files (x86)\Ubisoft\Ubisoft Game Launcher\UbisoftConnect.exe"]
DynamicVariables=1

[MeterProgramUbisoftConnectIconInline]
Meter=Image
X=(#IconsOffset#+3*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#GamesSectionCurrentHeightDynamic# > 0 ? 0 : 1)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\ubisoft-connect.png
DynamicVariables=1

[MeterProgramUbisoftConnectActiveInline]
Meter=Image
X=(#IconsOffset#+3*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#GamesSectionCurrentHeightDynamic# = 0 || [MeasureUbisoftConnectHideRunning] ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\active-overlay.png
DynamicVariables=1

[MeterProgramGOG]
Meter=String
X=(2.5*#LauncherMargin#)
Y=(#LineHeight#+#VerticalOffset#)r
Hidden=(#GamesSectionCurrentHeightDynamic# > 0 ? 0 : 1)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
Text="GOG"
LeftMouseUpAction=["C:\Program Files (x86)\GOG Galaxy\GalaxyClient.exe"]
DynamicVariables=1

[MeterProgramGOGConnectIconInline]
Meter=Image
X=(#IconsOffset#+3*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#GamesSectionCurrentHeightDynamic# > 0 ? 0 : 1)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\gog-galaxy.png
DynamicVariables=1

[MeterProgramGOGConnectActiveInline]
Meter=Image
X=(#IconsOffset#+3*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#GamesSectionCurrentHeightDynamic# = 0 || [MeasureGOGConnectHideRunning] ? 1 : 0)
H=(#LineHeight#-2*#SingleIconOffset#)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\active-overlay.png
DynamicVariables=1

[MeterProgramSteamIcon]
Meter=Image
X=#IconsOffset#
Y=(#LauncherMargin#+#LineHeight#+#SingleIconOffset#+#VerticalOffset#+#ComsSectionCurrentHeightDynamic#)
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#GamesSectionCurrentHeightDynamic# > 0 ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\steam.png
DynamicVariables=1

[MeterProgramSteamActive]
Meter=Image
X=#IconsOffset#
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#GamesSectionCurrentHeightDynamic# > 0 || [MeasureSteamHideRunning] ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\active-overlay.png
DynamicVariables=1

[MeterProgramBattleNetIcon]
Meter=Image
X=(#IconsOffset#+#LineHeight#-#SingleIconOffset#)
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#GamesSectionCurrentHeightDynamic# > 0 ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\battle-net.png
DynamicVariables=1

[MeterProgramBattleNetActive]
Meter=Image
X=(#IconsOffset#+#LineHeight#-#SingleIconOffset#)
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#GamesSectionCurrentHeightDynamic# > 0 || [MeasureBattleNetHideRunning] ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\active-overlay.png
DynamicVariables=1

[MeterProgramUbisoftConnectIcon]
Meter=Image
X=(#IconsOffset#+2*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#GamesSectionCurrentHeightDynamic# > 0 ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\ubisoft-connect.png
DynamicVariables=1

[MeterProgramUbisoftConnectActive]
Meter=Image
X=(#IconsOffset#+2*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#GamesSectionCurrentHeightDynamic# > 0 || [MeasureUbisoftConnectHideRunning] ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\active-overlay.png
DynamicVariables=1

[MeterProgramGOGConnectIcon]
Meter=Image
X=(#IconsOffset#+3*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#GamesSectionCurrentHeightDynamic# > 0 ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\gog-galaxy.png
DynamicVariables=1

[MeterProgramGOGConnectActive]
Meter=Image
X=(#IconsOffset#+3*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#GamesSectionCurrentHeightDynamic# > 0 || [MeasureGOGConnectHideRunning] ? 1 : 0)
H=(#LineHeight#-2*#SingleIconOffset#)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\active-overlay.png
DynamicVariables=1
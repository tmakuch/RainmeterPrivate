[MeterComsTitle]
Meter=String
X=#LauncherMargin#
Y=#LauncherMargin#
W=#ContainerWidth#
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
Text="Coms"
LeftMouseUpAction=[!SetVariable ComsSectionCurrentHeightDynamic "(#ComsSectionCurrentHeightDynamic# <> 0 ? 0 :#ComsSectionExpandedHeight#)"][!SetVariable GamesSectionCurrentHeightDynamic 0][!SetVariable CodingSectionCurrentHeightDynamic 0][!SetVariable StreamingSectionCurrentHeightDynamic 0][!SetVariable EditingSectionCurrentHeightDynamic 0][!Update]
DynamicVariables=1

[MeterProgramDiscord]
Meter=String
X=(2.5*#LauncherMargin#)
Y=(#LineHeight#+#VerticalOffset#)r
Hidden=(#ComsSectionCurrentHeightDynamic# > 0 ? 0 : 1)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
Text="Discord"
LeftMouseUpAction=["C:\Users\tedeusz\AppData\Local\Discord\Update.exe" "--processStart" "Discord.exe"]
DynamicVariables=1

[MeterProgramDiscordIconInline]
Meter=Image
X=(#IconsOffset#+3*(#LineHeight#-#SingleIconOffset#))
Y=#SingleIconOffset#r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#ComsSectionCurrentHeightDynamic# > 0 ? 0 : 1)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\discord.png
DynamicVariables=1

[MeterProgramDiscordActiveInline]
Meter=Image
X=(#IconsOffset#+3*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#ComsSectionCurrentHeightDynamic# = 0 || [MeasureDiscordHideRunning] ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\active-overlay.png
DynamicVariables=1

[MeterProgramTelegram]
Meter=String
X=(2.5*#LauncherMargin#)
Y=(#LineHeight#+#VerticalOffset#)r
Hidden=(#ComsSectionCurrentHeightDynamic# > 0 ? 0 : 1)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
Text="Telegram"
LeftMouseUpAction=["C:\Users\tedeusz\AppData\Roaming\Telegram Desktop\Telegram.exe"]
DynamicVariables=1

[MeterProgramTelegramIconInline]
Meter=Image
X=(#IconsOffset#+3*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#ComsSectionCurrentHeightDynamic# > 0 ? 0 : 1)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\telegram.png
DynamicVariables=1

[MeterProgramTelegramActiveInline]
Meter=Image
X=(#IconsOffset#+3*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#ComsSectionCurrentHeightDynamic# = 0 || [MeasureTelegramHideRunning] ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\active-overlay.png
DynamicVariables=1

[MeterProgramSlack]
Meter=String
X=(2.5*#LauncherMargin#)
Y=(#LineHeight#+#VerticalOffset#)r
Hidden=(#ComsSectionCurrentHeightDynamic# > 0 ? 0 : 1)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
Text="Slack"
LeftMouseUpAction=["C:\Users\tedeusz\AppData\Local\slack\slack.exe"]
DynamicVariables=1

[MeterProgramSlackIconInline]
Meter=Image
X=(#IconsOffset#+3*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#ComsSectionCurrentHeightDynamic# > 0 ? 0 : 1)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\slack.png
DynamicVariables=1

[MeterProgramSlackActiveInline]
Meter=Image
X=(#IconsOffset#+3*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#ComsSectionCurrentHeightDynamic# = 0 || [MeasureSlackHideRunning] ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\active-overlay.png
DynamicVariables=1

[MeterProgramDiscordIcon]
Meter=Image
X=(#IconsOffset#+#LineHeight#-#SingleIconOffset#)
Y=(#LauncherMargin#+#SingleIconOffset#)
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#ComsSectionCurrentHeightDynamic# > 0 ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\discord.png
DynamicVariables=1

[MeterProgramDiscordActive]
Meter=Image
X=(#IconsOffset#+#LineHeight#-#SingleIconOffset#)
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#ComsSectionCurrentHeightDynamic# > 0 || [MeasureDiscordHideRunning] ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\active-overlay.png
DynamicVariables=1

[MeterProgramTelegramIcon]
Meter=Image
X=(#IconsOffset#+2*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#ComsSectionCurrentHeightDynamic# > 0 ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\telegram.png
DynamicVariables=1

[MeterProgramTelegramActive]
Meter=Image
X=(#IconsOffset#+2*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#ComsSectionCurrentHeightDynamic# > 0 || [MeasureTelegramHideRunning] ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\active-overlay.png
DynamicVariables=1

[MeterProgramSlackIcon]
Meter=Image
X=(#IconsOffset#+3*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#ComsSectionCurrentHeightDynamic# > 0 ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\slack.png
DynamicVariables=1

[MeterProgramSlackActive]
Meter=Image
X=(#IconsOffset#+3*(#LineHeight#-#SingleIconOffset#))
Y=r
W=(#LineHeight#-2*#SingleIconOffset#)
H=(#LineHeight#-2*#SingleIconOffset#)
Hidden=(#ComsSectionCurrentHeightDynamic# > 0 || [MeasureSlackHideRunning] ? 1 : 0)
Container=MeterLauncherContainer
MeterStyle=PrimaryTextStyle
ImageName=#@#Launcher\Icons\active-overlay.png
DynamicVariables=1
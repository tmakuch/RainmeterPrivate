[RunMeasureDiscord]
Measure=Plugin
Plugin=RunCommand
Program="C:\Users\tedeusz\AppData\Local\Discord\Update.exe"
Parameter="--processStart Discord.exe"
State=Hide

[MeasureDiscordHideRunning]
Measure=Plugin
Plugin=Process
ProcessName=Discord.exe
Substitute="1":"0","-1":"1","-0":"1"

[RunMeasureTelegram]
Measure=Plugin
Plugin=RunCommand
Program="C:\Users\tedeusz\AppData\Roaming\Telegram Desktop\Telegram.exe"
State=Hide

[MeasureTelegramHideRunning]
Measure=Plugin
Plugin=Process
ProcessName=Telegram.exe
Substitute="1":"0","-1":"1","-0":"1"

[RunMeasureSlack]
Measure=Plugin
Plugin=RunCommand
Program="C:\Users\tedeusz\AppData\Local\slack\slack.exe"
State=Hide

[MeasureSlackHideRunning]
Measure=Plugin
Plugin=Process
ProcessName=slack.exe
Substitute="1":"0","-1":"1","-0":"1"

[RunMeasureSteam]
Measure=Plugin
Plugin=RunCommand
Program="C:\Program Files (x86)\Steam\steam.exe"
State=Hide

[MeasureSteamHideRunning]
Measure=Plugin
Plugin=Process
ProcessName=steamwebhelper.exe
Substitute="1":"0","-1":"1","-0":"1"

[RunMeasureBattleNet]
Measure=Plugin
Plugin=RunCommand
Program="C:\Program Files (x86)\Battle.net\Battle.net.exe"
State=Hide

[MeasureBattleNetHideRunning]
Measure=Plugin
Plugin=Process
ProcessName=steamwebhelper.exe
Substitute="1":"0","-1":"1","-0":"1"

[RunMeasureUbisoftConnect]
Measure=Plugin
Plugin=RunCommand
Program="C:\Program Files (x86)\Ubisoft\Ubisoft Game Launcher\UbisoftConnect.exe"
State=Hide

[MeasureUbisoftConnectHideRunning]
Measure=Plugin
Plugin=Process
ProcessName=upc.exe
Substitute="1":"0","-1":"1","-0":"1"

[RunMeasureGOG]
Measure=Plugin
Plugin=RunCommand
Program="C:\Program Files (x86)\GOG Galaxy\GalaxyClient.exe"
State=Hide

[MeasureGOGHideRunning]
Measure=Plugin
Plugin=Process
ProcessName=GalaxyClient.exe
Substitute="1":"0","-1":"1","-0":"1"

[RunMeasureWebstorm]
Measure=Plugin
Plugin=RunCommand
Program="C:\Program Files\JetBrains\WebStorm 2023.1.1\bin\webstorm64.exe"
State=Hide

[MeasureWebstormHideRunning]
Measure=Plugin
Plugin=Process
ProcessName=webstorm64.exe
Substitute="1":"0","-1":"1","-0":"1"

[RunMeasureVSCode]
Measure=Plugin
Plugin=RunCommand
Program="C:\Users\tedeusz\AppData\Local\Programs\Microsoft VS Code\Code.exe"
State=Hide

[MeasureVSCodeHideRunning]
Measure=Plugin
Plugin=Process
ProcessName=Code.exe
Substitute="1":"0","-1":"1","-0":"1"

[RunMeasureAndroidStudio]
Measure=Plugin
Plugin=RunCommand
Program="C:\Program Files\Android\Android Studio\bin\studio64.exe"
State=Hide

[MeasureAndroidStudioHideRunning]
Measure=Plugin
Plugin=Process
ProcessName=studio64.exe
Substitute="1":"0","-1":"1","-0":"1"

[RunMeasureObsStudio]
Measure=Plugin
Plugin=RunCommand
Program="C:\Program Files\obs-studio\bin\64bit\obs64.exe"
State=Hide

[MeasureObsStudioHideRunning]
Measure=Plugin
Plugin=Process
ProcessName=obs64.exe
Substitute="1":"0","-1":"1","-0":"1"

[RunMeasureSoundBoard]
Measure=Plugin
Plugin=RunCommand
Program="C:\Program Files (x86)\Deathcounter and Soundboard\DCSB.exe"
State=Hide

[MeasureSoundBoardHideRunning]
Measure=Plugin
Plugin=Process
ProcessName=DCSB.exe
Substitute="1":"0","-1":"1","-0":"1"

[RunMeasureGimp]
Measure=Plugin
Plugin=RunCommand
Program="C:\Program Files\GIMP 2\bin\gimp-2.10.exe"
State=Hide

[MeasureGimpHideRunning]
Measure=Plugin
Plugin=Process
ProcessName=gimp-2.10.exe
Substitute="1":"0","-1":"1","-0":"1"

[RunMeasureAudacity]
Measure=Plugin
Plugin=RunCommand
Program="C:\Program Files\Audacity\Audacity.exe"
State=Hide

[MeasureAudacityHideRunning]
Measure=Plugin
Plugin=Process
ProcessName=Audacity.exe
Substitute="1":"0","-1":"1","-0":"1"

[RunMeasureBlender]
Measure=Plugin
Plugin=RunCommand
Program="C:\Program Files\Blender Foundation\Blender 3.5\blender-launcher.exe"
State=Hide

[MeasureBlenderHideRunning]
Measure=Plugin
Plugin=Process
ProcessName=blender.exe
Substitute="1":"0","-1":"1","-0":"1"

[RunMeasureHanbBreak]
Measure=Plugin
Plugin=RunCommand
Program="C:\Program Files\HandBrake\HandBrake.exe"
State=Hide

[MeasureHandBreakHideRunning]
Measure=Plugin
Plugin=Process
ProcessName=HandBrake.exe
Substitute="1":"0","-1":"1","-0":"1"
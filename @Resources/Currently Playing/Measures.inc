[MeasureIsSongInfoAvailable]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Status
IfCondition=MeasureIsSongInfoAvailable = 1
IfTrueAction=[!ShowMeterGroup CurrentlyPlayerActiveElements]
IfFalseAction=[!HideMeterGroup CurrentlyPlayerActiveElements]
; fix for pause showing on start
IfCondition2=(MeasureIsSongInfoAvailable = 0) || (MeasurePlayerState = 1)
IfTrueAction2=[!SetOption MeterMusicPausedIndicator Hidden 1]
IfFalseAction2=[!SetOption MeterMusicPausedIndicator Hidden 0]

[MeasureTitle]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Title
UpdateDivider=5

[MeasureArtist]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Artist
UpdateDivider=5

[MeasureAlbumArt]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Cover
DefaultPath=#@#Images\CurrentlyPlayingNoCover.png
UpdateDivider=5

[MeasurePlayerState]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=State
; 0 = Stopped
; 1 = Playing
; 2 = Paused
IfCondition=(MeasureIsSongInfoAvailable = 0) || (MeasurePlayerState = 1)
IfTrueAction=[!SetOption MeterMusicPausedIndicator Hidden 1]
IfFalseAction=[!SetOption MeterMusicPausedIndicator Hidden 0]

[MeasureAlbumArtAddress]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=CoverWebAddress
UpdateDivider=5

[MeasureSongTimePosition]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Position
UpdateDivider=5
Substitute="":" - "

[MeasureSongTimeEnd]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Duration
UpdateDivider = 5
Substitute="":" - "

[MeasureSongTimeProgress]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Progress
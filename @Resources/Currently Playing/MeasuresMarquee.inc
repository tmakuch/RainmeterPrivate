[MeasureMarqueeTitleOffset]
Measure=Calc
Formula=max(0,([MeterSongTitle:W] - [MeterInfoContainer:W]))
DynamicVariables=1

[MeasureMarqueeArtistOffset]
Measure=Calc
Formula=max(0,([MeterSongArtist:W] - [MeterInfoContainer:W]))
DynamicVariables=1


[MeasureMarqueeTimer]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Repeat Move1,#animationSpeed#,[MeasureMarqueeTitleOffset:] | Wait #marqueeEndWait# | Reset1 | Wait #marqueeBeginWait# | DoOver1
Reset1=[!SetVariable MarqueeTitleDynamicVar 0][!UpdateMeasure MeasureMarqueeTimer][!UpdateMeter MeterSongTitle][!Redraw]
Move1=[!SetVariable MarqueeTitleDynamicVar "(#MarqueeTitleDynamicVar# - 1)"][!UpdateMeasure MeasureMarqueeTimer][!UpdateMeter MeterSongTitle][!Redraw]
DoOver1=[!CommandMeasure MeasureMarqueeTimer "Execute 1"]
ActionList2=Repeat Move2,#animationSpeed#,[MeasureMarqueeArtistOffset:] | Wait #marqueeEndWait# | Reset2 | Wait #marqueeBeginWait# | DoOver2
Reset2=[!SetVariable MarqueeArtistDynamicVar 0][!UpdateMeasure MeasureMarqueeTimer][!UpdateMeter MeterSongArtist][!Redraw]
Move2=[!SetVariable MarqueeArtistDynamicVar "(#MarqueeArtistDynamicVar# - 1)"][!UpdateMeasure MeasureMarqueeTimer][!UpdateMeter MeterSongArtist][!Redraw]
DoOver2=[!CommandMeasure MeasureMarqueeTimer "Execute 2"]
DynamicVariables=1
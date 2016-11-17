
;------------------ RAM USAGE

[MeasureRAM]
Measure=PhysicalMemory

[MeasureRAM2]
Measure=Calc
Formula=MeasureRAM/(1024*1024)

[MeasureRAMAvailable]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=0xf0000301
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x8000004
HWiNFOType=CurrentValue

[MeasureRAMUsed]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=0xf0000301
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x8000003
HWiNFOType=CurrentValue

[MeasureRAMTotal]
Measure=Calc
Formula=MeasureRAMUsed+MeasureRAMAvailable

[MeasureRAMClock]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=0xf0000301
HWiNFOSensorInstance=0x1
HWiNFOEntryId=0x6000000
HWiNFOType=CurrentValue

[MeasureRAMClock2]
Measure=Calc
Formula=MeasureRAMClock * 2
;------------------ SWAP USAGE

[MeasureSWAP]
Measure=SwapMemory

[MeasureSWAPValue]
Measure=Calc
Formula=MeasureSWAP/(1024*1024)

[MeasureSWAPAvailable]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=0xf0000301
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x8000001
HWiNFOType=CurrentValue

[MeasureSWAPUsed]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=0xf0000301
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x8000000
HWiNFOType=CurrentValue

[MeasureSWAPTotal]
Measure=Calc
Formula=MeasureSWAPUsed+MeasureSWAPAvailable

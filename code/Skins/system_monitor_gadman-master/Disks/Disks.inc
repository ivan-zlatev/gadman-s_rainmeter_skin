[MeasureUsedDiskSpaceSSD]
Measure=FreeDiskSpace
Drive=C:
InvertMeasure=1
UpdateDivider=5

[MeasureREADSSD]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=0xf0000101
HWiNFOSensorInstance=0x2
HWiNFOEntryId=0x7000000
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

[MeasureWRITESSD]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=0xf0000101
HWiNFOSensorInstance=0x2
HWiNFOEntryId=0x7000001
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

[MeasureUsedDiskSpaceHDD]
Measure=FreeDiskSpace
Drive=D:
InvertMeasure=1
UpdateDivider=5

[MeasureREADHDD]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=0xf0000101
HWiNFOSensorInstance=0x1
HWiNFOEntryId=0x7000000
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

[MeasureWRITEHDD]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=0xf0000101
HWiNFOSensorInstance=0x1
HWiNFOEntryId=0x7000001
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100




[MeasureUsedDiskSpaceSSD2]
Measure=FreeDiskSpace
Drive=E:
InvertMeasure=1
UpdateDivider=5

[MeasureREADSSD2]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=0xf0000101
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x7000000
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

[MeasureWRITESSD2]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=0xf0000101
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x7000001
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

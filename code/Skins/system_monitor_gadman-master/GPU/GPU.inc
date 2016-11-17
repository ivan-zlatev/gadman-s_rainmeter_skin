[MeasureGPUFanRPM]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=0xe0002000
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x3000000
HWiNFOType=CurrentValue
MinValue=200
MaxValue=2200

[MeasureGPUVideoClock]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=0xe0002000
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x6000005
HWiNFOType=CurrentValue

[MeasureGPUMemoryClock]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=0xe0002000
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x6000004
HWiNFOType=CurrentValue

[MeasureGPUMemoryAllocated]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=0xe0002000
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x800003c
HWiNFOType=CurrentValue
MinValue=0
MaxValue=4096

;----- percent

[MeasureGPUMemoryUsage]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=0xe0002000
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x7000008
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

[MeasureGPUCoreLoad]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=0xe0002000
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x7000000
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

;------- temp

[MeasureGPUCoreTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=0xe0002000
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x1000000
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100


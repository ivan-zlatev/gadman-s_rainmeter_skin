;------------------- CPU USAGE
[MeasureCPU0Value]
Measure=CPU

[MeasureCPU1Value]
Measure=CPU
Processor=1

[MeasureCPU2Value]
Measure=CPU
Processor=2

[MeasureCPU3Value]
Measure=CPU
Processor=3

[MeasureCPU4Value]
Measure=CPU
Processor=4

;------------------ CPU Threads Usage
[MeasureCPU0Thread0]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=0xf0000300
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x7000000
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

[MeasureCPU0Thread1]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=0xf0000300
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x7000001
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

[MeasureCPU1Thread0]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=0xf0000300
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x7000002
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

[MeasureCPU1Thread1]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=0xf0000300
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x7000003
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

[MeasureCPU2Thread0]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=0xf0000300
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x7000004
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

[MeasureCPU2Thread1]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=0xf0000300
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x7000005
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

[MeasureCPU3Thread0]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=0xf0000300
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x7000006
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

[MeasureCPU3Thread1]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=0xf0000300
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x7000007
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

;------------------ CPU Core Clock
[MeasureCPU0Core0]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=0xf0000300
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x6000000
HWiNFOType=CurrentValue

[MeasureCPU0Core1]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=0xf0000300
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x6000001
HWiNFOType=CurrentValue

[MeasureCPU0Core2]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=0xf0000300
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x6000002
HWiNFOType=CurrentValue

[MeasureCPU0Core3]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=0xf0000300
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x6000003
HWiNFOType=CurrentValue
;------------------ CPU TEMP

[MeasureCPUTemp0Value]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=0xf0002a00
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x1000004
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

;------------------ CPU FAN

[MeasureCPUFanRPMValue]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=0xf0008628
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x3000000
HWiNFOType=CurrentValue
MinValue=1000
MaxValue=2000
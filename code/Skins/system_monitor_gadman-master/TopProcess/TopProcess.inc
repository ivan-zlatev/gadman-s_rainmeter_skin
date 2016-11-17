
;---------------------------------------------------------------------
; MEASURES

[MeasureCores]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=SYSTEM\CurrentControlSet\Control\Session Manager\Environment
RegValue=NUMBER_OF_PROCESSORS
UpdateDivider=-1

[MeasureProcess1]
Measure=Plugin
Plugin=AdvancedCPU
TopProcess=1
CPUExclude=Idle

[MeasureProcess1Name]
Measure=Plugin
Plugin=AdvancedCPU
TopProcess=2
CPUExclude=Idle

[MeasureProcess2]
Measure=Plugin
Plugin=AdvancedCPU
TopProcess=1
CPUExclude=Idle;[MeasureProcess1Name]
DynamicVariables=1

[MeasureProcess2Name]
Measure=Plugin
Plugin=AdvancedCPU
TopProcess=2
CPUExclude=Idle;[MeasureProcess1Name]
DynamicVariables=1

[MeasureProcess3]
Measure=Plugin
Plugin=AdvancedCPU
TopProcess=1
CPUExclude=Idle;[MeasureProcess1Name];[MeasureProcess2Name]
DynamicVariables=1

[MeasureProcess3Name]
Measure=Plugin
Plugin=AdvancedCPU
TopProcess=2
CPUExclude=Idle;[MeasureProcess1Name];[MeasureProcess2Name]
DynamicVariables=1

[MeasureProcess4]
Measure=Plugin
Plugin=AdvancedCPU
TopProcess=1
CPUExclude=Idle;[MeasureProcess1Name];[MeasureProcess2Name];[MeasureProcess3Name]
DynamicVariables=1

[MeasureProcess4Name]
Measure=Plugin
Plugin=AdvancedCPU
TopProcess=2
CPUExclude=Idle;[MeasureProcess1Name];[MeasureProcess2Name];[MeasureProcess3Name]
DynamicVariables=1

[MeasureProcess5]
Measure=Plugin
Plugin=AdvancedCPU
TopProcess=1
CPUExclude=Idle;[MeasureProcess1Name];[MeasureProcess2Name];[MeasureProcess3Name];[MeasureProcess4Name]
DynamicVariables=1

[MeasureProcess5Name]
Measure=Plugin
Plugin=AdvancedCPU
TopProcess=2
CPUExclude=Idle;[MeasureProcess1Name];[MeasureProcess2Name];[MeasureProcess3Name];[MeasureProcess4Name]
DynamicVariables=1

[MeasureProcess6]
Measure=Plugin
Plugin=AdvancedCPU
TopProcess=1
CPUExclude=Idle;[MeasureProcess1Name];[MeasureProcess2Name];[MeasureProcess3Name];[MeasureProcess4Name];[MeasureProcess5Name]
DynamicVariables=1

[MeasureProcess6Name]
Measure=Plugin
Plugin=AdvancedCPU
TopProcess=2
CPUExclude=Idle;[MeasureProcess1Name];[MeasureProcess2Name];[MeasureProcess3Name];[MeasureProcess4Name];[MeasureProcess5Name]
DynamicVariables=1

[MeasureProcess7]
Measure=Plugin
Plugin=AdvancedCPU
TopProcess=1
CPUExclude=Idle;[MeasureProcess1Name];[MeasureProcess2Name];[MeasureProcess3Name];[MeasureProcess4Name];[MeasureProcess5Name];[MeasureProcess6Name]
DynamicVariables=1

[MeasureProcess7Name]
Measure=Plugin
Plugin=AdvancedCPU
TopProcess=2
CPUExclude=Idle;[MeasureProcess1Name];[MeasureProcess2Name];[MeasureProcess3Name];[MeasureProcess4Name];[MeasureProcess5Name];[MeasureProcess6Name]
DynamicVariables=1

[MeasureProcess8]
Measure=Plugin
Plugin=AdvancedCPU
TopProcess=1
CPUExclude=Idle;[MeasureProcess1Name];[MeasureProcess2Name];[MeasureProcess3Name];[MeasureProcess4Name];[MeasureProcess5Name];[MeasureProcess6Name];[MeasureProcess7Name]
DynamicVariables=1

[MeasureProcess8Name]
Measure=Plugin
Plugin=AdvancedCPU
TopProcess=2
CPUExclude=Idle;[MeasureProcess1Name];[MeasureProcess2Name];[MeasureProcess3Name];[MeasureProcess4Name];[MeasureProcess5Name];[MeasureProcess6Name];[MeasureProcess7Name]
DynamicVariables=1

;-----------------------

[MeasureProcess1Bar]
Measure=Calc
Formula=1

[MeasureProcess2Bar]
Measure=Calc
Formula=MeasureProcess2 / ((MeasureProcess1 > 0) ? MeasureProcess1 : 1)

[MeasureProcess3Bar]
Measure=Calc
Formula=MeasureProcess3 / ((MeasureProcess1 > 0) ? MeasureProcess1 : 1)

[MeasureProcess4Bar]
Measure=Calc
Formula=MeasureProcess4 / ((MeasureProcess1 > 0) ? MeasureProcess1 : 1)

[MeasureProcess5Bar]
Measure=Calc
Formula=MeasureProcess5 / ((MeasureProcess1 > 0) ? MeasureProcess1 : 1)

[MeasureProcess6Bar]
Measure=Calc
Formula=MeasureProcess6 / ((MeasureProcess1 > 0) ? MeasureProcess1 : 1)

[MeasureProcess7Bar]
Measure=Calc
Formula=MeasureProcess7 / ((MeasureProcess1 > 0) ? MeasureProcess1 : 1)

[MeasureProcess8Bar]
Measure=Calc
Formula=MeasureProcess8 / ((MeasureProcess1 > 0) ? MeasureProcess1 : 1)

;---------------------------------------------------------------------
; METERS

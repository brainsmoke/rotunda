EESchema Schematic File Version 2
LIBS:power
LIBS:device
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
LIBS:stm32f030f4
LIBS:baduino-cache
LIBS:rotunda_base-cache
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L STM32F030F4 IC1
U 1 1 58A0D67A
P 4800 3150
F 0 "IC1" H 4800 2100 60  0000 C CNN
F 1 "STM32F030F4" H 4800 2650 60  0000 C CNN
F 2 "rtunda:TSSOP20" H 4800 3150 60  0000 C CNN
F 3 "" H 4800 3150 60  0000 C CNN
	1    4800 3150
	1    0    0    -1  
$EndComp
$Comp
L C C1
U 1 1 58A0D7F7
P 2450 3250
F 0 "C1" H 2475 3350 50  0000 L CNN
F 1 "C" H 2475 3150 50  0000 L CNN
F 2 "rtunda:R_0603" H 2488 3100 50  0000 C CNN
F 3 "" H 2450 3250 50  0000 C CNN
	1    2450 3250
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR01
U 1 1 58A0D88C
P 7600 3750
F 0 "#PWR01" H 7600 3500 50  0001 C CNN
F 1 "GND" H 7600 3600 50  0000 C CNN
F 2 "" H 7600 3750 50  0000 C CNN
F 3 "" H 7600 3750 50  0000 C CNN
	1    7600 3750
	1    0    0    -1  
$EndComp
$Comp
L VCC #PWR02
U 1 1 58A0D8AA
P 7600 3000
F 0 "#PWR02" H 7600 2850 50  0001 C CNN
F 1 "VCC" H 7600 3150 50  0000 C CNN
F 2 "" H 7600 3000 50  0000 C CNN
F 3 "" H 7600 3000 50  0000 C CNN
	1    7600 3000
	1    0    0    -1  
$EndComp
$Comp
L VCC #PWR03
U 1 1 58A0D8D1
P 2450 2850
F 0 "#PWR03" H 2450 2700 50  0001 C CNN
F 1 "VCC" H 2450 3000 50  0000 C CNN
F 2 "" H 2450 2850 50  0000 C CNN
F 3 "" H 2450 2850 50  0000 C CNN
	1    2450 2850
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR04
U 1 1 58A0DA65
P 7400 3750
F 0 "#PWR04" H 7400 3500 50  0001 C CNN
F 1 "GND" H 7400 3600 50  0000 C CNN
F 2 "" H 7400 3750 50  0000 C CNN
F 3 "" H 7400 3750 50  0000 C CNN
	1    7400 3750
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR05
U 1 1 58A0DB5F
P 2450 3800
F 0 "#PWR05" H 2450 3550 50  0001 C CNN
F 1 "GND" H 2450 3650 50  0000 C CNN
F 2 "" H 2450 3800 50  0000 C CNN
F 3 "" H 2450 3800 50  0000 C CNN
	1    2450 3800
	1    0    0    -1  
$EndComp
$Comp
L C C2
U 1 1 58A0DBB5
P 7600 3250
F 0 "C2" H 7625 3350 50  0000 L CNN
F 1 "C" H 7625 3150 50  0000 L CNN
F 2 "rtunda:R_0603" H 7638 3100 50  0000 C CNN
F 3 "" H 7600 3250 50  0000 C CNN
	1    7600 3250
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X01 P1
U 1 1 58A0DC3E
P 2550 4600
F 0 "P1" H 2550 4700 50  0000 C CNN
F 1 "CONN_01X01" H 2900 4600 50  0000 C CNN
F 2 "rtunda:pin" H 2550 4600 50  0001 C CNN
F 3 "" H 2550 4600 50  0000 C CNN
	1    2550 4600
	0    1    1    0   
$EndComp
$Comp
L CONN_01X01 P2
U 1 1 58A0E369
P 2800 4600
F 0 "P2" H 2800 4700 50  0000 C CNN
F 1 "CONN_01X01" H 3150 4600 50  0000 C CNN
F 2 "rtunda:pin" H 2800 4600 50  0001 C CNN
F 3 "" H 2800 4600 50  0000 C CNN
	1    2800 4600
	0    1    1    0   
$EndComp
$Comp
L CONN_01X01 P3
U 1 1 58A0E39E
P 3050 4600
F 0 "P3" H 3050 4700 50  0000 C CNN
F 1 "CONN_01X01" H 3400 4600 50  0000 C CNN
F 2 "rtunda:pin" H 3050 4600 50  0001 C CNN
F 3 "" H 3050 4600 50  0000 C CNN
	1    3050 4600
	0    1    1    0   
$EndComp
$Comp
L CONN_01X01 P4
U 1 1 58A0E3E0
P 3300 4600
F 0 "P4" H 3300 4700 50  0000 C CNN
F 1 "CONN_01X01" H 3650 4600 50  0000 C CNN
F 2 "rtunda:pin" H 3300 4600 50  0001 C CNN
F 3 "" H 3300 4600 50  0000 C CNN
	1    3300 4600
	0    1    1    0   
$EndComp
$Comp
L CONN_01X01 P5
U 1 1 58A0E420
P 3550 4600
F 0 "P5" H 3550 4700 50  0000 C CNN
F 1 "CONN_01X01" H 3900 4600 50  0000 C CNN
F 2 "rtunda:pin" H 3550 4600 50  0001 C CNN
F 3 "" H 3550 4600 50  0000 C CNN
	1    3550 4600
	0    1    1    0   
$EndComp
$Comp
L CONN_01X01 P6
U 1 1 58A0E6DA
P 6050 4600
F 0 "P6" H 6050 4700 50  0000 C CNN
F 1 "CONN_01X01" H 6400 4600 50  0000 C CNN
F 2 "rtunda:pin" H 6050 4600 50  0001 C CNN
F 3 "" H 6050 4600 50  0000 C CNN
	1    6050 4600
	0    1    1    0   
$EndComp
$Comp
L CONN_01X01 P7
U 1 1 58A0E6E0
P 6300 4600
F 0 "P7" H 6300 4700 50  0000 C CNN
F 1 "CONN_01X01" H 6650 4600 50  0000 C CNN
F 2 "rtunda:pin" H 6300 4600 50  0001 C CNN
F 3 "" H 6300 4600 50  0000 C CNN
	1    6300 4600
	0    1    1    0   
$EndComp
$Comp
L CONN_01X01 P8
U 1 1 58A0E6E6
P 6550 4600
F 0 "P8" H 6550 4700 50  0000 C CNN
F 1 "CONN_01X01" H 6900 4600 50  0000 C CNN
F 2 "rtunda:pin" H 6550 4600 50  0001 C CNN
F 3 "" H 6550 4600 50  0000 C CNN
	1    6550 4600
	0    1    1    0   
$EndComp
$Comp
L CONN_01X01 P9
U 1 1 58A0E6EC
P 6800 4600
F 0 "P9" H 6800 4700 50  0000 C CNN
F 1 "CONN_01X01" H 7150 4600 50  0000 C CNN
F 2 "rtunda:pin" H 6800 4600 50  0001 C CNN
F 3 "" H 6800 4600 50  0000 C CNN
	1    6800 4600
	0    1    1    0   
$EndComp
$Comp
L CONN_01X01 P10
U 1 1 58A0E6F2
P 7050 4600
F 0 "P10" H 7050 4700 50  0000 C CNN
F 1 "CONN_01X01" H 7400 4600 50  0000 C CNN
F 2 "rtunda:pin" H 7050 4600 50  0001 C CNN
F 3 "" H 7050 4600 50  0000 C CNN
	1    7050 4600
	0    1    1    0   
$EndComp
Wire Wire Line
	2450 2850 2450 3100
Wire Wire Line
	2450 3100 3700 3100
Connection ~ 7600 3100
Wire Wire Line
	5900 3250 7400 3250
Wire Wire Line
	7600 3750 7600 3400
Wire Wire Line
	7400 3250 7400 3750
Wire Wire Line
	5900 3100 7600 3100
Wire Wire Line
	7600 3100 7600 3000
Wire Wire Line
	2450 3800 2450 3400
Wire Wire Line
	3700 3250 2550 3250
Wire Wire Line
	2550 3250 2550 4400
Wire Wire Line
	2800 4400 2800 3400
Wire Wire Line
	2800 3400 3700 3400
Wire Wire Line
	3700 3550 3050 3550
Wire Wire Line
	3050 3550 3050 4400
Wire Wire Line
	3300 4400 3300 3700
Wire Wire Line
	3300 3700 3700 3700
Wire Wire Line
	3700 3850 3550 3850
Wire Wire Line
	3550 3850 3550 4400
Wire Wire Line
	6050 4400 6050 3850
Wire Wire Line
	6050 3850 5900 3850
Wire Wire Line
	6300 4400 6300 3700
Wire Wire Line
	6300 3700 5900 3700
Wire Wire Line
	6550 4400 6550 3550
Wire Wire Line
	6550 3550 5900 3550
Wire Wire Line
	6800 4400 6800 2950
Wire Wire Line
	6800 2950 5900 2950
Wire Wire Line
	7050 4400 7050 2800
Wire Wire Line
	7050 2800 5900 2800
$Comp
L VCC #PWR06
U 1 1 58A0ECF6
P 9500 3250
F 0 "#PWR06" H 9500 3100 50  0001 C CNN
F 1 "VCC" H 9500 3400 50  0000 C CNN
F 2 "" H 9500 3250 50  0000 C CNN
F 3 "" H 9500 3250 50  0000 C CNN
	1    9500 3250
	1    0    0    -1  
$EndComp
Wire Wire Line
	9700 3750 9500 3750
Wire Wire Line
	9500 3750 9500 3250
$Comp
L GND #PWR07
U 1 1 58A0EE16
P 9500 4550
F 0 "#PWR07" H 9500 4300 50  0001 C CNN
F 1 "GND" H 9500 4400 50  0000 C CNN
F 2 "" H 9500 4550 50  0000 C CNN
F 3 "" H 9500 4550 50  0000 C CNN
	1    9500 4550
	1    0    0    -1  
$EndComp
Wire Wire Line
	9700 3950 9500 3950
Wire Wire Line
	9500 3950 9500 4550
Text Label 9000 3850 0    60   ~ 0
SWCLK
Text Label 9000 4050 0    60   ~ 0
SWDIO
Text Label 9000 4150 0    60   ~ 0
NRST
Wire Wire Line
	9700 4150 9000 4150
Wire Wire Line
	9000 4050 9700 4050
Wire Wire Line
	9700 3850 9000 3850
Text Label 3400 2950 0    60   ~ 0
NRST
Text Label 6100 2650 0    60   ~ 0
SWDIO
Text Label 6100 2500 0    60   ~ 0
SWCLK
Wire Wire Line
	6100 2500 5900 2500
Wire Wire Line
	5900 2650 6100 2650
Wire Wire Line
	3400 2950 3700 2950
$Comp
L CONN_01X05 P11
U 1 1 58A0F5C7
P 9900 3950
F 0 "P11" H 9900 4250 50  0000 C CNN
F 1 "CONN_01X05" V 10000 3950 50  0000 C CNN
F 2 "rtunda:stmdiscswd_5pin" H 10100 3600 50  0000 C CNN
F 3 "" H 9900 3950 50  0000 C CNN
	1    9900 3950
	1    0    0    -1  
$EndComp
$Comp
L R R1
U 1 1 58A0F7E4
P 2050 3250
F 0 "R1" V 2130 3250 50  0000 C CNN
F 1 "10k" V 2050 3250 50  0000 C CNN
F 2 "rtunda:R_0603" V 1980 3250 50  0000 C CNN
F 3 "" H 2050 3250 50  0000 C CNN
	1    2050 3250
	1    0    0    -1  
$EndComp
Wire Wire Line
	3700 2500 2050 2500
Wire Wire Line
	2050 2500 2050 3100
$Comp
L GND #PWR08
U 1 1 58A0F953
P 2050 3800
F 0 "#PWR08" H 2050 3550 50  0001 C CNN
F 1 "GND" H 2050 3650 50  0000 C CNN
F 2 "" H 2050 3800 50  0000 C CNN
F 3 "" H 2050 3800 50  0000 C CNN
	1    2050 3800
	1    0    0    -1  
$EndComp
Wire Wire Line
	2050 3400 2050 3800
$Comp
L Battery_Cell BT1
U 1 1 58A1021B
P 8450 1950
F 0 "BT1" H 8550 2050 50  0000 L CNN
F 1 "Battery_Cell" H 8550 1950 50  0000 L CNN
F 2 "rtunda:bk-913" V 8450 2010 50  0000 C CNN
F 3 "" V 8450 2010 50  0000 C CNN
	1    8450 1950
	1    0    0    -1  
$EndComp
$Comp
L VCC #PWR09
U 1 1 58A1056E
P 8450 1500
F 0 "#PWR09" H 8450 1350 50  0001 C CNN
F 1 "VCC" H 8450 1650 50  0000 C CNN
F 2 "" H 8450 1500 50  0000 C CNN
F 3 "" H 8450 1500 50  0000 C CNN
	1    8450 1500
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR010
U 1 1 58A105A9
P 8450 2300
F 0 "#PWR010" H 8450 2050 50  0001 C CNN
F 1 "GND" H 8450 2150 50  0000 C CNN
F 2 "" H 8450 2300 50  0000 C CNN
F 3 "" H 8450 2300 50  0000 C CNN
	1    8450 2300
	1    0    0    -1  
$EndComp
Wire Wire Line
	8450 2300 8450 2050
Wire Wire Line
	8450 1750 8450 1500
$EndSCHEMATC

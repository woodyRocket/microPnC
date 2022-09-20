# microPnC


***Summary***


Hi, we are Group 2 in the **Microprocessors and Microcontrollers (CO3009)** course. This is a brief introduction of our group and shortcut of course's project in 12 weeks. In this project, we will implement **a Traffic Light**, which includes all think-able and do-able features via C and embedded board. Suggestions are appreciated 

Any updates will be added soon.

### DEADLINES

- 13/09/2022: Please write a **proposal** including all possible features for the Traffic Light project (the more the better). Have a **plan** for your group to work in 12 weeks.
- Detailed plan will be posted here [**PLAN**](https://docs.google.com/spreadsheets/d/1lYaAuqjyAvRWOp0LWpBjZ417HS-iejlbVqwVeRNuYsQ/edit?usp=sharing)

### MEMBERS

|Name|Student ID|Email|
|----|----------|-----|
|Nguyễn Tiến Trung|2052353|trung.nguyen001@hcmut.edu.vn|
|Trịnh Tiến Long|1852047|
|Hồ Bình Minh|1852169|
|Hoàng Đỗ Phương Nguyên|1952360|
|Ngô Nguyễn Khôi Nguyên|1952544|
|Phan Văn Sỹ|1852721|

### PREPARATIONS

- A development board and a LED board (given)
- A programmer ST Link v2 (got it)
- USB to Uart cable (got it)

***Anything needed, please update***

### REQUIREMENTS

1. Should have a clear architecture
2. Should have version control (ie: GitHub repo) 
3. Should follow MISRA C Standard, C coding style guide
4. Should have unit tests
5. Should have a system health check function
6. Should have cooperative scheduler
7. Should use doxygen for document your project

Check other requirements periodically **[here](https://docs.google.com/spreadsheets/d/1SUL3xgkhQRTAtkX942qr3GGn6lSHPD3pSeOAPCXWb1s/edit#gid=0)**

### FEATURES 

1. ***Pedestrian crossing signal*** 

    Normally, the traffic light has 3 LEDs with hidden timer to control the vehicles at the 4-way intersection. Instead of letting pedestrians walk across the street freely, there is an another LED (beside 3-LED traffic light) with timer to indicate whether they can walk across. The traffic light takes external input from human's interaction by button and integrates to normal traffic light. The pedestrians can walk first when they see the extra LED turning on in the opposite streetview, then the vehicles can move in consecutive order. In case there is no external input, the traffic light works as normal. 
    
    In terms of equipment, we may need 5 LEDs (3 front for normal traffic light, 1 front for pedestrian signal, and 1 rear for opposite vehicles) and 1 button for human interactive input.
    
    How it work (rules):
  
2. ***Working mode and Stall mode***
    
    Usually, the traffic light has its working mode during daylight and stall mode during night. The working mode is set from 4AM to 12AM, when a large amount of the vehicles driving across the road. It composes of normal traffic light and be compatible with pedestrian crossing LED. In the rest of the day (12AM to 4AM), the traffic light is set in the stall mode, and only yellow LED is turned on without timer while other LEDs are blinking. The crossing LED is turned off during stall mode, and the pedestrians have to improvisionally crossing the street (negotiate with vehicles xD)
    
    We want to activate and deactivate stall mode by Real-time clock signal, and automatically switch at 12AM and 4AM.

3. ***Auto-Brightness modification*** 

    Normally in the daylight, the brightness of LEDs is set at 75% to reduce power consumption and prolong their life span. Depending on the bad weather condition, the brightness of the LEDs is modified by changing the input electrical current (voltage). For example, in the foggy and rainy weather, the brightness of LEDs is automatically changed to 100% by increasing the input current (voltage). Hence, vehicles and pedestrians will have better vision at the intersection during bad weather conditions. 
    
    We think humidity, rain, and light sensor will be employed to detect the weather conditions. 

4. ***Automatic and manual changing timer***

    We aim to design the traffic light with flexible and fixed timer. In the fixed timer,   

5. ***Memory in critical events***

    In the sudden and critical events, the traffic light has the backup memory to store the latest state of traffic light including timer, LEDs, brightness, automatic or manual mode, working or stall mode, etc. Basically, instead of interacting with processor, we can use DMA in the MCU to directly access the memory, bypassing the processor. Luckily, in the STM32F103RT6, we have internal SRAM and internal Flash memory to store data, and this feature relies solely on the design, architecture and coding. Hence, we do not need external peripherals.
    
6. ***Crossing red light detection***

    An IR detector is attached to the 4 traffic lights at the intersection to detect the whether the vehicles cross the intersection when the red LED is on. 

### USEFUL LINKS 

*It actually saves time for setup*

1. [Clone ST Link V2 Setup](https://github.com/rogerclarkmelbourne/Arduino_STM32/wiki/Programming-an-STM32F103XXX-with-a-generic-%22ST-Link-V2%22-programmer-from-Linux)
2. [STM32-base (ignore PlatformIO)](https://stm32-base.org/guides/)
3. [Setup STM32 Long video](https://www.youtube.com/watch?v=xsYIh1sunso&list=PLdMwxwrniaL81t6xhA2no3skrAzPL5v7s&index=2&ab_channel=iforce2d)
4. [Basic output pin LED explanation](https://www.youtube.com/watch?v=mOGqNwTjEGM&t=1226s&ab_channel=TerminalTwo)

### REFERENCES

\[1\]

\[2\]

\[3\]

...

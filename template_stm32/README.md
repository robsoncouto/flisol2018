STM32 blink test
==============
Based on Geoffrey Brown's template and example code. 

Blinks the LED2 on a STM MINI v3

Using stm32flash, hold the BOOT0 button and press reset. The board will enter the bootloader

stm32flash /dev/ttyUSB0 -w Demo.bin 

Needs arm-gcc-eabi-none package to be installed

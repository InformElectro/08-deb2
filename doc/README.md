#       Project 08-deb2

###      Hardware

  ESP32 development board  
  2 Tact switch  
  Jumper wire  
  Filter capacitor  

###      Connections

  From GND and from 3V3 on ESP32 development board to both negative (blue) and positive rails of one side  

  From GPIO 'PUSH_00' to one side of Tact switch 0  
  From the other side of Tact switch to negative (blue) rail  
  From GPIO 'PUSH_01'  to one side of Tact switch 1  
  From the other side of Tact switch to negative (blue) rail  

  Between both power supply rails (red and blue, a capacitor in order to filter 3V3 power supply  

  Please note, if one of tact switch is that marked as 'BOOT' or 'IO0' in board, connection must not be done and only must be defined as GPIO 0, as is defined PUSH_00 originally in platformio.ini

  If user want to use more tact switches, please connect other as indicated and define GPIO's in platformio.ini

###      Software nodifications

  If user add more switches, proceed as follows:

  1. Connect each switch as stated in _Connections_.
  2. Add GPIO number under _build_flags_ in platformio.ini
  3. Edit _push.h_ and add symbolic name of each switch in enum
  4. Edit _push.cpp_ and add GPIO name in array _pin_ 
  5. After that, always refer in your program using the symbolic name defined in _enum_

###     Important Notes

  Please, remember that not all GPIOs may be used; consult Web document named _ESP32 Pinout Reference: Which GPIO pins should you use?_


##      Web documents

   [The simplest button debounce solution](https://www.e-tinkers.com/2021/05/the-simplest-button-debounce-solution/)  
   [A Guide to debouncing. Part 2](http://www.ganssle.com/debouncing-pt2.htm)  

   [ESP32 Pinout Reference: Which GPIO pins should you use?](https://randomnerdtutorials.com/esp32-pinout-reference-gpios/)

##      debounce library github

   [e-tinkers/button](https://github.com/e-tinkers/button)



Quiz-Master
===========

A handy GUI tool for quiz master with buzzer and timer countdown.


This app has two parts:
  (1) buzzer
  (2) Timer
  

Buzzer:
  This part works with hardware module. The controller with which buzzer is connected, communicates with this application      through UART. Normally the controller keeps sending '0'. It sends '1', '2'.. as per team which presses buzzer first.
    The values transmitted through UART can be read by Python using "pyserial" library and these values processed by Python     are written on "Portvalues.txt" file.
    There is a "teams.txt" file in project folder which contains team names. The first line of this file is a greeting         message that you want to show normally. i.e "Ready?". 
    
    
Timer: 
  This part has a text box in which you can write time(in seconds). Pressing "Enter key" will start count down and at the end it will show "Times Up!" message.

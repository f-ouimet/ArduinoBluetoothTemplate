# ArduinoBluetoothTemplate
An Arduino template for bluetooth and serial communication via HC-05 or HC-06 modules

## Arduino 
The arduino script takes an input from a serial terminal (without CR & NL for HC-06) and sends it via a bluetooth connection. The script can be ran without a receiver for the bluetooth data and will allow sending AT commands directly to the HC-06 module (see: http://wiki.sunfounder.cc/images/7/7b/HC-06_AT_Commands_Reference.pdf). The response will then be caught with our char response variable and printed in the terminal.

## Python Script
The python script uses the pybluez library to establish and get data from a bluetooth connection. The MAC address of the HC-05 or 06 module will need to be written manually (may update to auto-sniff in the future).
The pybluez library needs to be installed locally (see: https://github.com/pybluez/pybluez). 

## Circuit schematic
TODO

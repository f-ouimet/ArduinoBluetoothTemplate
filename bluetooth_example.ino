/**
 * This program can send messages from the arduino (or other) serial monitor
 * via bluetooth.
 * A python script using pybluez and the HC-06 MAC Address can then 
 * receive the message.
*/
#include <SoftwareSerial.h>

//Pins here can be changed
#define HC06_RX_PIN 2  // Connect from Arduino to HC-06 TXD
#define HC06_TX_PIN 4  // Connect from Arduino to HC-06 RXD

//new bluetooth connection
SoftwareSerial bluetooth(HC06_RX_PIN, HC06_TX_PIN); // 

void setup() {
  //Set baud rates
  Serial.begin(9600);
  Serial.println("Enter a command to send:");
  bluetooth.begin(9600);
}

void loop() {
  // Check for data from the serial connection
  if (Serial.available()) {
    // Read the data from the serial monitor
    char command = Serial.read();
    Serial.print(command);
    // Send the command to the HC-06
    //This should be what the python script receives
    bluetooth.write(command);
  }
  
  // Check for data from the HC-06
  // Could have some use cases (AT responses, etc.)
  if (bluetooth.available()) {
    // Read the data from the HC-06
    char response = bluetooth.read();
    // Send the response to the serial monitor
    Serial.write(response);
  }
}

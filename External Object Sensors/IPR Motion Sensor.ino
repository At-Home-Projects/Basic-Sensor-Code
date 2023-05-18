
/*
* This is code for a PIR motion sensor with arduino.
* Note that it takes aprox 5 sec for the sensor to recognize there is no motion after it is enitaly detected
*
* refrence websites:
*
* Code:
*
* https://wokwi.com/projects/299284655047180808 
*
* https://www.tinkercad.com/things/jLFSyDIIEpj-pir-motion-sensor-with-arduino-blocks (copy and change to text)
*
* Tutorials:
*
* https://lastminuteengineers.com/pir-sensor-arduino-tutorial/ 
*
* https://www.instructables.com/PIR-Motion-Sensor-Tutorial/
*/


int pirPin = 10;   // pin for the signal wire of the snsor
int pirState;  // if the sensor is curently detectin motion (so that it only prints when the state changes)


void setup() {

  Serial.begin(9600); // setup serial monitor
 
  pinMode(pirPin, INPUT); // setup sensor pin as an input

}

void loop() {
  if (digitalRead(pirPin) == HIGH) { // if motion is detected
  
    if (pirState == LOW){  // if there was just no motion
    
      pirState = HIGH; // set the variable to motion = true
      Serial.println("Motion start!"); // print motion start
    
    }
  
  } else { // if there is no motion
    
    if (pirState == HIGH) { // if there was just motion
    
    pirState = LOW; // set the variable to motion = false
    Serial.println("Motion stop!"); // print motion stop
    
    }
  }

}

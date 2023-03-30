/*
* in this code the sensor's signal wire is pluged into pin 8 (does not need to be PWM)
*/


int data = 0; // variable to hold the binary (High Low) value of the ir sensor


void setup() {
Serial.begin(9600); // set up serial monitor
}

void loop() {

  data = digitalRead(8);        // tell the data variable to hold the reading of the sensor
  Serial.print("IR value = ");  // print ir value for clarity (not nessesary)
  Serial.println(data);         // print the value of the sensor (0 = white 1 = black)

}

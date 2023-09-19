
/*
* addapeted form: https://lastminuteengineers.com/fsr-arduino-tutorial/
* use a 100K resistor
* The smaller the FSR, the more accurate it will be. usualy larger ones will be able to sense a larger range, but not as accurately.
*/


int fsrPin = 2;    // the FSR is connected to a0
int fsrData;       // the analog reading from the FSR resistor divider
 
void setup(void) {
  Serial.begin(9600);  // setup the serial monitor
}
 
void loop(void) {
  fsrData = analogRead(fsrPin);  // get the resistance of the FSR
 
  // print the raw analog reading
  Serial.print("FSR reading = ");
  Serial.print(fsrData);
  
  // calculate the pressure applied (This may varry for your sensor)
  if (fsrData < 10) {
    Serial.println(" - No pressure");
  } else if (fsrData < 200) {
    Serial.println(" - Light touch");
  } else if (fsrData < 500) {
    Serial.println(" - Light squeeze");
  } else if (fsrData < 800) {
    Serial.println(" - Medium squeeze");
  } else {
    Serial.println(" - Big squeeze");
  }
  delay(1000); // wait 1 sec for readablility
}

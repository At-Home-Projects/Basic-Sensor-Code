
// temp sensor variables
int tempSensPin = A0;  // variable for the temperature sensor pin
int tempRead = 0;  // variable for the signal the sensor returns

float volt = 0.0;  // variable to calculate the voltage of the returned signal
float tempC = 0.0; // variable for celcus
float tempF = 0.0; // variable for ferenhight

void setup() {

  Serial.begin(9600); // setup serial monitor
  
}

void loop() {

  tempRead = analogRead(tempSensPin);  // read the sensor

  volt = (tempRead*5.0)/1024; // calculate the returned voltage of the sensor
  tempC = (volt - 0.5)*100;   // calculate celcius
  tempF = (tempC*9.0/5.0)+32.0;  // calculate farenhight

  Serial.print(tempF); // pint temperature in farenhight
  Serial.println(" F°");  // print the farenhight label

  delay(200);  // wait 0.2 sec
  
}

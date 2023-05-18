
int button_Pin = 13; // set button in pin 13 (pin does not need to be PWM)


void setup() {
  
  Serial.begin(9600);                // set up serial monotor
  pinMode(button_Pin, INPUT_PULLUP); // set up button (define as input)

}

void loop() {

if (digitalRead(button_Pin) == LOW) { // if the buton is presed
  Serial.println("Presed!");          // print Presed! to the serial moitor
  
} else { // if the button is not presed
  Serial.println("Not presed"); // print Nope! to ther serial monitor
}

delay(100); // wait 0.1 seconds

}

int RED = 8
int YELLOW = 10
int GREEN = 12

void setup() {
 //the ports to switch the LEDs are connected are our outputs
 pinMode(RED, OUTPUT);
 pinMode(YELLOW, OUTPUT);
 pinMode(GREEN, OUTPUT);

}

void loop() {
 //Turning on voltage at red LED
 digitalWrite(8, HIGH);
 //Let it light 3 seconds
 delay(3000);
 //Turning on voltage at yellow LED
 digitalWrite(10, HIGH);
 delay(1000);
 //Turning off red and yellow, turning on green
 digitalWrite(RED, LOW);
 digitalWrite(YELLOW, LOW);
 digitalWrite(GREEN, HIGH);
 delay(3000);
 digitalWrite(GREEN, LOW);
 //Turn the green signal on and off 3 times
 digitalWrite(GREEN, HIGH);
 delay(500);
 digitalWrite(GREEN, LOW);
 delay(500);
 digitalWrite(GREEN, HIGH);
 delay(500);
 digitalWrite(GREEN, LOW);
 delay(500);
 digitalWrite(GREEN, HIGH);
 delay(500);
 digitalWrite(GREEN, LOW);
 //only yellow
 digitalWrite(YELLOW, HIGH);
 delay(1000);
 digitalWrite(YELLOW, LOW); 
 
}

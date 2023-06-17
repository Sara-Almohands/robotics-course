const int led =  11;      // the number of the LED pin
int tcrt;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop(){
  tcrt = analogRead(A0);
  Serial.println(tcrt);
  analogWrite(led, tcrt/4);
}

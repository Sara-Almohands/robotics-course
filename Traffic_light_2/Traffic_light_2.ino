#define RED 8
#define YELLOW 10
#define GREEN 12

int red_on = 3000;
int red_yellow_on = 1000;
int green_on = 3000;
int green_blink = 500;
int yellow_on = 1000;

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(YELLOW_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);

}

void loop() {
  digitalWrite(RED_PIN, HIGH);
  delay(red_on);
  
  digitalWrite(YELLOW_PIN, HIGH);
  delay(red_yellow_on);
  
  
  digitalWrite(RED_PIN, LOW);
  digitalWrite(YELLOW_PIN, LOW);
  digitalWrite(GREEN_PIN, HIGH);
  delay(green_on);
  digitalWrite(GREEN_PIN, LOW);
  
   // turn green on and off three times with a loop
  // which has a counter i, which changes according to the specified rule: at each iteration it increases by 1
 // the loop will be executed until the specified condition is true (here: i < 3)
  for(int i = 0; i < 3; i = i+1)
  {
    delay(green_blink);
    digitalWrite(GREEN_PIN, HIGH);
    delay(green_blink);
    digitalWrite(GREEN_PIN, LOW);
  }
    //Only yellow
    digitalWrite(YELLOW_PIN, HIGH);
    delay(yellow_on);
    digitalWrite(YELLOW_PIN, LOW); 
 
}

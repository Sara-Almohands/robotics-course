//including the libraries
#include <AFMotor.h>

//defining pins and variables
#define left A0
#define right A1 

//defining motors
AF_DCMotor motor_ar(1); 
AF_DCMotor motor_al(2);
AF_DCMotor motor_br(3); 
AF_DCMotor motor4_bl(4);


void setup() {
  //setting the speed of motors
  motor_ar.setSpeed(170);
  motor_al.setSpeed(170);
  motor_br.setSpeed(170);
  motor_bl.setSpeed(170);
  //declaring pin types
  pinMode(left,INPUT);
  pinMode(right,INPUT);
  //begin serial communication
  Serial.begin(9600);
  
}

void loop(){
  //printing values of the sensors to the serial monitor
  Serial.println(analogRead(left));
  Serial.println(analogRead(right));
  //line detected by both
  if(analogRead(left)<=400 && analogRead(right)<=400){
    //stop
    motor_ar.run(RELEASE);
    motor_al.run(RELEASE);
    motor_br.run(RELEASE);
    motor_bl.run(RELEASE);
  }
  //line detected by left sensor
  else if(analogRead(left)<=400 && !analogRead(right)<=400){
    //turn left
    motor_ar.run(FORWARD);
    motor_al.run(	BACKWARD);
    motor_br.run(FORWARD);
    motor_bl.run(BACKWARD);
     
  }
  //line detected by right sensor
  else if(!analogRead(left)<=400 && analogRead(right)<=400){
    //turn right
    motor_ar.run(BACKWARD);
    motor_al.run(FORWARD);
    motor_br.run(BACKWARD);
    motor_bl.run(FORWARD);
    
  }
  //line detected by none
  else if(!analogRead(left)<=400 && !analogRead(right)<=400){
    //run
    motor_ar.run(FORWARD);
    motor_al.run(FORWARD);
    motor_br.run(FORWARD);
    motor_bl.run(FORWARD);
     
  }
  
}



const int PWM = 2;    //naming pin 2 as ‘pwm’ variable 
const int ADC = 0;   //naming pin 0 of analog input side as ‘adc’
void setup()
{
     pinMode(PWM,OUTPUT);  //setting pin 2 as output
}
void loop()
{
     int ADC  = analogRead(0);    //reading analog voltage and storing it in an integer 
     ADC = map(ADC, 0, 1023, 0, 255);  
/*
----------map funtion------------the above funtion scales the output of adc, which is 10 bit and gives values btw 0 to 1023,
in values btw 0 to 255 form analogWrite funtion which only receives  values btw this range
*/
     analogWrite(PWM,ADC); 
}

#include <Motor.h>
int sensorleft = A0;
int sensorright = A1;
int LED = 9;
int white = 350;
int black = 300;

void setup()
{
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
  pinMode(sensorleft,INPUT);
  pinMode(sensorright,INPUT);
}
void loop()
{
  lightstart();
  followline();
}






void followline()
{
   if(analogRead(sensorleft)>white)
  {
    if(analogRead(sensorright)<black)
    {
      //turn both motors on
      delay(20);
      //turn both motors off
      delay(20);
    }
    if(analogRead(sensorright)>white)
    { 
      findline();
    }
  }
  if(analogRead(sensorleft)<black);
  {
    findline();
  }
}


void findline()
{
  //left motor forward
  delay(20);
  //left motor off
  delay(20);
  //left motor backwords
  delay(20);
  //left motor off
  delay(20);
  //right motor forwards
  delay(20);
  //right motor off
  delay(20);
  //right motor backwords
  delay(20);
}


void lightstart()
{
  Serial.println(analogRead(sensorleft));
  Serial.println(analogRead(sensorright));
  delay(200);
}

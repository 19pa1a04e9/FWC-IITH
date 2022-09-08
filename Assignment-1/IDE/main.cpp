#include <Arduino.h>
#include <Wire.h>
int A,B,C,D;
int Y;

void setup()
{
   pinMode(2, INPUT);
   pinMode(3, INPUT);
   pinMode(4, INPUT);
   pinMode(5, INPUT);
   pinMode(8, OUTPUT);
}
void loop()
{
   A=digitalRead(2);
   B=digitalRead(3);
   C=digitalRead(4);
   D=digitalRead(5);
   Y=((!D&&!B&&A)||(B&&!D&&C)||(!B&&C&&D)||(B&&A&&D));
   digitalWrite(8,Y);
}

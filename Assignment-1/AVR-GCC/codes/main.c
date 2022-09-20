#include <avr/io.h>
#include <util/delay.h>
#include <stdbool.h>
 
int main (void)
{
 
bool S3,S2,S1,S0,Y;
DDRB=0b11110000;
PORTB=0b00001111;
DDRD=0b00000100;
while(1)
{
S0=(PINB & (1<<PINB3)) == (1<<PINB3);
S1=(PINB & (1<<PINB2)) == (1<<PINB2);
S2=(PINB & (1<<PINB1)) == (1<<PINB1);
S3=(PINB & (1<<PINB0)) == (1<<PINB0);
Y=((!S3)&(!S2)&(S1))|((S2)&(!S3)&(S2))|((!S1)&(S2)&(S3))|((S1)&(S0)&(S3));
PORTD|=(Y<<PD2);
}
return 0;
}

  

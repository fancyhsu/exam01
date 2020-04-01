// uLCD-144-G2 basic text demo program for uLCD-4GL LCD driver library
//
#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;

int main()
{
    // basic printf demo = 16 by 18 characters on screen
    uLCD.color(BLUE);
    uLCD.printf("\n106060015\n"); //Default Green on black text
    
    uLCD.line(50, 50 , 50  , 70, 0xFFFFFF);
    uLCD.line(50, 70 ,70, 70  , 0xFFFFFF);
    uLCD.line(70,50 , 70  , 70, 0xFFFFFF);
    uLCD.line(50, 50 , 70, 50  , 0xFFFFFF);
    //uLCD.circle(2 , 2, 1,  0xFFFFFF)
}

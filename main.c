/* 
 * File:   main.c
 * Author: dean
 *
 * Created on March 4, 2014, 10:32 PM
 */

#include <xc.h>
#pragma config FOSC = HS        // Oscillator Selection bits (XT oscillator)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = OFF       // Power-up Timer Enable bit (PWRT enabled)
#pragma config CP = OFF         // FLASH Program Memory Code Protection bit (Code protection off)
#pragma config BOREN = OFF

int main() {
    ADCON0 = 0;
    TRISA = 0x20;
    while(1){
        if((PORTA&0x20)==0) {
            PORTA |= 0x01;
        } else {
            PORTA &= ~0x01;
        }
    }
}
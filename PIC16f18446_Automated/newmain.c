/*
 * File:   newmain.c
 * Author: I71645
 *
 * Created on September 29, 2022, 11:03 AM
 */


// CONFIG5
#pragma config WDTE = OFF        // WDT operating mode (WDT enabled regardless of sleep; SWDTEN is ignored)
#include <xc.h>
uint8_t m =10;
uint8_t add(uint8_t n, uint8_t o, uint8_t p ){
   return n+o+p;
}
void main() {
   uint8_t a = 0x05;
   LATA = a;
   uint8_t c = 0x1F;
   TRISA = c;
   uint8_t b =0x08;
   LATB = b;
   uint8_t t = add(a,b,c);
   return;
}
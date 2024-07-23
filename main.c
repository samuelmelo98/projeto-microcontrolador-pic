#include <xc.h>
#define _XTAL_FREQ 4000000      //define para utilizar funções de tempo
#pragma config OSC = IntRC      // Oscillator Selection bits (internal RC oscillator)
#pragma config WDT = OFF        // Watchdog Timer Enable bit (WDT disabled)
#pragma config CP = ON         // Code Protection bit (Code protection off)
#pragma config MCLRE = OFF      // GP3/MCLR Pin Function Select bit (GP3/MCLR pin function is digital input, MCLR internally tied to VDD)

 int main(){
 TRISGPIO=0B000000;
   while(1)                    
  {
      GP0=1;
      __delay_ms(3000);
       GP0=0;
       __delay_ms(3000);
             
    if(GP0 == 0 || GP1 == 0  ){
        GP5 = 1;
        GP4 = 0;            
    }
    else{
       GP5 = 0;
       GP4 = 1;
    }
  }
}
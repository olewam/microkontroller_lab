#include "uart.h"
#include <stdlib.h>
#include "gpio.h"


int main(){


    GPIO->PIN_CNF[17] = 0; // A
    GPIO->PIN_CNF[26] = 0; // B

    if(!(GPIO->IN & 1<<26)){
            uart_send('B');
    }

        
    if(!(GPIO->IN & 1 << 17)){
         uart_send('A');
    }







    return 0;
}
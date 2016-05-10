/*
===============================================================================
 Name        : ledTest.c
 Author      : $(author)
 Version     :
 Copyright   : $(copyright)
 Description : main definition
===============================================================================
*/

#if defined (__USE_LPCOPEN)
#if defined(NO_BOARD_LIB)
#include "chip.h"
#else
#include "board.h"
#endif
#endif

#include <cr_section_macros.h>

int main(void) {

    Chip_GPIO_SetPinDIROutput(LPC_GPIO_PORT, 0, 16);//blue
    Chip_GPIO_SetPinDIROutput(LPC_GPIO_PORT, 0, 7);//red
    Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 7, false);
    Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 16, false);

    while(1) {
    	for(int i = 0 ; i<7; i++)
    	{
    	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 16, true);
    	i++;
    	}
    	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 16, false);
    }

    return 0 ;
}

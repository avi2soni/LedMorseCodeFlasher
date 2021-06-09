#include <stdio.h>
#include <ctype.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "MKL46Z4.h"
#include "fsl_debug_console.h"

//this will allow us to delay specified milliseconds
void delay_ms(unsigned int n)
{
	unsigned int i = 0;
	unsigned int j;
	for(i=0; i<n*3500; i++)
	{
		j++;
	}

}
 //displays morse code
void displayMorse(char *message, int length){

	//iterates through the message array
	for(int i=0; i<=length; i++){
		switch(message[i]){
		//all the cases are here from A-Z
		case'A':
			//*
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//-
			GPIOD->PTOR |= (1<<5);
			delay_ms(750);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			break;

		case 'B':
			//-
			GPIOD->PTOR |= (1<<5);
			delay_ms(750);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//*
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//*
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//*
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			break;

		case 'C':
			//-
			GPIOD->PTOR |= (1<<5);
			delay_ms(750);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//*
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//-
			GPIOD->PTOR |= (1<<5);
			delay_ms(750);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//*
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			break;

		case 'D':
			//-
			GPIOD->PTOR |= (1<<5);
			delay_ms(750);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//*
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//*
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			break;

		case 'E':
			//*
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			break;

		case 'F':
			//*
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//*
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//-
			GPIOD->PTOR |= (1<<5);
			delay_ms(750);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//*
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			break;

		case 'G':
			//-
			GPIOD->PTOR |= (1<<5);
			delay_ms(750);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//-
			GPIOD->PTOR |= (1<<5);
			delay_ms(750);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//*
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			break;

		case 'H':
			//*
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//*
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//*
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//*
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			break;

		case 'I':
			//*
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//*
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			break;

		case 'J':
			//*
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//-
			GPIOD->PTOR |= (1<<5);
			delay_ms(750);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//-
			GPIOD->PTOR |= (1<<5);
			delay_ms(750);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//-
			GPIOD->PTOR |= (1<<5);
			delay_ms(750);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			break;

		case 'K':
			//-
			GPIOD->PTOR |= (1<<5);
			delay_ms(750);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//*
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//-
			GPIOD->PTOR |= (1<<5);
			delay_ms(750);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			break;

		case 'L':
			//*
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//-
			GPIOD->PTOR |= (1<<5);
			delay_ms(750);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//*
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//*
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			break;

		case 'M':
			//-
			GPIOD->PTOR |= (1<<5);
			delay_ms(750);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//-
			GPIOD->PTOR |= (1<<5);
			delay_ms(750);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			break;

		case 'N':
			//-
			GPIOD->PTOR |= (1<<5);
			delay_ms(750);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//*
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			break;

		case 'O':
			//-
			GPIOD->PTOR |= (1<<5);
			delay_ms(750);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//-
			GPIOD->PTOR |= (1<<5);
			delay_ms(750);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//-
			GPIOD->PTOR |= (1<<5);
			delay_ms(750);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			break;

		case 'P':
			//*
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//-
			GPIOD->PTOR |= (1<<5);
			delay_ms(750);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//-
			GPIOD->PTOR |= (1<<5);
			delay_ms(750);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//*
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			break;

		case 'Q':
			//-
			GPIOD->PTOR |= (1<<5);
			delay_ms(750);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//-
			GPIOD->PTOR |= (1<<5);
			delay_ms(750);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//*
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//-
			GPIOD->PTOR |= (1<<5);
			delay_ms(750);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			break;

		case 'R':
			//*
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//-
			GPIOD->PTOR |= (1<<5);
			delay_ms(750);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//*
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			break;

		case 'S':
			//*
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//*
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//*
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			break;

		case 'T':
			//-
			GPIOD->PTOR |= (1<<5);
			delay_ms(750);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			break;

		case 'U':
			//*
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//*
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//-
			GPIOD->PTOR |= (1<<5);
			delay_ms(750);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			break;

		case 'V':
			//*
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//*
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//*
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//-
			GPIOD->PTOR |= (1<<5);
			delay_ms(750);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			break;

		case 'W':
			//*
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//-
			GPIOD->PTOR |= (1<<5);
			delay_ms(750);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//-
			GPIOD->PTOR |= (1<<5);
			delay_ms(750);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			break;

		case 'X':
			//-
			GPIOD->PTOR |= (1<<5);
			delay_ms(750);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//*
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//*
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//-
			GPIOD->PTOR |= (1<<5);
			delay_ms(750);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			break;

		case 'Y':
			//-
			GPIOD->PTOR |= (1<<5);
			delay_ms(750);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//*
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//-
			GPIOD->PTOR |= (1<<5);
			delay_ms(750);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//-
			GPIOD->PTOR |= (1<<5);
			delay_ms(750);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			break;

		case 'Z':
			//-
			GPIOD->PTOR |= (1<<5);
			delay_ms(750);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//-
			GPIOD->PTOR |= (1<<5);
			delay_ms(750);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//*
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//*
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			//gap
			GPIOD->PTOR |= (1<<5);
			delay_ms(250);
			break;
		}
	}
}

int main(void) {

	//unsigned short i=0;
		/* Init board hardware. */	    BOARD_InitBootPins();
	    BOARD_InitBootClocks();
	    BOARD_InitBootPeripherals();
	  	/* Init FSL debug console. */
	    BOARD_InitDebugConsole();

		//setting up timers
		SIM->SCGC6 |= (1 << 24); // Clock Enable TPM0
		SIM->SOPT2 |= (0x2 << 24); // Set TPMSRC to OSCERCLK

		//setting up the light
		SIM->SCGC5 |= 1<<12;
		PORTD->PCR[5] &= ~0x700;
		PORTD->PCR[5] |= 0x700 & (1 << 8);
		GPIOD->PDDR |= (1 << 5);//enables light
		PTD->PSOR = (1u<<5); //Turns light off


		// Setup Channel 5
		TPM0->CONTROLS[5].CnSC |= (0x1 << 2) | (0x2 << 4);  // Edge PWM
		TPM0->MOD = 7999;  //

		//starting the clock
		TPM0->SC |= 0x01 << 3;

		//input the message
	    char *message = "HELLO";
	    int length = strlen(message);//getting length

	    //calling the function
	    displayMorse(message, length);

	    //loop so that it runs once
	    while(1){

	    }
	    return 0;

}



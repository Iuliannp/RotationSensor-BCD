#include "gpio.h"
#define LED_1 (0) // Segmentul de sus cu PTA1 //PTB0
#define LED_2 (1) // Segmentul din dreapta-sus cu PTA2 //PTB1
#define LED_3 (4)	// Segmentul din dreapta-jos cu PTD4
#define LED_4 (12) // Segmentul de jos cu PTA12
#define LED_5 (4) // Segmentul din stranga jos cu PTA4
#define LED_6 (5) // Segmentul din stanga sus cu PTA5
#define LED_7 (8) // Segemtul mijloc cu PTC8


void LED_Init(int number) {
	
	// Activarea semnalului de ceas pentru a putea folosi GPIO cu ajutorul pinului 1 de pe portul A
	SIM->SCGC5 |= SIM_SCGC5_PORTA_MASK; //DACA FOLOSESC PORTUL d TREBUIE SA FAC LA FEL SI PENTRU EL
	SIM->SCGC5 |= SIM_SCGC5_PORTD_MASK;
	SIM->SCGC5 |= SIM_SCGC5_PORTC_MASK;
	SIM->SCGC5 |= SIM_SCGC5_PORTB_MASK;
	
	//PSOR PENTRU SINGERE
	//PCOR PENTRU APRINDERE
	
	if(number == 0) {
		PORTB->PCR[LED_1] &= ~PORT_PCR_MUX_MASK;
		PORTB->PCR[LED_1] |= PORT_PCR_MUX(1);
		GPIOB_PDDR |=(1<<LED_1); 
		GPIOB_PCOR |=(1<<LED_1); //APRINDEM
		
		PORTB->PCR[LED_2] &= ~PORT_PCR_MUX_MASK;
		PORTB->PCR[LED_2] |= PORT_PCR_MUX(1);
		GPIOB_PDDR |=(1<<LED_2); 
		GPIOB_PCOR |=(1<<LED_2);
		
		PORTD->PCR[LED_3] &= ~PORT_PCR_MUX_MASK;
		PORTD->PCR[LED_3] |= PORT_PCR_MUX(1);
		GPIOD_PDDR |=(1<<LED_3); 
		GPIOD_PCOR |=(1<<LED_3);
		
		PORTA->PCR[LED_4] &= ~PORT_PCR_MUX_MASK;
		PORTA->PCR[LED_4] |= PORT_PCR_MUX(1);
		GPIOA_PDDR |=(1<<LED_4); 
		GPIOA_PCOR |=(1<<LED_4);
		
		PORTA->PCR[LED_5] &= ~PORT_PCR_MUX_MASK;
		PORTA->PCR[LED_5] |= PORT_PCR_MUX(1);
		GPIOA_PDDR |=(1<<LED_5); 
		GPIOA_PCOR |=(1<<LED_5);
		
		PORTA->PCR[LED_5] &= ~PORT_PCR_MUX_MASK;
		PORTA->PCR[LED_5] |= PORT_PCR_MUX(1);
		GPIOA_PDDR |=(1<<LED_5); 
		GPIOA_PCOR |=(1<<LED_5);
		
		PORTA->PCR[LED_6] &= ~PORT_PCR_MUX_MASK;
		PORTA->PCR[LED_6] |= PORT_PCR_MUX(1);
		GPIOA_PDDR |=(1<<LED_6); 
		GPIOA_PCOR |=(1<<LED_6);
		}
		else if(number == 1) {
			PORTB->PCR[LED_2] &= ~PORT_PCR_MUX_MASK;
			PORTB->PCR[LED_2] |= PORT_PCR_MUX(1);
			GPIOB_PDDR |=(1<<LED_2); 
			GPIOB_PCOR |=(1<<LED_2);
			
			PORTD->PCR[LED_3] &= ~PORT_PCR_MUX_MASK;
			PORTD->PCR[LED_3] |= PORT_PCR_MUX(1);
			GPIOD_PDDR |=(1<<LED_3); 
			GPIOD_PCOR |=(1<<LED_3);
		}
		else if(number == 2) {
			PORTB->PCR[LED_1] &= ~PORT_PCR_MUX_MASK;
			PORTB->PCR[LED_1] |= PORT_PCR_MUX(1);
			GPIOB_PDDR |=(1<<LED_1); 
			GPIOB_PCOR |=(1<<LED_1);
			
			PORTB->PCR[LED_2] &= ~PORT_PCR_MUX_MASK;
			PORTB->PCR[LED_2] |= PORT_PCR_MUX(1);
			GPIOB_PDDR |=(1<<LED_2); 
			GPIOB_PCOR |=(1<<LED_2);
			
			PORTC->PCR[LED_7] &= ~PORT_PCR_MUX_MASK;
			PORTC->PCR[LED_7] |= PORT_PCR_MUX(1);
			GPIOC_PDDR |=(1<<LED_7); 
			GPIOC_PCOR |=(1<<LED_7);
			
			PORTA->PCR[LED_5] &= ~PORT_PCR_MUX_MASK;
			PORTA->PCR[LED_5] |= PORT_PCR_MUX(1);
			GPIOA_PDDR |=(1<<LED_5); 
			GPIOA_PCOR |=(1<<LED_5);
			
			PORTA->PCR[LED_4] &= ~PORT_PCR_MUX_MASK;
			PORTA->PCR[LED_4] |= PORT_PCR_MUX(1);
			GPIOA_PDDR |=(1<<LED_4); 
			GPIOA_PCOR |=(1<<LED_4);
		}
		else if(number == 3) {
			PORTB->PCR[LED_1] &= ~PORT_PCR_MUX_MASK;
			PORTB->PCR[LED_1] |= PORT_PCR_MUX(1);
			GPIOB_PDDR |=(1<<LED_1); 
			GPIOB_PCOR |=(1<<LED_1);
			
			PORTB->PCR[LED_2] &= ~PORT_PCR_MUX_MASK;
			PORTB->PCR[LED_2] |= PORT_PCR_MUX(1);
			GPIOB_PDDR |=(1<<LED_2); 
			GPIOB_PCOR |=(1<<LED_2);
			
			PORTC->PCR[LED_7] &= ~PORT_PCR_MUX_MASK;
			PORTC->PCR[LED_7] |= PORT_PCR_MUX(1);
			GPIOC_PDDR |=(1<<LED_7); 
			GPIOC_PCOR |=(1<<LED_7);
			
			PORTD->PCR[LED_3] &= ~PORT_PCR_MUX_MASK;
			PORTD->PCR[LED_3] |= PORT_PCR_MUX(1);
			GPIOD_PDDR |=(1<<LED_3); 
			GPIOD_PCOR |=(1<<LED_3);
			
			PORTA->PCR[LED_4] &= ~PORT_PCR_MUX_MASK;
			PORTA->PCR[LED_4] |= PORT_PCR_MUX(1);
			GPIOA_PDDR |=(1<<LED_4); 
			GPIOA_PCOR |=(1<<LED_4);
		}
		else if(number == 4) {
			PORTA->PCR[LED_6] &= ~PORT_PCR_MUX_MASK;
			PORTA->PCR[LED_6] |= PORT_PCR_MUX(1);
			GPIOA_PDDR |=(1<<LED_6); 
			GPIOA_PCOR |=(1<<LED_6);
			
			PORTC->PCR[LED_7] &= ~PORT_PCR_MUX_MASK;
			PORTC->PCR[LED_7] |= PORT_PCR_MUX(1);
			GPIOC_PDDR |=(1<<LED_7); 
			GPIOC_PCOR |=(1<<LED_7);
			
			PORTB->PCR[LED_2] &= ~PORT_PCR_MUX_MASK;
			PORTB->PCR[LED_2] |= PORT_PCR_MUX(1);
			GPIOB_PDDR |=(1<<LED_2); 
			GPIOB_PCOR |=(1<<LED_2);
			
			PORTD->PCR[LED_3] &= ~PORT_PCR_MUX_MASK;
			PORTD->PCR[LED_3] |= PORT_PCR_MUX(1);
			GPIOD_PDDR |=(1<<LED_3); 
			GPIOD_PCOR |=(1<<LED_3);
		}
		else if(number ==5) {
			PORTB->PCR[LED_1] &= ~PORT_PCR_MUX_MASK;
			PORTB->PCR[LED_1] |= PORT_PCR_MUX(1);
			GPIOB_PDDR |=(1<<LED_1); 
			GPIOB_PCOR |=(1<<LED_1);
			
			PORTA->PCR[LED_6] &= ~PORT_PCR_MUX_MASK;
			PORTA->PCR[LED_6] |= PORT_PCR_MUX(1);
			GPIOA_PDDR |=(1<<LED_6); 
			GPIOA_PCOR |=(1<<LED_6);
			
			PORTC->PCR[LED_7] &= ~PORT_PCR_MUX_MASK;
			PORTC->PCR[LED_7] |= PORT_PCR_MUX(1);
			GPIOC_PDDR |=(1<<LED_7); 
			GPIOC_PCOR |=(1<<LED_7);
			
			PORTD->PCR[LED_3] &= ~PORT_PCR_MUX_MASK;
			PORTD->PCR[LED_3] |= PORT_PCR_MUX(1);
			GPIOD_PDDR |=(1<<LED_3); 
			GPIOD_PCOR |=(1<<LED_3);
			
			PORTA->PCR[LED_4] &= ~PORT_PCR_MUX_MASK;
			PORTA->PCR[LED_4] |= PORT_PCR_MUX(1);
			GPIOA_PDDR |=(1<<LED_4); 
			GPIOA_PCOR |=(1<<LED_4);
		}
		else if(number == 6) {
			PORTB->PCR[LED_1] &= ~PORT_PCR_MUX_MASK;
			PORTB->PCR[LED_1] |= PORT_PCR_MUX(1);
			GPIOB_PDDR |=(1<<LED_1); 
			GPIOB_PCOR |=(1<<LED_1);
			
			PORTA->PCR[LED_6] &= ~PORT_PCR_MUX_MASK;
			PORTA->PCR[LED_6] |= PORT_PCR_MUX(1);
			GPIOA_PDDR |=(1<<LED_6); 
			GPIOA_PCOR |=(1<<LED_6);
			
			PORTA->PCR[LED_5] &= ~PORT_PCR_MUX_MASK;
			PORTA->PCR[LED_5] |= PORT_PCR_MUX(1);
			GPIOA_PDDR |=(1<<LED_5); 
			GPIOA_PCOR |=(1<<LED_5);
			
			PORTA->PCR[LED_4] &= ~PORT_PCR_MUX_MASK;
			PORTA->PCR[LED_4] |= PORT_PCR_MUX(1);
			GPIOA_PDDR |=(1<<LED_4); 
			GPIOA_PCOR |=(1<<LED_4);
			
			PORTD->PCR[LED_3] &= ~PORT_PCR_MUX_MASK;
			PORTD->PCR[LED_3] |= PORT_PCR_MUX(1);
			GPIOD_PDDR |=(1<<LED_3); 
			GPIOD_PCOR |=(1<<LED_3);
			
			PORTC->PCR[LED_7] &= ~PORT_PCR_MUX_MASK;
			PORTC->PCR[LED_7] |= PORT_PCR_MUX(1);
			GPIOC_PDDR |=(1<<LED_7); 
			GPIOC_PCOR |=(1<<LED_7);
		}
		else if(number == 7) {
			PORTB->PCR[LED_1] &= ~PORT_PCR_MUX_MASK;
			PORTB->PCR[LED_1] |= PORT_PCR_MUX(1);
			GPIOB_PDDR |=(1<<LED_1); 
			GPIOB_PCOR |=(1<<LED_1); 
			
			PORTB->PCR[LED_2] &= ~PORT_PCR_MUX_MASK;
			PORTB->PCR[LED_2] |= PORT_PCR_MUX(1);
			GPIOB_PDDR |=(1<<LED_2); 
			GPIOB_PCOR |=(1<<LED_2);
			
			PORTD->PCR[LED_3] &= ~PORT_PCR_MUX_MASK;
			PORTD->PCR[LED_3] |= PORT_PCR_MUX(1);
			GPIOD_PDDR |=(1<<LED_3); 
			GPIOD_PCOR |=(1<<LED_3);
		}
		else if(number == 8) {
			PORTB->PCR[LED_1] &= ~PORT_PCR_MUX_MASK;
			PORTB->PCR[LED_1] |= PORT_PCR_MUX(1);
			GPIOB_PDDR |=(1<<LED_1); 
			GPIOB_PCOR |=(1<<LED_1); //APRINDEM
			
			PORTB->PCR[LED_2] &= ~PORT_PCR_MUX_MASK;
			PORTB->PCR[LED_2] |= PORT_PCR_MUX(1);
			GPIOB_PDDR |=(1<<LED_2); 
			GPIOB_PCOR |=(1<<LED_2);
			
			PORTD->PCR[LED_3] &= ~PORT_PCR_MUX_MASK;
			PORTD->PCR[LED_3] |= PORT_PCR_MUX(1);
			GPIOD_PDDR |=(1<<LED_3); 
			GPIOD_PCOR |=(1<<LED_3);
			
			PORTA->PCR[LED_4] &= ~PORT_PCR_MUX_MASK;
			PORTA->PCR[LED_4] |= PORT_PCR_MUX(1);
			GPIOA_PDDR |=(1<<LED_4); 
			GPIOA_PCOR |=(1<<LED_4);
			
			PORTA->PCR[LED_5] &= ~PORT_PCR_MUX_MASK;
			PORTA->PCR[LED_5] |= PORT_PCR_MUX(1);
			GPIOA_PDDR |=(1<<LED_5); 
			GPIOA_PCOR |=(1<<LED_5);
			
			PORTA->PCR[LED_5] &= ~PORT_PCR_MUX_MASK;
			PORTA->PCR[LED_5] |= PORT_PCR_MUX(1);
			GPIOA_PDDR |=(1<<LED_5); 
			GPIOA_PCOR |=(1<<LED_5);
			
			PORTA->PCR[LED_6] &= ~PORT_PCR_MUX_MASK;
			PORTA->PCR[LED_6] |= PORT_PCR_MUX(1);
			GPIOA_PDDR |=(1<<LED_6); 
			GPIOA_PCOR |=(1<<LED_6);
			
			PORTC->PCR[LED_7] &= ~PORT_PCR_MUX_MASK;
			PORTC->PCR[LED_7] |= PORT_PCR_MUX(1);
			GPIOC_PDDR |=(1<<LED_7); 
			GPIOC_PCOR |=(1<<LED_7);
		}
		else if(number == 9) {
			PORTB->PCR[LED_1] &= ~PORT_PCR_MUX_MASK;
			PORTB->PCR[LED_1] |= PORT_PCR_MUX(1);
			GPIOB_PDDR |=(1<<LED_1); 
			GPIOB_PCOR |=(1<<LED_1); //APRINDEM
			
			PORTB->PCR[LED_2] &= ~PORT_PCR_MUX_MASK;
			PORTB->PCR[LED_2] |= PORT_PCR_MUX(1);
			GPIOB_PDDR |=(1<<LED_2); 
			GPIOB_PCOR |=(1<<LED_2);
			
			PORTD->PCR[LED_3] &= ~PORT_PCR_MUX_MASK;
			PORTD->PCR[LED_3] |= PORT_PCR_MUX(1);
			GPIOD_PDDR |=(1<<LED_3); 
			GPIOD_PCOR |=(1<<LED_3);
			
			PORTA->PCR[LED_4] &= ~PORT_PCR_MUX_MASK;
			PORTA->PCR[LED_4] |= PORT_PCR_MUX(1);
			GPIOA_PDDR |=(1<<LED_4); 
			GPIOA_PCOR |=(1<<LED_4);
				
			PORTA->PCR[LED_6] &= ~PORT_PCR_MUX_MASK;
			PORTA->PCR[LED_6] |= PORT_PCR_MUX(1);
			GPIOA_PDDR |=(1<<LED_6); 
			GPIOA_PCOR |=(1<<LED_6);
			
			PORTC->PCR[LED_7] &= ~PORT_PCR_MUX_MASK;
			PORTC->PCR[LED_7] |= PORT_PCR_MUX(1);
			GPIOC_PDDR |=(1<<LED_7); 
			GPIOC_PCOR |=(1<<LED_7);
		}
}

void LED_closeAll() {
	
	SIM->SCGC5 |= SIM_SCGC5_PORTA_MASK; //DACA FOLOSESC PORTUL d TREBUIE SA FAC LA FEL SI PENTRU EL
	SIM->SCGC5 |= SIM_SCGC5_PORTD_MASK;
	SIM->SCGC5 |= SIM_SCGC5_PORTC_MASK;
	SIM->SCGC5 |= SIM_SCGC5_PORTB_MASK;
	
	//PSOR PENTRU SINGERE
	//PCOR PENTRU APRINDERE
	

		PORTB->PCR[LED_1] &= ~PORT_PCR_MUX_MASK;
		PORTB->PCR[LED_1] |= PORT_PCR_MUX(1);
		GPIOB_PDDR |=(1<<LED_1); 
		GPIOB_PSOR |=(1<<LED_1);
		
		PORTB->PCR[LED_2] &= ~PORT_PCR_MUX_MASK;
		PORTB->PCR[LED_2] |= PORT_PCR_MUX(1);
		GPIOB_PDDR |=(1<<LED_2); 
		GPIOB_PSOR |=(1<<LED_2);
		
		PORTD->PCR[LED_3] &= ~PORT_PCR_MUX_MASK;
		PORTD->PCR[LED_3] |= PORT_PCR_MUX(1);
		GPIOD_PDDR |=(1<<LED_3); 
		GPIOD_PSOR |=(1<<LED_3);
		
		PORTA->PCR[LED_4] &= ~PORT_PCR_MUX_MASK;
		PORTA->PCR[LED_4] |= PORT_PCR_MUX(1);
		GPIOA_PDDR |=(1<<LED_4); 
		GPIOA_PSOR |=(1<<LED_4);
		
		PORTA->PCR[LED_5] &= ~PORT_PCR_MUX_MASK;
		PORTA->PCR[LED_5] |= PORT_PCR_MUX(1);
		GPIOA_PDDR |=(1<<LED_5); 
		GPIOA_PSOR |=(1<<LED_5);
		
		PORTA->PCR[LED_6] &= ~PORT_PCR_MUX_MASK;
		PORTA->PCR[LED_6] |= PORT_PCR_MUX(1);
		GPIOA_PDDR |=(1<<LED_6); 
		GPIOA_PSOR |=(1<<LED_6);
		
		PORTC->PCR[LED_7] &= ~PORT_PCR_MUX_MASK;
		PORTC->PCR[LED_7] |= PORT_PCR_MUX(1);
		GPIOC_PDDR |=(1<<LED_7); 
		GPIOC_PSOR |=(1<<LED_7);
}

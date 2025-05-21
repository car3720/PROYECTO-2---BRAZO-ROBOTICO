//******************************************************************************
// Universidad Del Valle De Guatemala
// IE2023: Programación de Microcontroladores
// Created: 29/04/2025 15:02:40
// Author : Diego Cardona
// Proyecto: Brazo Robótico
// Hardware: Atmega238PB
// Creado: 29/04/2025
//Última modificación: 29/04/2025
//******************************************************************************
#include "TIMER1.h"

void init_Timer1(int modo, int preescaler){
			TCCR1A=0;
			TCCR1B=0;
			TIMSK1=0;
	if (modo==0){
		//Habilitar interrupciones por overflow
		TIMSK1 |= (1<<TOIE1);
	}
	if (modo==1){
		//MODO CTC
		TCCR1B |= (1<<WGM12);
		//Habilitar interrupciones por comparación
		TIMSK1 |= (1<<OCIE1A)|(1<<OCIE1B);
	}
	
	//Definimos el preescaler
	switch(preescaler){
		case 1:
		TCCR1B |= (1<<CS10);
		break;
		case 8:
		TCCR1B |= (1<<CS11);
		break;
		case 64:
		TCCR1B |= (1<<CS11)|(1<<CS10);
		break;
		case 256:
		TCCR1B |= (1<<CS12);
		break;
		case 1024:
		TCCR1B |= (1<<CS12)|(1<<CS10);
		break;
	}
}

void CTC_Timer1A(uint16_t valor){
	OCR1A = valor;
}

void CTC_Timer1B(uint16_t valor){
	OCR1B = valor;
}
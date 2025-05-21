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


#include "PWM2.h" 

void init_PWM2A(int orientacion,int modo,int preescaler){
	//Puerto de salida
	DDRB |= (1<<DDB3);
	TCCR2A=0;
	TCCR2B=0;
	
	//Definimos la orientación en invertido o no invertido
	if (orientacion==0){
		//No invertido
		TCCR2A |= (1<<COM2A1);
		}else{
		//invertido
		TCCR2A |= (1<<COM2A1) | (1<<COM2A0);
	}
	//Definimos el modo de operación FAST o Phase Correct
	if (modo==0){
		//FAST
		TCCR2A |= (1<<WGM20) | (1<<WGM21);
		} else{
		//Phase Correct
		TCCR2A |= (1<<WGM20);
	}
	//Definimos el preescaler
	switch(preescaler){
		case 0:
		TCCR2B |= (1<<CS20);
		break;
		case 8:
		TCCR2B |= (1<<CS21);
		break;
		case 64:
		TCCR2B |= (1<<CS21)|(1<<CS20);
		break;
		case 256:
		TCCR2B |= (1<<CS21)|(1<<CS22);
		break;
		case 1024:
		TCCR2B |= (1<<CS21)|(1<<CS22)|(1<<CS20);
		break;
		
	}
	
}

void init_PWM2B(int orientacion){
	//Puerto de salida
	DDRD |= (1<<DDD3);
	//Definimos la orientación en invertido o no invertido
	if (orientacion==0){
		//No invertido
		TCCR2A |= (1<<COM2B1);
		}else{
		//invertido
		TCCR2A |= (1<<COM2B1) | (1<<COM2B0);
	}
	
}

void duty_cycle2A(int duty){
	OCR2A = duty;
}

void duty_cycle2B(int duty){
	OCR2B = duty;
}

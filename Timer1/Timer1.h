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

#ifndef TIMER0_H_
#define TIMER0_H_

#include <stdint.h>
#include <avr/io.h>

void init_Timer1(int modo, int preescaler);
void CTC_Timer1A(uint16_t valor);
void CTC_Timer1B(uint16_t valor);





#endif /* TIMER1_H_ */
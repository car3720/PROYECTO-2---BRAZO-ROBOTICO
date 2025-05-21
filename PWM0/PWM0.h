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


#ifndef PWM0_H_
#define PWM0_H_
#include <stdint.h>
#include <avr/io.h>

void init_PWM0A(int orientacion,int modo,int preescaler);
void init_PWM0B(int orientacion);
void duty_cycleA(int duty);
void duty_cycleB(int duty);

#endif /* PMW0_H_ */
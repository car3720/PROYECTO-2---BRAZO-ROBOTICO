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

#ifndef PWM2_H_
#define PWM2_H_
#include <stdint.h>
#include <avr/io.h>

void init_PWM2A(int orientacion,int modo,int preescaler);
void init_PWM2B(int orientacion);
void duty_cycle2A(int duty);
void duty_cycle2B(int duty);

#endif /* PWM2_H_ */
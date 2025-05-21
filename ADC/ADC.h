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


#ifndef ADC_H_
#define ADC_H_
#include <stdint.h>
#include <avr/io.h>
#include <avr/interrupt.h>

void init_ADC(int referencia,int justificacion,int preescaler);
uint8_t readADC(int canal);
void readADC_ISR(int canal);
long map(long x, long in_min, long in_max, long out_min, long out_max);



#endif /* ADC_H_ */
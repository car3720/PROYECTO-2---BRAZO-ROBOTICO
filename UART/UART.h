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


#ifndef UART_H_
#define UART_H_

#include <stdint.h>
#include <avr/io.h>
#include <avr/interrupt.h>

void initUART(int baud_rate, int turbo, int multiprocesador, int sincrono, int paridad, int bit_stop, int cantidad_caracteres,int UBRR0_valor);
void writeUART_car(char caracter);
void writeUART_Text(const char* texto);
uint8_t receivedChar(void);
void apagarUART(void);




#endif /* UART_H_ */
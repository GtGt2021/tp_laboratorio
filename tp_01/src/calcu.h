/*
 * calcu.h
 *
 *  Created on: 21 sep. 2021
 *      Author: gt
 */

#ifndef CALCU_H_
#define CALCU_H_

void mostrarMenuUsuario(float operandoUno, float operandoDos, int banderaoperandoUno, int banderaoperandoDos);
int sumarNumerosFloat(float operandoUno, float operandoDos, float *pResultado);
int restarNumerosFloat(float operandoUno, float operandoDos, float *pResultado);
int multiplicarNumerosFloat(float operandoUno, float operandoDos, float *pResultado);
int dividirNumerosFloat(float operandoUno, float operandoDos, float *pResultadoDivision);
int factorialEnteros(float operando, int *factorial, int *operandoInt);

#endif /* CALCU_H_ */

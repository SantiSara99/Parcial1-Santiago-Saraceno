#include <stdio.h>

#ifndef SARACENO_H_
#define SARACENO_H_

#endif/* SARACENO_H_ */


void getString(char* resultado, char* mensaje);

int getInt(int numero, char* mensaje);

float getFloat(float numero, char* mensaje);


/**
 * @brief
 *
 * @param numeroX
 */
float ingresoVariableX(void);

/**
 * @brief
 *
 * @param numeroY
 */
float ingresoVariableY(void);

/**
 * @brief
 *
 * @param A
 * @param B
 * @return
 */
float realizarSumatoria(float A,float B);

/**
 * @brief
 *
 * @param A
 * @param B
 * @return
 */
float realizarResta(float A,float B);

/**
 * @brief
 *
 * @param A
 * @param B
 * @return
 */
float realizarDivicion(float A,float B);

/**
 * @brief
 *
 * @param A
 * @param B
 * @return
 */
float realizarMultiplicacion(float A,float B);

/**
 * @brief
 *
 * @param A
 * @param B
 * @param resultadoA
 * @param resultadoB
 */
float realizarFactorial(float A);

/**
 * @brief
 *
 * @param numero1
 * @param numero2
 * @param respuesta
 * @return
 */
int mayorMenor(int numero1,int numero2, int* respuesta);

/**
 * @brief
 *
 * @param arrayPrueba
 * @param cantidad
 * @param MIN
 * @param MAX
 */
void ingresoArray(int arrayPrueba[], int cantidad, int MIN, int MAX);

/**
 * @brief
 *
 * @param arrayPrueba
 * @param cantidad
 * @return
 */
char calcularPositivo(int arrayPrueba[], int cantidad);

/**
 * @brief
 *
 * @param numero1
 * @return
 */
int verificarParidad(int numero1);

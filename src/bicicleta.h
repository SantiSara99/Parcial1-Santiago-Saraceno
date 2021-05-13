/*
 * bicicleta.h
 *
 *  Created on: 13 May 2021
 *      Author: Santi
 */

#ifndef BICICLETA_H_
#define BICICLETA_H_

#define DESC_LEN 25
#define MARCA_LEN 15

typedef struct
{
	int id;
	char descripcion[DESC_LEN];
	float precio;
}Servicio; //tipo de dato

typedef struct
{
	int id;
	char marca[MARCA_LEN];
	int rodado;
	float precio;
	Servicio id_servicio;
	int fecha[3];
	int isEmpty;//0=lleno 1=vacio
}Trabajo; //tipo de dato

void opcionesMenu();

void inicializarArray(Trabajo array[],int limite);

void imprimirArray(Trabajo array[],int limite);

void altaTrabajo(Trabajo array[],int limite, int id);

int buscarLibre(Trabajo array[],int limite);

void llenarServicios(Servicio array[],int limite);

#endif /* BICICLETA_H_ */

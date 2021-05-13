/*
 * bicicleta.c
 *
 *  Created on: 13 May 2021
 *      Author: Santi
 */

#include "bicicleta.h"
#include "saraceno.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * @brief imprime el array de productos
 *
 * @param array Puntero al espacio de memoria donde se copia lo ingresado
 * @param limite define el tamaño del array
 * @return retorna 0 si sale bien retorna -1 si está mal
 */
void imprimirArrayTrabajo(Trabajo array[],int limite)
{
	int i;
		for(i=0;i<limite;i++)
		{
			if(array[i].isEmpty==0)
			{
				printf("-ID: %d \n-descripcion: %s \n-Precio: %f",array[i].id,array[i].marca,array[i].precio);
			}
		}
}


/**
 * @brief inicializa el array de productos
 *
 * @param array Puntero al espacio de memoria donde se copia lo ingresado
 * @param limite define el tamaño del array
 * @return retorna 0 si sale bien retorna -1 si está mal
 */
void inicializarArray(Trabajo array[],int limite)
{
	int i;
		for(i=0;i<limite;i++)
		{
			array[i].isEmpty=1;
		}
}

/**
 * @brief
 *
 * @param array
 * @param id
 * @param desc
 * @param nacionalidad
 * @param tipo
 * @param precio
 * @param isEmpty
 */
void altaTrabajo(Trabajo array[],int limite,int id)
{
	char marca[MARCA_LEN];
	int rodado;
	float precio;
	int fecha[3];
	int posicionLibre;

	posicionLibre = buscarLibre(array, limite);
	if (posicionLibre==-1)
	{
		puts("ERROR no hay espacios libres");
	}
	else
	{
		getInt(rodado, "rodado?");
		getString(marca, "marca?");
		getFloat(precio, "precio?");
		getFecha(fecha, id);

		strcpy(array[posicionLibre].marca,marca);
		array[posicionLibre].precio=precio;
		array[posicionLibre].isEmpty=0;



		puts("bien cargado");
	}
}

void getFecha(Fecha array[], int id)
{
	int dia;
	int mes;
	int anio;

	getInt(dia, "dia?");
	getInt(mes, "mes?");
	getInt(anio, "año?");

	array[id].dia=dia;
	array[id].mes=mes;
	array[id].anio=anio;
}

void opcionesMenu()
{
	printf("\n1.ALTA TRABAJO");
	printf("\n2.MODIFICAR TRABAJO");
	printf("\n3.BAJA TRABAJO");
	printf("\n4.LISTAR TRABAJOS");
	printf("\n5.LISTAR SERVICIOS");
	printf("\n6.TOTAL en pesos por los servicios prestados.\n");
}

int buscarLibre(Trabajo array[],int limite)
{
	int i;
	int retorno;
	retorno = -1;
	for (i=0;i<limite;i++)
	{
		if (array[i].isEmpty==1)
		{
			retorno = i;
			break;
		}
	}
	return retorno;
}

void llenarServicios(Servicio array[],int limite)
{
	array[0].id=1;
	strcpy(array[0].descripcion,"Limpieza");
	array[0].precio=250;

	array[1].id=2;
	strcpy(array[1].descripcion,"Parche");
	array[1].precio=300;

	array[2].id=3;
	strcpy(array[2].descripcion,"Centrado");
	array[2].precio=400;

	array[3].id=4;
	strcpy(array[3].descripcion,"Cadena");
	array[3].precio=350;
}

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
void imprimirArray(Trabajo array[],int limite)
{
	int i;
		for(i=0;i<limite;i++)
		{
			if(array[i].isEmpty==0)
			{
				printf("-Servicio: %d \n-rodado: %d \n-Precio: %f \n-marca: %s \n-fecha: %d",array[i].id_servicio,array[i].rodado,array[i].precio,array[i].marca,array[i].fecha);
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
			array[i].id=20000;
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
void altaTrabajo(Trabajo array[],int limite)
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
		getFecha(fecha, array[posicionLibre].id);

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
	array[0].id=20000;
	strcpy(array[0].descripcion,"Limpieza");
	array[0].precio=250;

	array[1].id=20001;
	strcpy(array[1].descripcion,"Parche");
	array[1].precio=300;

	array[2].id=20002;
	strcpy(array[2].descripcion,"Centrado");
	array[2].precio=400;

	array[3].id=20003;
	strcpy(array[3].descripcion,"Cadena");
	array[3].precio=350;
}

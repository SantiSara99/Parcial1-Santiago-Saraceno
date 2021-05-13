/*
 ============================================================================
 Name        : parcial1.c
 Author      : Santi
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "bicicleta.h"
#include "saraceno.h"
#define QTY_TRABAJOS 5
#define QTY_SERVICIOS 3

int main(void)
{
	setbuf(stdout, NULL);

	Trabajo arrayTrabajo[QTY_TRABAJOS];
	Servicio arrayServicio[QTY_SERVICIOS];

	inicializarArray(arrayTrabajo,QTY_TRABAJOS);

	llenarServicios(arrayServicio,QTY_SERVICIOS);

	int funcionMenu;
	int selector;
	int id_T;
	id_T=0;
	funcionMenu=1;
	while(funcionMenu==1)
	{
		opcionesMenu();

		selector=0;
		scanf("%d",&selector);
		switch (selector)
		{
			case 1://alta
				altaTrabajo(arrayTrabajo,QTY_TRABAJOS,id_T);
				id_T=id_T+1;
			break;

			case 2://modificacion
			break;

			case 3://baja
			break;

			case 4://imprimir trabajos
			break;

			case 5://imprimir servicio
			break;

			case 6://precio total
			break;

			default:
				printf("ingresa una opcion valida");
				scanf("%d",&selector);
			break;
		}

		printf("queres hacer otra accion?\nSi/\nNo\n");
		scanf("%d",&funcionMenu);
	}

	return EXIT_SUCCESS;
}

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
	funcionMenu=1;

	do
	{
		puts("\n1.ALTA TRABAJO");
		puts("\n2.MODIFICAR TRABAJO");
		puts("\n3.BAJA TRABAJO");
		puts("\n4.LISTAR TRABAJOS");
		puts("\n5.LISTAR SERVICIOS");
		puts("\n6.TOTAL en pesos por los servicios prestados.\n");

			scanf("%d",&selector);
				switch (selector)
				{
					case 1://alta
						altaTrabajo(arrayTrabajo,QTY_TRABAJOS);
					break;

					case 2://modificacion
					break;

					case 3://baja
					break;

					case 4://imprimir trabajos
						imprimirArray(arrayTrabajo, QTY_TRABAJOS);
					break;

					case 5://imprimir servicio
					break;

					case 6://precio total
					break;

					default:
						puts("ingresa una opcion valida");
						scanf("%d",&selector);
					break;
				}

				fflush(stdin);
				printf("queres hacer otra accion?\nSi/No\n");
				scanf("%d",&funcionMenu);
		}while(funcionMenu==1);
	return EXIT_SUCCESS;
}

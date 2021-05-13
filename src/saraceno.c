#include "saraceno.h"

void getString(char* resultado, char* mensaje) //agregale la validacion con lngitud
{
	puts(mensaje);
	fflush(stdin);
	gets(resultado);
}

int getInt(int numero, char* mensaje)
{
	int ingreso;
	printf("%s\n",mensaje);
	scanf("%d",&numero);
	ingreso = numero;
	return ingreso;
}

float getFloat(float numero, char* mensaje)
{
	float ingreso;
	printf("%s\n",mensaje);
	scanf("%f",&numero);
	ingreso = numero;
	return ingreso;
}

void ingresoArray(int arrayPrueba[], int cantidad, int MIN, int MAX)
{
	printf("ingresa valor\n");
	scanf("%d",&arrayPrueba[cantidad]);

	while(arrayPrueba[cantidad]<MIN||arrayPrueba[cantidad]>MAX)
	{
		printf("esta mal, tiene que ser entre %d y %d\n",MIN, MAX);
		scanf("%d",&arrayPrueba[cantidad]);
	}
}

float realizarSumatoria(float A,float B)
{
	float resultado;
	resultado=A+B;
	return resultado;
}

float realizarResta(float A,float B)
{
	float resultado;
	resultado=A-B;
	return resultado;
}

float realizarDivicion(float A,float B)
{
	float resultado;
	resultado=A/B;
	return resultado;
}

float realizarMultiplicacion(float A,float B)
{
	float resultado;
	resultado=A*B;
	return resultado;
}

float realizarFactorial(float A)
{
	float resultadoA;
	float i;
	for(i=1;i<=A;i++)
	{
		if (A<0)
		printf("¡Error! El factorial de un numero negativo NO existe");
	    else
	    {
			if (A>10)
			{
			printf("¡Error! El numero es demasiado grande");
			}
			else
			{
				for(i=1;i<=A;i++)
				{
					resultadoA = resultadoA+(A*i);
				}
			}
		}
	}
	return resultadoA;
}

int mayorMenor(int numero1,int numero2, int* respuesta)
{
	int retorno;

	if(numero1<numero2)
	{
		retorno=numero1;
		*respuesta = numero2;
	}
	else
	{
		retorno=numero2;
		*respuesta = numero1;
	}

	return retorno;
}


char calcularPositivo(int arrayPrueba[], int cantidad)
{
	int cantidadPositivos;
	int cantidadNegativos;
	cantidadPositivos=0;
	cantidadNegativos=0;

	int i;
	for(i=0;i<cantidad;i++)
	{
		if(arrayPrueba[i]>0)
		{
			cantidadPositivos=cantidadPositivos+1;
		}
		else
		{
			cantidadNegativos=cantidadNegativos+1;
		}
	}

	return printf("las cantidades son\nPositivos: %d \nNegativos: %d", cantidadPositivos, cantidadNegativos);
}

int verificarParidad(int numero1)
{
	if (numero1==0)
	{
		return 0;
	}
	else
	{
        if (numero1%2==0)
        {
        	return 1;
        }
        else
        {
        	return -1;
        }
	}
}

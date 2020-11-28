/**
*@file appsimplex.c
*@brief fichero principal
*/
#include "MetodoSimplex.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
int op=1;
	do{
	system("cls");

	printf ("\n\t**METODO SIMPLEX***\n");
	printf ("\nIngrese el numero de funciones: ");
	scanf ("%d",&r);
	fflush(stdin);
	printf ("\nIngrese el numero de variables: ");
	scanf ("%d",&c);
	fflush(stdin);
	system("cls");
	printf ("\n");
	mc=c+r+1;//sumo funciones y variables para hacer las columnas necesarias y agrego las restricciones
	pedirdatos(r,c);//rellena la matriz
    system("cls");
	matrix(r,c,matriz,mc);//imprime la matriz
	posicion(mc,matriz);
	printf ("\n\tLa columna privote es: X%d",pos);
	printf ("\nA continuacion se divide la columna privote entre los coheficientes de restriccion\n ");
	operaciones(matriz, mc);
	iteracionfila(pos1, pos);
	matrix(r,c,matriz,mc);
	int a=1;

	while (a==1)
	{
		int b=0;
		for (i=1; i<=mc; i++)
		{
			if (matriz[r+1][i]>=0)
			{
				b++;
			}
		}
		       if  (b==mc)
			   {
			   	   a=2;

			   	   printf ("\n\t <--------------Esta es la solucion------------>\n\n");
			   	   posicion(mc, matriz);
			   	   matrix(r, c, matriz, mc);
			   }
			   else
               {
                  a=2;
                  printf ("\n-----------Programa Finalizado---------\n\n");
                  system("pause");
               }
            b=0;
	}
	printf ("\nQuieres resolver otras ecuaciones [Si=1, No=0] : ");
	scanf ("%i",&op);
    }
    while (op==1);
    //return 0;
}

/**
*@file main.c
*@brief fichero principal del programa 
*@par logica 
*     - solicitar rango de la funcion 
*     - solicitar valores de m y b
*     - manda a llamar la funcion graficar
*@return 0;
*/
#include "grafica_H.h"

int main(){
    int op=0;
    do{
    	system("cls");
    printf ("\t\tGraficando ecuaciones lineales");
    printf ("\n\nIngrese el rango de la funcion ");
    printf ("\nRango inicial:");
    scanf("%i",&r1);
    printf ("\nRango final:");
    scanf ("%i",&r2);
    
    printf ("\nDame el valor de m:");
    scanf ("%i",&m);
    printf ("\nDame el valor de b:");
    scanf ("%i",&b);
    printf ("\nla funcion es: y=%ix+%i",m,b);
    printf (", con un rango de [%i:%i]",r1,r2);

    graficar(r1,r2,m,b);
    printf ("\nDecea hacer otra grafica lineal: Si=[1], No=[0]: ");
    scanf ("%i",&op);
	}
    while (op==1);
    return 0;
}


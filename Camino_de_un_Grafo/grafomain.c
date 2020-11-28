   /**
  	*@file grafomain.c
    *@brief fichero principal
 	*/
#include "CabeceraGrafo.h"
#include <stdio.h>
#include <stdlib.h>
 /**
 	*@brief funcion principal
 	*@par    logica
 	*        -solicita datos de la matriz
 	*        -manda llamar a las otras funciones
 	*        -solicita si se decea repetir el programa 
 	*@return 0
 	*/
 int main()
 {
  
 	int op=1;
 	do{
	 system("cls");
 	printf ("/*/*/*/*/Hallar camino de un nodo/*/*/*/*/\n");
 	printf ("\nDame el numero de nodos: ");
 	scanf ("%i",&n);
 	printf ("\nDame el numero de adyasencias: ");
 	scanf ("%i",&a);
 	
 	matrix(n,a,matriz);//manda a imprimir la matriz inicial 
 	coordenadas(n, a,matriz);
 	buscarcamino(x,y,matriz);
    printf ("\nDecea repetir el programa: [Si=1] y [No=0]--->");
    scanf ("%i",&op);
   }
   while(op==1);
   
 	return 0;
 }//fin main

/**
*@file Funciones.c
*@brief Fichero de operacones y organizacion de la linea de espera
*/
#include "head_queue.h"

void ColaDeEspera(int lg[100], int ini, int fin, int caja[50], int cap){
    salida=0;;
	printf ("\n\t|Horas\t\t");
	for(j=ini; j<=fin; j++){
		printf ("\t|%i-%i",j,j+1);
	}
	printf ("\n---------------------------------------------------------------------------------------------");
	printf ("\n\t|Llegada de clientes");
	for(j=ini; j<=fin; j++){
		printf ("\t|%i",lg[j]);
	}
	printf ("\n\t|Cajas abiertas\t");
	for(i=ini; i<=fin; i++){
		printf ("\t|%i",caja[i]);
	}
	printf ("\n\t|Capacidad salidas");
	for (i=ini; i<=fin; i++){
		printf ("\t|%i",caja[i]*cap);
	}
	printf ("\n\t|Salidas clientes");
	for(i=ini;i<=fin; i++){
	    salida=cap*caja[i];
		printf ("\t|%i",salida);
	}
	
	printf ("\n\t|Cola de espera\t");
	int espera;
	int aux[50];//arreglo para almacenar las salidas 
	for (i=ini; i<=fin; i++){
		aux[i]=(lg[i])-(cap*caja[i]);
		aux[i]=aux[i]+aux[i-1];
		printf ("\t|%i",aux[i]);
	}
	
}
void InOut(int lg[100], int ini, int fin, int caja[50], int cap){
	printf ("\n\n");
	system("pause");
	printf ("\n\t**Agregando Inputs y Outputs**\n");
    
    ColaDeEspera(lg,ini,fin,caja,cap);//llamada de la funcion ColaDeEspera
    //entradas acumuladas 
    printf ("\n\t|Input\t\t");
    for(i=ini; i<=fin; i++){
    	lg[i]=lg[i]+lg[i-1];
    	printf ("\t|%i",lg[i]);
	}
	//salidas acumuladas
	printf ("\n\t|Output\t\t");
	for (i=ini; i<=fin; i++){
		int out[50];
		out[i]=(cap*caja[i]);
		out[i]=out[i]+out[i-1];
		printf ("\t|%i",out[i]);
	}
	
}







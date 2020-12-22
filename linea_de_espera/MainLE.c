/**
*@file MainLE 
*@brief Este programa es un caso practico de las colas de espera con la problematica de un supermercado 
*@par   logica del MainLE
*       - Pedir rango de inicio y final 
*       - Pedir datos de caja y cantidad de clientes 
*       - Lamar funciones ColaDeEspera e InOut 
*@return 0
*/
#include "head_queue.h"

int main() {
	int op=1;
    do{
    	system("cls");
	printf ("\t<<<<<<<<<**Gestion de colas de espera**>>>>>>>\n");
	printf ("\nIngrese rango de horas :");
	printf ("\nHora de inicio:");
	scanf ("%i",&ini);
	printf ("\nHora final:");
	scanf("%i",&fin);
	printf ("\nIngrese la capacidad de caja:");
	scanf ("%i",&cap);
	printf ("\nIngrese el numero de llegada de clientes:");
	for (j=ini; j<=fin; j++){
		printf("\nCantidad-->",j);
		scanf("%d",&lg[j]);
		fflush(stdin);
	}
	printf ("\nIngrese el numero de cajas abiertas: ");
	for (i=ini; i<=fin; i++){
		printf ("\nCajas--> ",i);
		scanf ("%i",&caja[i]);
	}
	system("cls");
    ColaDeEspera(lg,ini,fin,caja,cap);
    
    InOut(lg,ini,fin,caja,cap);
    printf ("\nDesea repetir el programa Si=[1], No=[0]: ");
    scanf ("%i",&op);
	}
	while (op==1);


    
	return 0;
}

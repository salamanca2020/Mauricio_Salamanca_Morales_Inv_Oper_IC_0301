   /**
  	*@file cuerpoGrafo.c
    *@brief fichero de funciones
 	*/
#include "CabeceraGrafo.h"
void matrix(int n, int a, int matriz[100][100])//imprime la matriz inicial 
 {
 	
 	printf ("\t|x/y|\t");
 	for (i=1; i<=n; i++)
	 {
 		printf ("%i\t",i);
	 }
	    printf("\n------------------------------------------------------------------------------------");
	 	printf ("\n\n");
	    for (i=1; i<=n; i++)
		{
				printf ("\t|%i|\t",i);
			for (j=1; j<=n; j++)
			{
				matriz[i][j]=0;
				printf ("%i\t",matriz[i][j]);
			
			}
			printf ("\n\n");
		}
 }//fin matrix
 void coordenadas( int n, int a,int matriz[100][100])//aqui pide las coordenadas del grafo
 {
 
 	printf ("Dame las coordenadas\n");
 	int s;
 	for (s=1; s<=a; s++)
	 {  
	  printf ("\nDame las coordenadas %i\n",s);
		printf ("x-->");
 		scanf ("%i",&x);
 		printf ("y-->");
 	    scanf ("%i",&y);
 	
 	   if (matriz[i][j]==matriz[i][j]){
   printf ("\t|x/y|\t");
 	for (i=1; i<=n; i++)
	 {
 		printf ("%i\t",i);
	 }
	printf ("\n-------------------------------------------------------------------------------");
	 	printf ("\n\n");
	    for (i=1; i<=n; i++)
		{
				printf ("\t|%i|\t",i);
			for (j=1; j<=n; j++)
			{
				matriz[x][y]=1;
	
			    printf ("%i\t",matriz[i][j]);
	
			}
			printf ("\n\n");
		} 
		}
	 }
	 printf ("\n\t<--------------Grafo completo------------>\n");
	 system ("pause");

 }//fin coordenadas 
 
void buscarcamino(int x, int y, int matriz[100][100])//aqui busca si existe un camino de un nodo a otro
{

	int A, B, busqueda=1,c, d;
	printf ("\n--------------Busqueda del camino--------");
	do{
	
	printf ("\nIntroduce el punto A: ");
	scanf("%i",&A);
	printf ("\nIntroduce el punto B: ");
	scanf ("%i",&B);
	c=matriz[A][y];
    d=matriz[x][B];
    
	printf ("\nBusqueda de camino del punto A:%i al punto B:%i",A, B);
	if (matriz[A][B]==matriz[x][y]){
		printf ("\n---si hay un camino----");
	}
	else if (c==d){
		printf ("\n---si hay un camino----");
	}
	else{
		printf ("\n----No hay camino----");
	}
		printf ("\nDecea buscar otro camino: [Si=1] y [No=0]--->");
	    scanf ("%i",&busqueda);
	}
	while (busqueda==1);
}//fin buscarcamino
 
 

/**
*@file cuerpoSimplex.c 
*@brief Fichero con todas las funciones del programa 
*/
#include "MetodoSimplex.h"

void matrix(int r, int c, float matriz[100][100], int mc){// en este bloque de codigo se imprime la matriz
    //impresion de las variables basicas, variables de holgura y de restriccion
    printf ("\t");
    for (i=1; i<=c; i++){
    	printf ("X%d\t",i);
	}
	for (i=1; i<=r; i++){
		printf ("S%d\t",i);
	}
	printf ("CR\t\n");//fin de impresion de variables
	for (j=1; j<=r+1; j++)
	{
		if (j<r+1)//se agrega la fila Z
		{
			printf ("\t");
		}//fin Z
		if (j==r+1)//se agrega la fila Z
		{
			printf ("Z\t");
			
			for (i=1; i<=mc; i++)
			{
				printf ("%.2f\t",matriz[j][i]);
			}
		}//fin Z
		else 
		{
			for (i=1; i<=mc; i++)
			{
				printf ("%.2f\t",matriz[j][i]);
			}
		}
		printf ("\n\n");
	}
	system("pause");
	printf ("\n\n");
}//fin de matrix

void pedirdatos(int r, int c){//en este bloque se piden los datos 
	float z[100];
	     printf ("\nIngrese funcion objetivo -->Z:\n");
	     
	     for (i=1; i<=c; i++)
		 {
		 	printf ("\ningrese valor X%d: ",i);
		 	scanf ("%f",&z[i]);
		 	matriz[r+1][i]=z[i]*-1;
		 	
		 }
		 printf ("\nLa funcion objetivo es:\n");
		 printf ("Z\t");
 	
		for (i=1; i<=c; i++){
				printf ("%.2f\t",z[i]);//imprime la funcion objetivo
			}
		 printf ("\n\n");
		 
		 for (j=1; j<=r; j++)
		 {
		 	printf ("\ningrese funcion %d: ",j);
		 	for (i=1; i<=c+1; i++)
			 {
			 	if (i==c+1)
				 {
			 		int res=c+r+1;
			 		printf ("\ningrese coheficiente de restriccion:");
			 		scanf ("%f",&matriz[j][res]);
			 		
				 }
				 else
				 {
				 	printf ("\ningrese valor X%i: ",i);
				 	scanf ("%f",&matriz[j][i]);
				 	fflush(stdin);
				 }
			 }
			 printf ("\n\n");
		 	
		 }
		 int j2, k1;//a partir de aqui se llenan las variables de holgura
		 j2=r+c;
		 k1=c+1;
		 for (j=1; j<=r; j++)
		 {
		 	for (i=r; i<=j2; i++)
			 {
			 	matriz[j][k1]=1;//se coloca un 1 en la variable de holgura
			 }
			 k1++;
			 printf ("\n\n");
		 } // fin de variables de holgura 
		 
		 //return matriz[100][100];
	
}//fin pedirdatos
 
void operaciones(float matriz[100][100], int mc){// Aqui se realiza el proceso para encontrar la fila privote
	float neg=100000;//se asigna un numero grande para corregir
	for (j=1; j<=r; j++)
	{
		if (matriz[j][pos]==0)
		{
			matriz[j][mc+1]=0;//aqui asigno un 0 para que no se viera feo con un uno
		}
		else
		{
			matriz[j][mc+1]=matriz[j][mc]/matriz[j][pos];//aqui divide para saber la fila privote
		}
		
	} 
	for (j=1; j<=r; j++)
	{
		if (matriz[j][mc+1]>0 && matriz[j][mc+1]<neg)
		{
			neg=matriz[j][mc+1];//se busca el menor para saber la fila privote 
			pos1=j;
		}
	}
	printf ("\n\tResultados de la divicion");
	for (j=1; j<=r; j++)
	{
		printf ("\n\t%.2f\n",matriz[j][mc+1]);
	}
	printf ("Lafila privote es: %d  con: %.2f por ser el menor\n",pos1,neg);
	//return pos1;
}// Fin operaciones
 
void iteracionfila(int pos1, int pos2){
	float valores= matriz[pos1][pos2];
	
	for (i=1; i<=mc; i++)
	{
		matriz[pos1][i]=matriz[pos1][i]/valores;// Aqui divido para formar la fila privote 
	}
	
	for (i=1; i<=r+1; i++)
	{
		if (i==pos1)
		{
			colum[i]=matriz[i][pos2];
		}
		else 
		{
			colum[i]=matriz[i][pos2]*-1;//cambio los signos para formar los 0 y 1 correspondientes
		}
		
	}
	
	for (i=1; i<=r+1; i++)
	{
		for (j=1; j<=mc; j++)
		{
			if (i==pos1)
			{
			   
			}
			else
			{
			matriz[i][j]=(colum[i]*matriz[pos][j])+matriz[i][j];
			}
		
		}
	}
}// FIN iteracionfila 

void posicion(int mc, float matriz[100][100])
 {
       float menor =matriz[r+1][1];
            for (i=1;i<=mc;i++)
             {
                if(matriz[r+1][i]<=menor)
                {
                    menor=matriz[r+1][i];
                    pos=i;
                }
             }  
             //return pos;
 }
 



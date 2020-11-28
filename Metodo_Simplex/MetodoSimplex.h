/**
*@file MetodoSimplex.h 
*@brief Cabecera del prototipo de funciones
*@par   logica
*       - se colocan las macros de la cabecera
*       - manda a llamar a cada funcion de la clase main y el cuerpoSimplex
*       - se colocan todas las variables globales y los arreglos a utilizar en las funciones
*       - modularizacion de nuestro codigo C
*/
#ifndef __METODO_SIMPLEX_H
#define __METODO_SIMPLEX_H
#include<stdio.h>
#include<stdlib.h>

/**
*@brief variables de arreglos para la fommacion de la tabla simplex
*@var matriz[][] matriz de tamaño 100 por 100
*@var colum[] arreglo de tamaño 100
*/
float matriz[100][100],colum[100];
/**
*@brief variables a utilizar en las funciones 
*@var i contador 
*@var j contador 
*@var r renglon 
*@var c columna 
*@var mc valor de la matriz completa 
*@var pos posicion de los valores 
*@var pos1 posicion de valores 
*@var pos2 posicion de valores 
*/
int i, j, r, c, mc, pos, pos1, pos2;
/**
*@brief funcion para la impresion de los valores en la matriz 
*@param r renglones
*@param c columnas
*@param matriz[][] matriz de valores 
*@param mc total de la matriz completa
*@return void  
*/
void matrix(int r, int c, float matriz[100][100], int mc);
/**
*@brief funcion que para pedir los valores 
*@par  logica 
*      - solicitar valores de la funcion objetivo
*      - solicitar valores de las variables de cada funcion 
*      - solicitar valores de restriccion 
*      - colocar las variables de hogura 
*@param r renglones
*@param c columnas 
*@return void 
*/
void pedirdatos(int r, int c);
/**
*@brief funcion que realiza las operaciones de la fila 
*@par   logica 
*       - Dividir coheficientes de restriccion para encontrar la fila privote 
*       - Buscar la fila privote 
*@param matriz[][] matriz de valores 
*@param mc valor de la matriz completa 
*@return void 
*/
void operaciones(float matriz[100][100], int mc);
/**
*@brief funcion para obtener los nuevos valores de la fila privote 
*@par   logica 
*       - Dividir la fila privote entre el elemento privote 
*       - Obtener nuevas filas  
*@param pos1 posicion del la columna  
*@param pos2 posicion dos del valor 
*@return void 
**/
void iteracionfila(int pos1, int pos2);
/**
*@brief funcion para localizar la posicion de la columna privote 
*@param mc valor de la matriz completa 
*@param matriz[][] matriz de valores 
*@return void 
*/
void posicion(int mc, float matriz[100][100]);


#endif//fin _METODO_SIMPLEX_H

/**
 *@file CabeceraGrafo.h 
 *@brief esta es la cabecera que contiene todas las funciones requeridas para mandar a llamar las partes de codigo 
 *
 */
#ifndef _CABECERA_GRAFO_H
#define _CABECERA_GRAFO_H
#include <stdio.h>
#include <stdlib.h>
 /**
  *@brief variables de operacion en las funciones
  *@var i variable para formar la matriz
  *@var j variable para formar la matriz
  *@var x coordenada en x
  *@var y coordenada en y
  */
 int i, j, x, y;
 /**
  *@param matriz[][] definimos un arreglo de 100 por 100
  *@param n numero de nodos
  *@param a numero de adyacencias 
  */
 int matriz[100][100], n, a;
   /**
   *@brief funcion para crear la matriz inicial 
   *@par logica 
   *    - crea las columnas y filas sorrespondientes para formar la matriz del grafo
   *    - inicializa la matriz en ceros 
   *@param n numero de nodos
   *@param a numero de adyacencias 
   *@param matriz[][] arreglo de la matriz

   *@return void 
   */
 void matrix(int n, int a, int matriz[100][100]);
   /**
   *@brief funcion para colocar cada una de las coordenadas del grafo en la la matriz 
   *@par logica 
   *     - crea un bucle for para colocar las coordenadas correspondientes al numero de nodos
   *     - crea las columnas y filas sorrespondientes para formar la matriz del grafo
   *     - inicializa las coordenadas con un uno 
   *     - termina el bucle hasta que se completen las coordenadas respectivas al numero de nodos   
   *@param n numero de nodos 
   *@param a numero de adyacencias 
   *@param matriz[][] arreglo de la matriz
   *@return void 
   */

 void coordenadas( int n, int a,int matriz[100][100]);
   /**
   *@brief funcion para hacer la busqueda del camino de un grafo
   *@par logica 
   *   - declara vbariables para los puntos y el para finalizar
   *   - solicita los puntos para determinar si existe el camino
   *   - se hace una condicion if  para determinar si existe un camino
   *   - finaliza la busqueda con la opcion buscar otro camino
   *   - finaliza el programa con la opcion repetir programa 
   *@param x coordenada en x
   *@param y coordenada en y
   *@param matriz[][] arreglo de la matriz    
   *@return void
   */

 void buscarcamino(int x, int y, int matriz[100][100]);

 
#endif//_CABECERA_GRAFO_H


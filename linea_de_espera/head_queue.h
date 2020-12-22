/**
*@file head_queue
*@brief Esta es la cabecera que contiene el prototipo de funciones del programa
*@par    logica de funciones 
*        - ColaDeEspera Define la estructura y calculo de la cola de espera en un rango de horas
*        - InOut Define las los valores de las entradas y las salidas de acuerdo a la llegada de clientes salidas 
*@author Mauricio Salamanca
*@date   21-12-2020
*/
#ifndef _HEAD_QUIUEU_
#define _HEAD_QUIUEU_
#include <stdio.h>
#include <stdlib.h>
/**
*@brief variables globales del programa
*@var i variable para los ciclos de repeticion
*@var j variable para los ciclos de repeticion
*@var lg[] arreglo para almacenar las llegadas de clientes
*@var cap capacidad de caja
*@var caja[] arreglo para almacenar las cantidades de cajas abiertas 
*/
int i, j, lg[100], cap, caja[50];
/**
*@var ini principio del rango de horas 
*@var fin termino del rango de horas 
*@var salida salida de clientes 
*/
int ini, fin, salida;
/**
*@param lg[] arreglo de las llegadas de clientes 
*@param ini comienzo del rango de horas
*@param fin termino del rango de horas 
*@param caja[] arreglo para las cantidades de cajas abiertas 
*@param cap capacidad de caja 
*@return void 
*/
void ColaDeEspera(int lg[100], int ini, int fin, int caja[50], int cap);
/**
*@param lg[] arreglo de las llegadas de clientes 
*@param ini comienzo del rango de horas
*@param fin termino del rango de horas 
*@param caja[] arreglo para las cantidades de cajas abiertas 
*@param cap capacidad de caja 
*@return void 
*/
void InOut(int lg[100], int ini, int fin, int caja[50], int cap);



#endif

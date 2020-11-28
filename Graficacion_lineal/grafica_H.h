/**
*@file grafica_H.h
*@brief Esta es la cabecera del proyecto_grafica
*@par     logica
*         - de declaran las macros y librerias de c 
*         - Se declaran las variables globales a utilizar en el programa
*         - Se manda a llamar al fichero main y cuerpo_grafica 
*/
#ifndef _grafica_H_
#define _grafica_H_
#include <stdio.h>
#include <stdlib.h>
/**
*@brief variables globales del programa
*@var r1 variable de rango inicial
*@var r2 variable de rango final
*@var m variable de la ecuacion lineal 
*@var b variable de la ordenada al origen de la ecuacion lineal 
*/
int r1, r2, m, b;
/**
*@brief funcion a llamar para realizar la grafica con los comandos de gnuplot
*@par     logica 
*         - crea un archivo de tuberia IPC que se usa para ejecutar gnuplot y mandarle el archivo a ejecutar
*         - imprime los comandos en la ventana gnuplot para ejecuarlos
*         - imprime los valores en la grafica de acuerdo al rango ingresado
*@param r1 Rango inicial
*@param r2 Rango final
*@param m valor de m en el ecuacion lineal
*@param b valor ordenada al origen de la ecuacion lineal
*@return void 
*/
void graficar(int r1, int r2, int m, int b);




#endif

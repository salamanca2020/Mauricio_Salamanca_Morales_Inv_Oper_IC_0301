/**
*@file cuerpo_grafica.c
*@brief fichero para hacer la grafica en gnuplot
*/
#include "grafica_H.h"
void graficar(int r1, int r2, int m, int b){
     int i=0, y;
          
    /*Se crea una archivo de tipo popen, es una tubería IPC que se usa, para
     * ejecutar gnuplot y enviarle el archivo a graficar
	 */
    FILE * ventanaGnuplot = popen ("gnuplot -persist", "w");
    
    /*lista de comandos para ejecutar y configurar la visualización que tendrán
     * los puntos en la gráfica con gnuplot*/
    
    fprintf (ventanaGnuplot,"set title \"funcion y=mx+b\"");
    fprintf (ventanaGnuplot,"\nset style data linespoints ");
    fprintf (ventanaGnuplot,"\nset xrange [%i:%i]",r1,r2);
    fprintf (ventanaGnuplot,"\nset ylabel \"------Y---->\"");
    fprintf (ventanaGnuplot,"\nset xlabel \"------X---->\"");
    fprintf (ventanaGnuplot,"\nset grid ytics ");
    fprintf (ventanaGnuplot,"\nset grid xtics ");
    fprintf (ventanaGnuplot,"\nplot '-'\n");
   
   //se envian los puntos a graficar de acuerdo al rango de la funcion
   for (i=0; i<r2; i++){	
 	y=(m*i)+(b);
 	fprintf (ventanaGnuplot,"%i \n ",y);
    }
    
    //se cierra la tuberia 
    fclose(ventanaGnuplot);
	
}

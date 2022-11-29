/*
Autor: Sergio Rojas Calvo
Modificado por: Ivan Rojas Calvo
Curso: Aplicaciones de Microcontroladores
Actividad: Semana 12
*/

#include <stdio.h>
#include <math.h>

int main()	{
    int n, opcion;
	printf("Hola mundo");
	
    do {
        printf( "\n\n   1. Continuar con el programa", 50 );
        printf( "\n   2. Salir del programa", 50 );
        printf( "\n\n   Introduzca opci%cn (1-2): ", 50 );

        scanf( "%d", &opcion );
        
        switch ( opcion ) {
            case 1: printf( "\n Hola Mundo");
                    break;
         }
    } 
    
	while ( opcion != 2 );
    return 0;
}

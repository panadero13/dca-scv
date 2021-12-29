#include <stdio.h>
#include <math.h>

int main()
{
    char opcion; 
    double n1, n2;

    do
    {
        printf( "\n   >>> MENU CALCULADORA <<<" );
        printf( "\n\n   1. Sumar dos numeros.");
        printf( "\n   2. Restar dos numeros.");
        printf( "\n   3. Multiplicar dos numeros.");
        printf( "\n   4. Dividir dos numeros.");
        printf( "\n   5. Cuadrado de un numero.");
        printf( "\n   6. Cubo de un numero.");
        printf( "\n   7. Raiz cuadrada de un numero.");
        printf( "\n   8. Salir.\n" );

        /* Filtramos la opción elegida por el usuario */
        do
        {
            printf( "\n   Introduzca opcion (1-8): ");
            fflush( stdin );
            scanf( "%c", &opcion);

        } while ( opcion < '1' || opcion > '8' );
        /* La opción sólo puede ser '1', '2', '3', '4' , '5', '6', '7' o '8' */

        switch ( opcion )
        {
                      /* Opción 1: Sumar */
            case '1': printf( "\n   Introduzca primer sumando: " );
                      scanf( "%lf", &n1);
                      printf( "\n   Introduzca segundo sumando: " );
                      scanf( "%lf", &n2);
                      printf( "\n   %lf + %lf = %lf\n", n1, n2, n1 + n2 );
                      break;

                      /* Opción 2: Restar */
            case '2': printf( "\n   Introduzca minuendo: " );
                      scanf( "%lf", &n1);
                      printf( "\n   Introduzca sustraendo: " );
                      scanf( "%lf", &n2);
                      printf( "\n   %lf - %lf = %lf\n", n1, n2, n1 - n2 );
                      break;

                      /* Opción 3: Multiplicar */
            case '3': printf( "\n   Introduzca primer operando: " );
                      scanf( "%lf", &n1);
                      printf( "\n   Introduzca segundo operando: " );
                      scanf( "%lf", &n2);
                      printf( "\n   %lf * %lf = %lf\n", n1, n2, n1 * n2 );
                      break;

                      /* Opción 4: División entera */
            case '4': printf( "\n   Introduzca dividendo: " );
                      scanf( "%lf", &n1);
                      printf( "\n   Introduzca divisor: " );
                      scanf( "%lf", &n2);
                      if ( n2 != 0 )
                          printf( "\n   %lf div %lf = %lf\n", n1, n2, n1 / n2 );
                      else
                          printf( "\n   ERROR: No se puede dividir entre cero.\n" );
                      break;

                      /* Opción 5: Cuadrado de un numero */
            case '5': printf( "\n   Introduzca numero a elevar al cuadrado: " );
                      scanf( "%lf", &n1);
                      printf( "\n   %lf ^ 2 = %lf\n", n1, n1 * n1 );
                      break;

            case '6': printf( "\n   Introduzca numero a elevar al cubo: " );
                      scanf( "%lf", &n1);
                      printf( "\n   %lf ^ 3 = %lf\n", n1, n1 * n1 * n1 );
                      break;

                      /* Opción 6: Raiz cuadrada de un numero */
            case '7': printf( "\n   Introduzca numero que radicar: " );
                      scanf( "%lf", &n1);
                      printf( "\n   Raiz de %lf = %lf\n", n1, sqrt(n1) );
                      break;
        }
    } while ( opcion != '8' );

    return 0;
}
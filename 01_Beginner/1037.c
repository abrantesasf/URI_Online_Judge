/*
================================================================================
Name        : 1037.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1037: Internval
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1037
Summary     : You must make a program that read a float-point number and print
            : a message saying in which of following intervals the number
            : belongs: [0,25] (25,50], (50,75], (75,100]. If the read number is
            : less than zero or greather than 100, the program must print the
            : message “Fora de intervalo” that means "Out of Interval". The input
            : file contains a floating-point number.

C Standard  : C99
Version     : 
Copyright   : 
More Info   : 
================================================================================
*/


/* Headers files includes:
--------------------------
   #include <header_file.h>
   Important headers: stdio.h, stdlib.h, ctype.h, math.h, string.h, time.h
*/
#include <stdio.h>


/* Preprocessor macros/definitions:
-----------------------------------
*/
#define rSucesso 0


/* Global variables declarations:
---------------------------------
*/


/* Functions prototypes (declarations):
---------------------------------------
*/


/* Main function:
-----------------
*/
int main(void) {
    // Declara variáveis:
    double x = 0.0;

    // Pega variáveis:
    scanf("%lf", &x);

    // Checa intervalos:
    if ( x > 100 )
    {
        printf("Fora de intervalo\n");
    }
    else if ( x > 75 )
    {
        printf("Intervalo (75,100]\n");
    }
    else if ( x > 50 )
    {
        printf("Intervalo (50,75]\n");
    }
    else if ( x > 25 )
    {
        printf("Intervalo (25,50]\n");
    }
    else if (x >= 0 )
    {
        printf("Intervalo [0,25]\n");
    }
    else
    {
        printf("Fora de intervalo\n");
    }

    // Retorna
    return rSucesso;
}


/* Functions definitions:
-------------------------
*/

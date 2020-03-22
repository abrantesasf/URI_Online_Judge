/*
================================================================================
Name        : 1052.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1052: Month
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1052
Summary     : Read an integer number between 1 and 12, including. Corresponding
            : to this number, you must print the month of the year, in english,
            : with the first letter in uppercase.

C Standard  : C99
Version     : 
Copyright   : 
More Info   : 
================================================================================
*/


/* Headers files includes:
--------------------------
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
int main(void)
{
    // Declara variáveis
    int mes = 0;

    // Pega variáveis
    scanf("%d", &mes);

    // Imprime
    if ( mes == 1 )
        printf("January\n");
    else if ( mes == 2 )
        printf("February\n");
    else if ( mes == 3 )
        printf("March\n");
    else if ( mes == 4 )
        printf("April\n");
    else if ( mes == 5 )
        printf("May\n");
    else if ( mes == 6 )
        printf("June\n");
    else if ( mes == 7 )
        printf("July\n");
    else if ( mes == 8 )
        printf("August\n");
    else if ( mes == 9 )
        printf("September\n");
    else if ( mes == 10 )
        printf("October\n");
    else if ( mes == 11 )
        printf("November\n");
    else
        printf("December\n");

    // Retorna:
    return rSucesso;
}


/* Functions definitions:
-------------------------
*/

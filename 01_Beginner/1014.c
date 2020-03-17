/*
================================================================================
Name        : 1014.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1014: Consumption
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1014
Summary     : Calculate a car's average consumption being provided the total
            : distance traveled (in Km) and the spent fuel total (in liters).
            : The input file contains two values: one integer value X 
            : representing the total distance (in Km) and the second one is a 
            : floating point number Y representing the spent fuel total, with 
            : a digit after the decimal point.

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
int main(void) {
    // Declara variáveis:
    int    km = 0;
    double l  = 0.0;

    // Obtém valores:
    scanf("%d", &km);
    scanf("%lf", &l);

    // Imprime o consumo:
    printf("%.3lf km/l\n", ((double) km / l));

    // Retorna:
    return rSucesso;
}


/* Functions definitions:
-------------------------
*/

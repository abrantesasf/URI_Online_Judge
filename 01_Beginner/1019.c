/*
================================================================================
Name        : 1019.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1019: Time Conversion
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1019
Summary     : Read an integer value, which is the duration in seconds of a
            : certain event in a factory, and inform it expressed in
            : hours:minutes:seconds. The input file contains an integer N.

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
    int s = 0;
    int h = 0;
    int m = 0;
    int r = 0;

    // Obtém valores:
    scanf("%d", &s);

    // Horas:
    h = s / (60 * 60);
    r = s % (60 * 60);

    // Minutos:
    m = r / 60;
    r = r % 60;

    // Segundos:
    s = r;

    // Imprime:
    printf("%d:%d:%d\n", h, m, s);

    // Retorna:
    return rSucesso;
    
}


/* Functions definitions:
-------------------------
*/

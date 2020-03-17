/*
================================================================================
Name        : 1020.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1020: Age in Days
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1020
Summary     : Read an integer value corresponding to a person's age (in days)
            : and print it in years, months and days, followed by its respective
            : message “ano(s)”, “mes(es)”, “dia(s)”. Note: only to facilitate 
            : the calculation, consider the whole year with 365 days and 30 days
            : every month.

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
    int d = 0;
    int a = 0;
    int m = 0;
    int r = 0;

    // Obtém valores:
    scanf("%d", &d);

    // Anos
    a = d / 365;
    r = d % 365;

    // Meses:
    m = r / 30;
    r = r % 30;

    // Dias:
    d = r;

    // Imprime:
    printf("%d ano(s)\n", a);
    printf("%d mes(es)\n", m);
    printf("%d dia(s)\n", d);

    // Retorna:
    return rSucesso;
    
}


/* Functions definitions:
-------------------------
*/

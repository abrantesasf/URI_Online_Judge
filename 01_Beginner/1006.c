/*
================================================================================
Name        : 1006.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1006: Average 2
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1006
Summary     : Read three values (variables A, B and C), which are the three
            : student's grades. Then, calculate the average, considering that
            : grade A has weight 2, grade B has weight 3 and the grade C has
            : weight 5. Consider that each grade can go from 0 to 10.0, always
            : with one decimal place.

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
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    double pa = 2.0;
    double pb = 3.0;
    double pc = 5.0;
    double media = 0.0;

    // Lê variáveis:
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    // Calcula a média:
    media = ((a * pa) + (b * pb) + (c * pc))/(pa + pb + pc);

    // Imprime:
    printf("MEDIA = %.1lf\n", media);

    // Retorna:
    return rSucesso;
}


/* Functions definitions:
-------------------------
*/

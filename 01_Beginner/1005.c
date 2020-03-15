/*
================================================================================
Name        : 1005.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1005: Average 1
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1005
Summary     : Read two floating points' values of double precision A and B, 
            : corresponding to two student's grades. After this, calculate the 
            : student's average, considering that grade A has weight 3.5 and B
            : has weight 7.5. Each grade can be from zero to ten, always with
            : one digit after the decimal point

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
    double pa = 3.5;
    double pb = 7.5;
    double media = 0.0;

    // Lê variáveis:
    scanf("%lf", &a);
    scanf("%lf", &b);

    // Calcula a média:
    media = ((a * pa) + (b * pb))/(pa + pb);

    // Imprime:
    printf("MEDIA = %.5lf\n", media);

    // Retorna:
    return rSucesso;
}


/* Functions definitions:
-------------------------
*/

/*
================================================================================
Name        : 1007.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1007: Difference
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1007
Summary     : Read four integer values named A, B, C and D. Calculate and print
            : the difference of product A and B by the product of C and D
            : (A * B - C * D).

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
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int diff = 0;

    // Lê variáveis:
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    // Calcula a diferença dos produtos:
    diff = (a * b) - (c * d);

    // Imprime:
    printf("DIFERENCA = %d\n", diff);

    // Retorna:
    return rSucesso;
}


/* Functions definitions:
-------------------------
*/

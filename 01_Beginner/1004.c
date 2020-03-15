/*
================================================================================
Name        : 1004.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1004: Simple Product
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1004
Summary     : Read two integer values. After this, calculate the product between
            : them and store the result in a variable named PROD.

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
    // Declara variáveis
    int a = 0;
    int b = 0;
    int prod = 0;

    // Lê variáveis
    scanf("%d", &a);
    scanf("%d", &b);

    // Calcula o produto:
    prod = a * b;

    // Imprime:
    printf("PROD = %d\n", prod);

    // Retorna:
    return rSucesso;
}


/* Functions definitions:
-------------------------
*/

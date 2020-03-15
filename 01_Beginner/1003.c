/*
================================================================================
Name        : 1003.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1003: Simple Sum
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1003
Summary     : Read two integer values, in this case, the variables A and B.
            : After this, calculate the sum between them and assign it to the
            : variable SOMA. Write the value of this variable.

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
    int soma = 0;

    // Lê variáveis
    scanf("%d", &a);
    scanf("%d", &b);

    // Calcula a soma
    soma = a + b;

    // Imprime o resultado:
    printf("SOMA = %d\n", soma);

    // Retorna
    return rSucesso;
}


/* Functions definitions:
-------------------------
*/

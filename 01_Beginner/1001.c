/*
================================================================================
Name        : 1001.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1001: Extremely Basic
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1001
Summary     : Read 2 variables, named A and B and make the sum of these two
            : variables, assigning its result to the variable X.

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
    int x = 0;

    // Lê variáveis
    scanf("%d", &a);
    scanf("%d", &b);

    // Calcula x:
    x = a + b;

    // Imprime resultado:
    printf("X = %d\n", x);

    // Retorna
    return 0;
}


/* Functions definitions:
-------------------------
*/

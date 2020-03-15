/*
================================================================================
Name        : 1010.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1010: Simple Calculate
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1010
Summary     : In this problem, the task is to read a code of a product 1, the
            : number of units of product 1, the price for one unit of product 1,
            : the code of a product 2, the number of units of product 2 and the
            : price for one unit of product 2. After this, calculate and show
            : the amount to be paid. The input file contains two lines of data.
            : In each line there will be 3 values: two integers and a floating
            : value with 2 digits after the decimal point.

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
    // Declara variáveis:
    int    id1  = 0;
    int    un1  = 0;
    double val1 = 0.0;
    int    id2  = 0;
    int    un2  = 0;
    double val2 = 0.0;
    
    // Lê variáveis:
    scanf("%d %d %lf", &id1, &un1, &val1);
    scanf("%d %d %lf", &id2, &un2, &val2);

    // Imprime:
    printf("VALOR A PAGAR: R$ %.2lf\n", (un1 * val1 + un2 * val2));

    // Retorna:
    return 0;
}


/* Functions definitions:
-------------------------
*/

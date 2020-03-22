/*
================================================================================
Name        : 1060.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1060: Positive numbers
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1060
Summary     : Write a program that reads 6 numbers. These numbers will only be
            : positive or negative (disregard null values). Print the total
            : number of positive numbers.

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
int main(void)
{
    // Declara variáveis
    float n = 0.0;
    int soma = 0;
    
    // pergunta os números
    for (int i = 1; i <= 6; i++)
    {
        scanf("%f", &n);
        if ( n > 0 )
            soma++;
    }

    // Imprime
    printf("%d valores positivos\n", soma);

    // Retorna:
    return rSucesso;
}


/* Functions definitions:
-------------------------
*/

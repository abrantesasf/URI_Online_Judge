/*
================================================================================
Name        : 1051.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1051: Taxes
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1051
Summary     : Read a value with 2 digits after the decimal point, equivalent to
            : the salary of a Lisarb inhabitant. Then print the due value that
            : this person must pay of taxes, according to the table below.

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
    float sal = 0.0;
    float tax = 0.0;

    // Pega valor:
    scanf("%f", &sal);

    // Calcula taxa
    if ( sal >= 0.0 && sal < 2000.01 )
    {
        printf("Isento\n");
    }
    else if ( sal >= 2000.01 && sal < 3000.01 )
    {
        printf("R$ %.2f\n", (sal - 2000.01) * 0.08);
    }
    else if ( sal >= 3000.01 && sal < 4500.01 )
    {
        printf("R$ %.2f\n", (1000 * 0.08 + (sal - 3000.01) * 0.18));
    }
    else
    {
        printf("R$ %.2f\n", (1000 * 0.08 + 1500 * 0.18 + (sal - 4500.01) * 0.28));
    }

    // Retorna:
    return rSucesso;
}


/* Functions definitions:
-------------------------
*/

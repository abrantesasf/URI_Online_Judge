/*
================================================================================
Name        : 1071.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1071: Sum of Consecutive Odd Numbers I
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1071
Summary     : Read two integer values X and Y. Print the sum of all odd values
            : between them.

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
    int n1   = 0;
    int n2   = 0;
    int soma = 0;

    // Pega dados
    scanf("%d", &n1);
    scanf("%d", &n2);

    // Calcula:
    if ( n1 < n2 )
    {
        for (int i = (n1 + 1); i < n2; i++)
        {
            if ( i % 2 != 0 )
            {
                soma = soma + i;
            }
        }
    }
    else if ( n1 > n2 )
    {
        for (int i = (n1 - 1); i > n2; i--)
        {
            if ( i % 2 != 0 )
            {
                soma = soma + i;
            }
        }
    }

    // Imprime a soma
    printf("%d\n", soma);
    
    // Retorna:
    return rSucesso;
}


/* Functions definitions:
-------------------------
*/

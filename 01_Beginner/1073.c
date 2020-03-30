/*
================================================================================
Name        : 1073.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1073: Even Square
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1073
Summary     : Read an integer N. Print the square of each one of the even values
            : from 1 to N including N if it is the case.

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
int par(int n);


/* Main function:
-----------------
*/
int main(void)
{
    // Declara variáveis
    int n = 0;

    // Pega valores:
    scanf("%d", &n);

    // Processa:
    for (int i = 1; i <= n; i++)
    {
        if ( par(i) )
        {
            printf("%d^2 = %d\n", i, i*i);
        }
    }
    
    // Retorna:
    return rSucesso;
}


/* Functions definitions:
-------------------------
*/
int par(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

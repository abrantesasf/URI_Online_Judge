/*
================================================================================
Name        : 1072.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1072: Interval 2
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1072
Summary     : Read an integer N. This N will be the number of integer numbers X
            : that will be read. Print how many these numbers X are in the
            : interval [10,20] and how many values are out of this interval.

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
    int loops  = 0;
    int temp   = 0;
    int dentro = 0;
    int fora   = 0;

    // Verifica quantos números serão fornecidos:
    scanf("%d", &loops);

    // Obtém os números necessários:
    for (int i = 0; i < loops; i++)
    {
        scanf("%d", &temp);
        if (temp >= 10 && temp <= 20)
        {
            dentro++;
        }
        else
        {
            fora++;
        }
    }

    // Resutlado:
    printf("%d in\n", dentro);
    printf("%d out\n", fora);
    
    // Retorna:
    return rSucesso;
}


/* Functions definitions:
-------------------------
*/

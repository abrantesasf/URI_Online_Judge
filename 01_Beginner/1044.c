/*
================================================================================
Name        : 1044.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1044: Multiples
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1044
Summary     : Read two nteger values (A and B). After, the program should print
            : the message "Sao Multiplos" (are multiples) or "Nao sao Multiplos"
            : (aren’t multiples), corresponding to the read values.

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

    // Obtém dados:
    scanf("%d %d", &a, &b);

    // Avalia:
    if ( b >= a )
    {
        if ( b % a == 0 )
        {
            printf("Sao Multiplos\n");
        }
        else
        {
            printf("Nao sao Multiplos\n");
        }
    }
    else
    {
        if ( a % b == 0 )
        {
            printf("Sao Multiplos\n");
        }
        else
        {
            printf("Nao sao Multiplos\n");
        }
    }

    
    // Retorna:
    return rSucesso;
}


/* Functions definitions:
-------------------------
*/

/*
================================================================================
Name        : 1050.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1050: DDD
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1050
Summary     : Read an integer number that is the code number for phone dialing.
            : Then, print the destination according to the following table. If
            : the input number isn’t found in the above table, the output must
            : be: DDD nao cadastrado

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
    int ddd = 0;

    // Obtém o DDD:
    scanf("%d", &ddd);

    // Processamento:
    if ( ddd == 61 )
    {
        printf("Brasilia\n");
    }
    else if ( ddd == 71 )
    {
        printf("Salvador\n");
    }
    else if ( ddd == 11 )
    {
        printf("Sao Paulo\n");
    }
    else if ( ddd == 21 )
    {
        printf("Rio de Janeiro\n");
    }
    else if ( ddd == 32 )
    {
        printf("Juiz de Fora\n");
    }
    else if ( ddd == 19 )
    {
        printf("Campinas\n");
    }
    else if ( ddd == 27 )
    {
        printf("Vitoria\n");
    }
    else if ( ddd == 31 )
    {
        printf("Belo Horizonte\n");
    }
    else
    {
        printf("DDD nao cadastrado\n");
    }
    
    // Retorna
    return rSucesso;
}


/* Functions definitions:
-------------------------
*/

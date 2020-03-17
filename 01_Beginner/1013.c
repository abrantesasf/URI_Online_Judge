/*
================================================================================
Name        : 1013.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1013: The Greatest
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1013
Summary     : Make a program that reads 3 integer values and present the
            : greatest one followed by the message "eh o maior". 

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
    int a     = 0;
    int b     = 0;
    int c     = 0;
    int maior = 0;

    // Obtém valores:
    scanf("%d %d %d", &a, &b, &c);

    // Verifica maior:
    maior = a;
    
    if ( b >= maior )
    {
        maior = b;
    }
    if ( c >= maior )
    {
        maior = c;
    }

    // Imprime o maior:
    printf("%d eh o maior\n", maior);

    // Retorna:
    return rSucesso;
}


/* Functions definitions:
-------------------------
*/

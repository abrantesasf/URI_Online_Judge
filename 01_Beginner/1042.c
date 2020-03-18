/*
================================================================================
Name        : 1042.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1042: Simple Sort
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1042
Summary     : Read three integers and sort them in ascending order. After, print
            : these values in ascending order, a blank line and then the values
            : in the sequence as they were readed.

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
    int c = 0;
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;

    // Obtém dados:
    scanf("%d %d %d", &a, &b, &c);

    // Ordena:
    if ( a >= b )
    {
        n1 = a;
        n2 = b;
        n3 = c;
        if ( c >= a )
        {
            n1 = c;
            n2 = a;
            n3 = b;
        }
        else if ( c >= b)
        {
            n3 = b;
            n2 = c;
        }
    }
    else
    {
        n1 = b;
        n2 = a;
        n3 = c;
        if ( c >= b )
        {
            n1 = c;
            n2 = b;
            n3 = a;
        }
        else if ( c >= a )
        {
            n2 = c;
            n3 = a;
        }
    }

    // Imprime:
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", n3, n2, n1, a, b, c);
    
    // Retorna:
    return rSucesso;
}


/* Functions definitions:
-------------------------
*/

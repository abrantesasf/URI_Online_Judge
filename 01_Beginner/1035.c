/*
================================================================================
Name        : 1035.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1035: Selection Test 1
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1035
Summary     : Read 4 integer values A, B, C and D. Then if B is greater than C
            : and D is greater than A and if the sum of C and D is greater than
            : the sum of A and B and if C and D were positives values and if A
            : is even, write the message “Valores aceitos” (Accepted values).
            : Otherwise, write the message “Valores nao aceitos” (Values not
            : accepted).

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
int main(void) {
    // Declara variáveis:
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    // Recebe valores:
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // Imprime:
    if ( b > c &&
         d > a &&
         (c + d) > (a + b) &&
         c > 0 &&
         d > 0 &&
         par(a) == 1)
    {
        printf("Valores aceitos\n");
    }
    else
    {
        printf("Valores nao aceitos\n");
    }

    // /Retorna:
    return rSucesso;
}


/* Functions definitions:
-------------------------
*/
int par(int n)
{
    if ( n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

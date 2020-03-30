/*
================================================================================
Name        : 1074.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1074: Even or Odd
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1074
Summary     : Read an integer value N. After, read these N values and print a
            : message for each value saying if this value is odd, even, positive
            : or negative. In case of zero (0), although the correct description
            : would be "EVEN NULL", because by definition zero is even, your
            : program must print only "NULL", without quotes. 

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
int pos(int n);


/* Main function:
-----------------
*/
int main(void)
{
    // Declara variáveis
    int n = 0;

    // Pega a quantidade e inicializa vetor:
    scanf("%d", &n);
    int v[n];

    // Preenche o vetor:
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }

    // Processa:

    for (int i = 0; i < n; i++)
    {
        if (pos(v[i]) == 0)
        {
            printf("NULL\n");
        }
        else if (pos(v[i]) > 0 && par(v[i]))
        {
            printf("EVEN POSITIVE\n");
        }
        else if (pos(v[i]) > 0 && !par(v[i]))
        {
            printf("ODD POSITIVE\n");
        }
        else if (pos(v[i]) < 0 && par(v[i]))
        {
            printf("EVEN NEGATIVE\n");
        }
        else
        {
            printf("ODD NEGATIVE\n");
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

int pos(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n > 0)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

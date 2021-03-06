/*
================================================================================
Name        : 1048.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1048: Salary Increase
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1048
Summary     : Read the employee's salary, calculate and print the new employee's
            : salary, as well the money earned and the increase percentual
            : obtained by the employee

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
    float sv = 0.0;
    float i  = 0.0;

    // Obtém dados
    scanf("%f", &sv);

    // Calcula a taxa:
    if ( sv >= 0.00 && sv < 400.01 )
    {
        i = 0.15;
    }
    else if ( sv < 800.01 )
    {
        i = 0.12;
    }
    else if ( sv < 1200.01 )
    {
        i = 0.10;
    }
    else if ( sv <= 2000.00 )
    {
        i = 0.07;
    }
    else
    {
        i = 0.04;
    }

    // Resultados
    printf("Novo salario: %.2f\n", sv * (1.0 + i));
    printf("Reajuste ganho: %.2f\n", sv * i);
    printf("Em percentual: %d %%\n", (int) (i * 100));

    // Retorna:
    return rSucesso;
}


/* Functions definitions:
-------------------------
*/

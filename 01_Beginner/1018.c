/*
================================================================================
Name        : 1018.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1018: Banknotes
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1018
Summary     : In this problem you have to read an integer value and calculate
            : the smallest possible number of banknotes in which the value may
            : be decomposed. The possible banknotes are 100, 50, 20, 10, 5, 2 e
            : 1. Print the read value and the list of banknotes. The input file
            : contains an integer value N (0 < N < 1000000).

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
    int qtd   = 0;
    int n100  = 0;
    int n50   = 0;
    int n20   = 0;
    int n10   = 0;
    int n5    = 0;
    int n2    = 0;
    int n1    = 0;
    int resto = 0;

    // Obtém valores:
    scanf("%d", &qtd);

    // Notas de 100:
    n100 = qtd / 100;
    resto = qtd % 100;

    // Notas de 50:
    n50 = resto / 50;
    resto = resto % 50;

    // Notas de 20:
    n20 = resto / 20;
    resto = resto % 20;

    // Notas de 10:
    n10 = resto / 10;
    resto = resto % 10;

    // Notas de 5:
    n5 = resto / 5;
    resto = resto % 5;

    // Notas de 2:
    n2 = resto / 2;
    resto = resto % 2;

    // Notas de 1:
    n1 = resto;
    

    // Imprime os litros:
    printf("%d\n", qtd);
    printf("%d nota(s) de R$ 100,00\n", n100);
    printf("%d nota(s) de R$ 50,00\n", n50);
    printf("%d nota(s) de R$ 20,00\n", n20);
    printf("%d nota(s) de R$ 10,00\n", n10);
    printf("%d nota(s) de R$ 5,00\n", n5);
    printf("%d nota(s) de R$ 2,00\n", n2);
    printf("%d nota(s) de R$ 1,00\n", n1);

    // Retorna:
    return rSucesso;
}


/* Functions definitions:
-------------------------
*/

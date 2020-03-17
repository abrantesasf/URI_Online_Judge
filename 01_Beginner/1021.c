/*
================================================================================
Name        : 1021.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1021: Banknotes and Coins
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1021
Summary     : Read a value of floating point with two decimal places. This
            : represents a monetary value. After this, calculate the smallest
            : possible number of notes and coins on which the value can be
            : decomposed. The considered notes are of 100, 50, 20, 10, 5, 2.
            : The possible coins are of 1, 0.50, 0.25, 0.10, 0.05 and 0.01.
            : Print the message “NOTAS:” followed by the list of notes and the
            : message “MOEDAS:” followed by the list of coins.
            : The input file contains a value of floating point N
            : (0 ≤ N ≤ 1000000.00).

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
    double qtd   = 0.0;
    int    qtdi  = 0;
    int    n100  = 0;
    int    n50   = 0;
    int    n20   = 0;
    int    n10   = 0;
    int    n5    = 0;
    int    n2    = 0;
    int    c1    = 0;
    int    c050  = 0;
    int    c025  = 0;
    int    c010  = 0;
    int    c005  = 0;
    int    c001  = 0;
    int    resto = 0;

    // Obtém valores:
    scanf("%lf", &qtd);

    // Quantidade inteira:
    qtdi = qtd * 100;

    // Notas de 100:
    n100 = qtdi / 10000;
    resto = qtdi % 10000;

    // Notas de 50:
    n50 = resto / 5000;
    resto = resto % 5000;

    // Notas de 20:
    n20 = resto / 2000;
    resto = resto % 2000;

    // Notas de 10:
    n10 = resto / 1000;
    resto = resto % 1000;

    // Notas de 5:
    n5 = resto / 500;
    resto = resto % 500;

    // Notas de 2:
    n2 = resto / 200;
    resto = resto % 200;

    // Moedas de 1:
    c1 = resto / 100;
    resto = resto % 100;

    // Moedas de 0,50:
    c050 = resto / 50;
    resto = resto % 50;

    // Moedas de 0,25:
    c025 = resto / 25;
    resto = resto % 25;

    // Moedas de 0,10:
    c010 = resto / 10;
    resto = resto % 10;

    // Moedas de 0,05:
    c005 = resto / 5;
    resto = resto % 5;

    // Moedas de 0,01:
    c001 = resto;
    

    // Imprime os litros:
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", c1);
    printf("%d moeda(s) de R$ 0.50\n", c050);
    printf("%d moeda(s) de R$ 0.25\n", c025);
    printf("%d moeda(s) de R$ 0.10\n", c010);
    printf("%d moeda(s) de R$ 0.05\n", c005);
    printf("%d moeda(s) de R$ 0.01\n", c001);

    // Retorna:
    return rSucesso;
}


/* Functions definitions:
-------------------------
*/

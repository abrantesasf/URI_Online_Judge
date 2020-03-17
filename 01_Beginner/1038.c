/*
================================================================================
Name        : 1038.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1038: Snack
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1038
Summary     : Using the following table, write a program that reads a code and
            : the amount of an item. After, print the value to pay. This is a
            : very simple program with the only intention of practice of
            : selection commands.

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
    int x = 0;
    int y = 0;

    // Obtém variáveis:
    scanf("%d %d", &x, &y);

    // Imprime resultado:
    switch (x)
    {
        case 1:
            printf("Total: R$ %.2f\n", (y * 4.00f));
            break;
        case 2:
            printf("Total: R$ %.2f\n", (y * 4.50f));
            break;
        case 3:
            printf("Total: R$ %.2f\n", (y * 5.00f));
            break;
        case 4:
            printf("Total: R$ %.2f\n", (y * 2.00f));
            break;
        case 5:
            printf("Total: R$ %.2f\n", (y * 1.50f));
            break;
    }

    // Retorna
    return rSucesso;
}


/* Functions definitions:
-------------------------
*/

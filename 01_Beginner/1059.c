/*
================================================================================
Name        : 1059.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1059: Even
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1059
Summary     : Write a program that prints all even numbers between 1 and 100,
            : including them if it is the case.

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
int main(void)
{
    // Imprime
    for (int i = 2; i <= 100; i = i + 2)
    {
        printf("%d\n", i);
    }

    // Retorna:
    return rSucesso;
}


/* Functions definitions:
-------------------------
*/

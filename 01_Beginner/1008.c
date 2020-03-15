/*
================================================================================
Name        : 1008.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1008: Salary
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1008
Summary     : Write a program that reads an employee's number, his/her worked
            : hours number in a month and the amount he received per hour. Print
            : the employee's number and salary that he/she will receive at end of
            : the month, with two decimal places.

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
    int    id      = 0;
    int    horas   = 0;
    double salario = 0.0;
    double total   = 0.0;

    // Lê variáveis:
    scanf("%d", &id);
    scanf("%d", &horas);
    scanf("%lf", &salario);

    // Calcula o total:
    total = (double) horas * salario;

    // Imprime:
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", id, total);

    // Retorna:
    return rSucesso;
}


/* Functions definitions:
-------------------------
*/

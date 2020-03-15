/*
================================================================================
Name        : 1009.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1009: Salary with Bonus
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1009
Summary     : Make a program that reads a seller's name, his/her fixed salary 
            : and the sale's total made by himself/herself in the month (in 
            : money). Considering that this seller receives 15% over all 
            : products sold, write the final salary (total) of this seller at 
            : the end of the month, with two decimal places.

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
    char   nome[50];
    double salario  = 0.0;
    double vendas   = 0.0;
    double comissao = 0.15;
    
    // Lê variáveis:
    scanf("%s", nome);
    scanf("%lf", &salario);
    scanf("%lf", &vendas);

    // Imprime:
    printf("TOTAL = R$ %.2lf\n", (salario + (vendas * comissao)));

    // Retorna:
    return 0;
}


/* Functions definitions:
-------------------------
*/

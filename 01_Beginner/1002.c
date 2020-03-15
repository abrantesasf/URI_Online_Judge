/*
================================================================================
Name        : 1002.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1002: Area of a Circle
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1002
Summary     : The formula to calculate the area of a circumference is defined as
            : A = pi . R^2. Considering to this problem that pi = 3.14159:
            : Calculate the area using the formula given in the problem
            : description.

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
const double PI = 3.14159;


/* Functions prototypes (declarations):
---------------------------------------
*/


/* Main function:
-----------------
*/
int main(void) {
    // Declara variáveis
    double r = 0.0;
    double a = 0.0;

    // Lê variáveis
    scanf("%lf", &r);

    // Calcula a área:
    a = PI * (r * r);

    // Imprime resultado:
    printf("A=%.4lf\n", a);

    // Retorna
    return 0;
}


/* Functions definitions:
-------------------------
*/

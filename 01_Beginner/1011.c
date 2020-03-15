/*
================================================================================
Name        : 1011.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1011: Sphere
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1011
Summary     : Make a program that calculates and shows the volume of a sphere
            : being provided the value of its radius (R). The formula to 
            : calculate the volume is: (4/3) * pi * R^3. Consider (assign) for
            : pi the value 3.14159. Tip: Use (4/3.0) or (4.0/3) in your formula,
            : because some languages (including C++) assume that the division's
            : result between two integers is another integer.

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
    // Declara variáveis:
    double r = 0.0;

    // Obtém dados:
    scanf("%lf", &r);

    // Imprime o resultado:
    printf("VOLUME = %.3lf\n", (4.0/3.0 * PI * r * r * r));

    // Retorna:
    return 0;
}


/* Functions definitions:
-------------------------
*/

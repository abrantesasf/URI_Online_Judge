/*
================================================================================
Name        : 1043.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1043: Triangle
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1043
Summary     : Read three point floating values (A, B and C) and verify if is
            : possible to make a triangle with them. If it is possible, 
            : calculate the perimeter of the triangle and print the message:
            : Perimetro = XX.X
            : If it is not possible, calculate the area of the trapezium which
            : basis A and B and C as height, and print the message:
            : Area = XX.X

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
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;


    // Obtém dados:
    scanf("%lf %lf %lf", &a, &b, &c);

    // Avalia:
    if ( (a + b) > c &&
         (a + c) > b &&
         (b + c) > a    )
    {
        printf("Perimetro = %.1lf\n", (a+b+c));
    }
    else
    {
        printf("Area = %.1lf\n", (a+b)/2.0 * c);
    }
    
    // Retorna:
    return rSucesso;
}


/* Functions definitions:
-------------------------
*/

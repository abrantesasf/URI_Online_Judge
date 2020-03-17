/*
================================================================================
Name        : 1012.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1012: Area
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1012
Summary     : Make a program that reads three floating point values: A, B and C.
            : Then, calculate and show:
            : a) the area of the rectangled triangle that has base A and height C.
            : b) the area of the radius's circle C. (pi = 3.14159)
            : c) the area of the trapezium which has A and B by base, and C by height.
            : d) the area of ​​the square that has side B.
            : e) the area of the rectangle that has sides A and B. 

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
const double PI = 3.14159;


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

    // Obtém valores:
    scanf("%lf %lf %lf", &a, &b, &c);

    // Área do triângulo:
    printf("TRIANGULO: %.3lf\n", ((a * c)/2.0));

    // Área do círculo:
    printf("CIRCULO: %.3lf\n", (PI * c * c));

    // Área do trapézio:
    printf("TRAPEZIO: %.3lf\n", ((a + b)/2.0) * c);

    // Área do quadrado:
    printf("QUADRADO: %.3lf\n", (b * b));

    // Área do retângulo:
    printf("RETANGULO: %.3lf\n", (a * b));
    
    // Retorna:
    return rSucesso;
}


/* Functions definitions:
-------------------------
*/

/*
================================================================================
Name        : 1045.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1045: Triangle Types
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1045
Summary     : Read 3 double numbers (A, B and C) representing the sides of a
            : triangle and arrange them in decreasing order, so that the side
            : A is the biggest of the three sides. Next, determine the type of
            : triangle that they can make.

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
#include <math.h>


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
    double n1 = 0.0;
    double n2 = 0.0;
    double n3 = 0.0;

    // Obtém dados:
    scanf("%lf %lf %lf", &a, &b, &c);

    // Forma triângulo?
    if (!((a + b) > c &&
          (a + c) > b &&
          (b + c) > a))
    {
        printf("NAO FORMA TRIANGULO\n");
        return rSucesso;
    }
        
    // Forma triângulo, então vamos ordenar:
    if ( a >= b )
    {
        n3 = a;
        n2 = b;
        n1 = c;
        if ( c >= a )
        {
            n3 = c;
            n2 = a;
            n1 = b;
        }
        else if ( c >= b )
        {
            n2 = c;
            n1 = b;
        }
    }
    else
    {
        n3 = b;
        n2 = a;
        n1 = c;
        if ( c >= b )
        {
            n3 = c;
            n2 = b;
            n1 = a;
        }
        else if ( c >= a )
        {
            n2 = c;
            n1 = a;
        }
    }

    // Tipo de triângulo, quanto ao ângulo:
    if ( pow(n3, 2) == pow(n2, 2) + pow(n1, 2) )
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if ( pow(n3, 2) > pow(n2, 2) + pow(n1, 2) )
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else
    {
        printf("TRIANGULO ACUTANGULO\n");
    }

    // Tipo de triângulo, quanto ao lado:
    if ( n3 == n2 &&
         n2 == n1   )
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if ( (n3 == n2 && n2 != n1) ||
              (n3 == n1 && n1 != n2) ||
              (n1 == n2 && n2 != n3) )
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    //else
    //{
    //    printf("TRIANGULO ESCALENO\n");
    //}
    
    // Retorna:
    return rSucesso;
}


/* Functions definitions:
-------------------------
*/

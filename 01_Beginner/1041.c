/*
================================================================================
Name        : 1041.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1041: Coordinates of a Point
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1041
Summary     : Write an algorithm that reads two floating values (x and y), which
            : should represent the coordinates of a point in a plane. Next,
            : determine which quadrant the point belongs, or if you are over one
            : of the Cartesian axes or the origin (x = y = 0).

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
    double x = 0.0;
    double y = 0.0;

    // Obtém dados:
    scanf("%lf %lf", &x, &y);

    // Localiza ponto:
    if ( x == 0.0f && y == 0.0f )
    {
        printf("Origem\n");
    }
    else if ( x == 0.0f && y != 0.0f )
    {
        printf("Eixo Y\n");
    }
    else if ( x != 0.0f && y == 0.0f )
    {
        printf("Eixo X\n");
    }
    else if ( x > 0 )
    {
        if ( y > 0 )
        {
            printf("Q1\n");
        }
        else
        {
            printf("Q4\n");
        }
    }
    else {
        if ( y > 0 )
        {
            printf("Q2\n");
        }
        else
        {
            printf("Q3\n");
        }
    }


    // Retorna:
    return rSucesso;
}


/* Functions definitions:
-------------------------
*/

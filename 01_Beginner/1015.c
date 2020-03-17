/*
================================================================================
Name        : 1015.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1015: Distance Between Two Points
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1015
Summary     : Read the four values corresponding to the x and y axes of two 
            : points in the plane, p1 (x1, y1) and p2 (x2, y2) and calculate 
            : the distance between them, showing four decimal places after
            : the comma. The input file contains two lines of data. The first
            : one contains two double values: x1 y1 and the second one also
            : contains two double values with one digit after the decimal
            : point: x2 y2.

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
    double x1 = 0.0;
    double y1 = 0.0;
    double x2 = 0.0;
    double y2 = 0.0;
    double d  = 0.0;

    // Obtém valores:
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    // Calcula a distância:
    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Imprime a distãncia:
    printf("%.4lf\n", d);

    // Retorna:
    return rSucesso;
}


/* Functions definitions:
-------------------------
*/

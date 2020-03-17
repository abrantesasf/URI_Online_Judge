/*
================================================================================
Name        : 1036.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1036: Bhaskara's Formula
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1036
Summary     : Read 3 floating-point numbers. After, print the roots of
            : bhaskara’s formula. If it's impossible to calculate the roots
            : because a division by zero or a square root of a negative number,
            : presents the message “Impossivel calcular”. Read 3 floating-point
            : numbers A, B and C.

C Standard  : C99
Version     : 
Copyright   : 
More Info   : 
================================================================================
*/


/* Headers files includes:
--------------------------
   #include <header_file.h>
   Important headers: stdio.h, stdlib.h, ctype.h, math.h, string.h, time.h
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
double calcula_delta (double a, double b, double c);

void impossivel(void);


/* Main function:
-----------------
*/
int main(void) {
    // Declara variáveis
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    double delta = 0.0;
    double r1 = 0.0;
    double r2 = 0.0;

    // Pega valores:
    scanf("%lf %lf %lf", &a, &b, &c);

    // Checa se a = 0:
    if (a == 0.0f)
    {
        impossivel();
        return rSucesso;
    }

    // Calcula e checa delta:
    delta = calcula_delta(a, b, c);
    if (delta < 0)
    {
        impossivel();
        return rSucesso;
    }

    // Se chegou até aqui, calcula:
    r1 = (-b + sqrt(delta))/(2*a);
    r2 = (-b - sqrt(delta))/(2*a);

    // Imprime:
    printf("R1 = %.5lf\n", r1);
    printf("R2 = %.5lf\n", r2);

    // Retorna
    return rSucesso;
}


/* Functions definitions:
-------------------------
*/
double calcula_delta (double a, double b, double c)
{
    return (pow(b, 2) - 4 * a * c);
}

void impossivel(void)
{
    printf("Impossivel calcular\n");
}

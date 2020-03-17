/*
================================================================================
Name        : 1017.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1017: Fuel Spent
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1017
Summary     : Little John wants to calculate and show the amount of spent fuel
            : liters on a trip, using a car that does 12 Km/L. For this, he
            : would like you to help him through a simple program. To perform 
            : the calculation, you have to read spent time (in hours) and the
            : same average speed (km/h). In this way, you can get distance and
            : then, calculate how many liters would be needed. Show the value
            : with three decimal places after the point. The input file contains
            : two integers. The first one is the spent time in the trip (in
            : hours). The second one is the average speed during the trip
            : (in Km/h).

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
const double CONSUMO = 12.0;


/* Functions prototypes (declarations):
---------------------------------------
*/


/* Main function:
-----------------
*/
int main(void) {
    // Declara variáveis:
    int tempo      = 0;
    int velocidade = 0;
    int distancia  = 0;
    double litros  = 0.0;

    // Obtém valores:
    scanf("%d", &tempo);
    scanf("%d", &velocidade);

    // Cálculos:
    distancia = tempo * velocidade;
    litros = (double) distancia / CONSUMO;

    // Imprime os litros:
    printf("%.3lf\n", litros);

    // Retorna:
    return rSucesso;
}


/* Functions definitions:
-------------------------
*/

/*
================================================================================
Name        : 1016.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1016: Distance
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1016
Summary     : Two cars (X and Y) leave in the same direction. The car X leaves
            : with a constant speed of 60 km/h and the car Y leaves with a
            : constant speed of 90 km / h. In one hour (60 minutes) the car Y 
            : can get a distance of 30 kilometers from the X car, in other words,
            : it can get away one kilometer for each 2 minutes. Read the distance
            : (in km) and calculate how long it takes (in minutes) for the car Y
            : to take this distance in relation to the other car.


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
    int km = 0;

    // Obtém valores:
    scanf("%d", &km);

    // Imprime a distãncia:
    printf("%d minutos\n", (km * 60)/30);

    // Retorna:
    return rSucesso;
}


/* Functions definitions:
-------------------------
*/

/*
================================================================================
Name        : 1046.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1046: Game Time
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1046
Summary     : Read the start time and end time of a game, in hours. Then
            : calculate the duration of the game, knowing that the game can
            : begin in a day and finish in another day, with a maximum duration
            : of 24 hours. The message must be printed in portuguese “O JOGO
            : DUROU X HORA(S)” that means “THE GAME LASTED X HOUR(S)”.
            : Input: Two integer numbers representing the start and end time
            : of a game.

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
    // Declara variáveis
    int i = 0;
    int f = 0;
    int h = 0;

    // Pega dados:
    scanf("%d %d", &i, &f);

    // Faz cálculo
    if ( i == f )
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else if ( i < f )
    {
        printf("O JOGO DUROU %d HORA(S)\n", f - i);
    }
    else
    {
        printf("O JOGO DUROU %d HORA(S)\n", 24 - i + f);
    }
    
    return rSucesso;
}


/* Functions definitions:
-------------------------
*/

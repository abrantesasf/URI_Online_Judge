/*
================================================================================
Name        : 1047.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1047: Game Time with Minutes
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1047
Summary     : Read the start time and end time of a game, in hours and minutes
            : (initial hour, initial minute, final hour, final minute). Then
            : print the duration of the game, knowing that the game can begin in
            : a day and finish in another day. Obs.: With a maximum game time of
            : 24 hours and the minimum game time of 1 minute. Input: Four integer
            : numbers representing the start and end time of the game.

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
    int hi = 0;
    int mi = 0;
    int hf = 0;
    int mf = 0;
    int mini  = 0;
    int minf  = 0;
    int delta = 0;
    int h = 0;
    int m = 0;

    // Pega dados:
    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

    // Faz cálculo dos minutos
    mini = ( hi * 60 + mi );
    minf = ( hf * 60 + mf );
    if ( mini == minf )
    {
        delta = 24 * 60;
    }
    else if ( mini < minf )
    {
        delta = minf - mini;
    }
    else {
        delta = (24 * 60) - mini + minf;
    }

    // Resultado
    h = delta / 60;
    m = delta % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
    
    // Retorna:
    return rSucesso;
}


/* Functions definitions:
-------------------------
*/

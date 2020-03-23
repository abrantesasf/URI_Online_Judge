/*
================================================================================
Name        : 1061.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1061: Event Time
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1061
Summary     : 

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


/* Preprocessor macros/definitions:
-----------------------------------
   #define <name> <value>
   #define <name> (arg1, arg2, arg3, ...) (<commands>)

   Conditional preprocessor macros: ("gcc -D<name>=<value>" sets a preprocessor define)
   #if, #ifdel, #ifndef, #else, #elif #endif

   Other preprocessor macros:
   #pragma, #error, #warning, #undef
*/
#define rSucesso 0


/* Global variables declarations:
---------------------------------
   <type> <name> = <value>;
   <type> <name>, <name>, <name> = <value>, <name> = <value>;
   <type> <name>;
   <name> = <value>;

   char, int, float
   const

     char -> 'a'
   string -> "abrantes" (armazena como array de char; null-terminated: '\0')
   special characters -> \ ' " \b \t \r \n \ooo \xhh
*/


/* Functions prototypes (declarations):
---------------------------------------
   <return_type> <function_name> (<type> arg1, <type> arg2, ...) {}
   <return_type> <function_name> (void) {}
*/


/* Main function:
-----------------
   <return_type> main (void) {}
   <return_type> main (int argc, char **argv) {}
*/
int main(void)
{
    // Declara variáveis
    char lixo[10];
    int idia = 0;
    int ihora = 0;
    int imin = 0;
    int iseg = 0;
    int fdia = 0;
    int fhora = 0;
    int fmin = 0;
    int fseg = 0;
    int s1 = 0;
    int s2 = 0;
    int deltas = 0;
    int dias = 0;
    int horas = 0;
    int minutos = 0;

    // Pega as informações
    scanf("%s %d", lixo, &idia);
    scanf("%d %s %d %s %d", &ihora, lixo, &imin, lixo, &iseg);
    scanf("%s %d", lixo, &fdia);
    scanf("%d %s %d %s %d", &fhora, lixo, &fmin, lixo, &fseg);

    // Tempo decorrido desde 0:0:0 do dia 1 até o início do evento:
    s1 = (idia - 1) * (24 * 60 * 60) + (ihora * 60 * 60) + (imin * 60) + (iseg);

    // Tempo decorrido desde 0:0:0 do dia 1 até o final do evento:
    s2 = (fdia - 1) * (24 * 60 * 60) + (fhora * 60 * 60) + (fmin * 60) + (fseg);
    
    // Tempo em segundos do evento:
    deltas = s2 - s1;

    // Calcula quantos dias:
    dias = deltas / (24 * 60 * 60);
    deltas = deltas % (24 * 60 * 60);

    // Calculas quantas horas:
    horas = deltas / (60 * 60);
    deltas = deltas % (60 * 60);

    // Calcula quantos minutos e segundos:
    minutos = deltas / 60;
    deltas = deltas % 60;

    // Resultado:
    printf("%d dia(s)\n", dias);
    printf("%d hora(s)\n", horas);
    printf("%d minuto(s)\n", minutos);
    printf("%d segundo(s)\n", deltas);
    
    // Retorna:
    return rSucesso;
}


/* Functions definitions:
-------------------------
*/

/*
================================================================================
Name        : 1065.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1065: Even Between five Numbers
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1065
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
    int x     = 0;
    int pares = 0;

    // Pega variáveis:
    for (int i = 1; i <= 5; i++)
    {
        scanf("%d", &x);
        if (x % 2 == 0)
        {
            pares++;
        }
    }

    // Imprime:
    printf("%d valores pares\n", pares);
    
    // Retorna:
    return rSucesso;
}


/* Functions definitions:
-------------------------
*/

/*
================================================================================
Name        : 1049.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1049: Animal
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1049
Summary     : In this problem, your job is to read three Portuguese words. These
            : words define an animal according to the table below, from left to
            : right. After, print the chosen animal defined by these three
            : words. 

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
#include <string.h>


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
    char p1[20];
    char p2[20];
    char p3[20];

    // Obtém as palavras:
    scanf("%s", p1);
    scanf("%s", p2);
    scanf("%s", p3);

    // Processa e exibe:
    if ( strcmp(p1, "vertebrado") == 0 )
    {
        if ( strcmp(p2, "ave") == 0 )
        {
            if ( strcmp(p3, "carnivoro") == 0 )
            {
                printf("aguia\n");
            }
            // é onívoro
            else
            {
                printf("pomba\n");
            }
            
        }
        // é mamífero
        else
        {
            if ( strcmp(p3, "onivoro") == 0 )
            {
                printf("homem\n");
            }
            // é herbívoro
            else
            {
                printf("vaca\n");
            }
        }
    }
    // é invertebrado:
    else
    {
        if ( strcmp(p2, "inseto") == 0 )
        {
            if ( strcmp(p3, "hematofago") == 0 )
            {
                printf("pulga\n");
            }
            // é herbívoro
            else
            {
                printf("lagarta\n");
            }
        }
        // é anelídeo
        else
        {
            if ( strcmp(p3, "hematofago") == 0 )
            {
                printf("sanguessuga\n");
            }
            // é onívoro
            else
            {
                printf("minhoca\n");
            }
        }
    }
    
    
    // Retorna
    return rSucesso;
}


/* Functions definitions:
-------------------------
*/

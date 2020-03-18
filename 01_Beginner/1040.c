/*
================================================================================
Name        : 1040.c

Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
            : https://www.abrantes.pro.br

Description : URI Online Judge: Problems & Contests
            : https://www.urionlinejudge.com.br/
Category    : Beginner (1)
Problem     : 1040: Average 3
URL         : https://www.urionlinejudge.com.br/judge/en/problems/view/1040
Summary     : Read four numbers (N1, N2, N3, N4), which one with 1 digit after
            : the decimal point, corresponding to 4 scores obtained by a student.
            : Calculate the average with weights 2, 3, 4 e 1 respectively, for
            : these 4 scores and print the message "Media: " (Average), followed
            : by the calculated result. If the average was 7.0 or more, print the
            : message "Aluno aprovado." (Approved Student). If the average was
            : less than 5.0, print the message: "Aluno reprovado." (Reproved
            : Student). If the average was between 5.0 and 6.9, including these,
            : the program must print the message "Aluno em exame." (In exam
            : student). In case of exam, read one more score. Print the message
            : "Nota do exame: " (Exam score) followed by the typed score.
            : Recalculate the average (sum the exam score with the previous
            : calculated average and divide by 2) and print the message “Aluno
            : aprovado.” (Approved student) in case of average 5.0 or more)
            : or "Aluno reprovado." (Reproved student) in case of average 4.9
            : or less. For these 2 cases (approved or reproved after the exam)
            : print the message "Media final: " (Final average) followed by
            : the final average for this student in the last line. The input
            : contains four floating point numbers that represent the
            : students' grades.

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
const int p1 = 2;
const int p2 = 3;
const int p3 = 4;
const int p4 = 1;


/* Functions prototypes (declarations):
---------------------------------------
*/


/* Main function:
-----------------
*/
int main(void) {
    // Declara variáveis:
    double n1 = 0.0;
    double n2 = 0.0;
    double n3 = 0.0;
    double n4 = 0.0;
    double mp = 0.0;
    double n5 = 0.0;
    double mf = 0.0;

    // Obtém dados:
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    // Média parcial:
    mp = (n1 * p1 + n2 * p2 + n3 * p3 + n4 * p4)/(p1 + p2 + p3 + p4);
    printf("Media: %.1lf\n", mp);

    // Aluno foi aprovado/reprovado direto, ou está em exame?
    if ( mp >= 7.0 )
    {
        printf("Aluno aprovado.\n");
        return rSucesso;
    }
    else if ( mp < 5.0 )
    {
        printf("Aluno reprovado.\n");
        return rSucesso;
    }
    else
    {
        printf("Aluno em exame.\n");
    }

    // Aluno de prova final, pega última nota e calcula
    // média final:
    scanf("%lf", &n5);
    printf("Nota do exame: %.1lf\n", n5);
    
    mf = (mp + n5)/2.0;

    if ( mf >= 5.0 )
    {
        printf("Aluno aprovado.\n");
    }
    else
    {
        printf("Aluno reprovado.\n");
    }

    printf("Media final: %.1lf\n", mf);
    
    
    // Retorna:
    return rSucesso;
}


/* Functions definitions:
-------------------------
*/

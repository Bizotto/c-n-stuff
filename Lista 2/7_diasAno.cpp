// 7. Entrar com o dia e o mês de uma data e informar quantos dias se passaram desde o início do
// ano. Esqueça a questão dos anos bissextos e considere sempre que um mês possui 30 dias.

// bibliotecas
#include <conio.h>
#include <stdio.h>
#include <iostream>

// Variaveis
int Dias;
int Mes;
char pimba;

int main(void)
{
    do
    {
        printf("---------------------------------------------");
        printf("\nEm que dia nos estamos?\n");
        printf("---------------------------------------------\n");
        scanf("%i", &Dias);

        printf("---------------------------------------------");
        printf("\nEm que Mes nos estamos?\n");
        printf("---------------------------------------------\n");
        scanf("%i", &Mes);

        

        pimba = getche();
        pimba = toupper(pimba);

    } while (pimba != 'N');
}
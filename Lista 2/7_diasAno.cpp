// 7. Entrar com o dia e o mês de uma data e informar quantos dias se passaram desde o início do
// ano. Esqueça a questão dos anos bissextos e considere sempre que um mês possui 30 dias.

/*
1 Mes = 30 
mes 9 = 9x30 = 270 




*/
// bibliotecas
#include <conio.h>
#include <stdio.h>
#include <iostream>

// Variaveis
int Dias;
int MesDias;
int Mes;
int DiasFim;
char pimba;

int main(void)
{
    do
    {
        printf("---------------------------------------------");
        printf("\nEm que Mes nos estamos?\n");
        printf("---------------------------------------------\n");
        scanf("%i", &Mes);

        printf("---------------------------------------------");
        printf("\nEm que dia nos estamos?\n");
        printf("---------------------------------------------\n");
        scanf("%i", &Dias);

        MesDias = Mes * 30;
        DiasFim = MesDias + Dias;

        printf("---------------------------------------------");
        printf("\nJa se passaram %i dias do do ano.", DiasFim);
        printf("\n---------------------------------------------\n");

        printf("---------------------------------------------");
        printf("\nDeseja fazer novamente? <S> ou <N>\n");
        printf("---------------------------------------------\n");
        pimba = getche();
        pimba = toupper(pimba);

    } while (pimba != 'N');
}
// 19. A granja Frangotech possui um controle automatizado de cada frango da sua produção. No
// pé direito do frango há um anel com um chip de identificação; no pé esquerdo são dois anéis
// para indicar o tipo de alimento que ele deve consumir. Sabendo que o anel com chip custa
// R$4,00 e o anel de alimento custa R$3,50, faça um algoritmo para calcular o gasto total da
// granja para marcar todos os seus frangos

// biblioteca
#include <conio.h>
#include <stdio.h>
#include <iostream>

// variaveis

float NFrangos, ChipEsq, ChipDir, GastoTotal; // Numero de galinhas
char pimba;

int main(void)
{
    do
    {
        system("cls");
        printf("\n--------------------------------------------------\n");
        printf("Numero de Frangos no criadouro:\n");
        scanf("%f", &NFrangos);
        printf("\n--------------------------------------------------\n");

        ChipDir = NFrangos * 4.00;

        ChipEsq = NFrangos * (3.50 + 3.50);

        GastoTotal = ChipEsq + ChipDir;

        printf("O numero De frangos (%.0f), totalizando um valor de R$%.2f ", NFrangos, GastoTotal);
        printf("\n--------------------------------------------------\n");

        printf("\nDeseja repetir a operacao? <S> ou <N>");
        pimba = getche();
        pimba = toupper(pimba);

    } while (pimba != 'N');
    system("cls");

}

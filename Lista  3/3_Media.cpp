// 3 – Algoritmo Media Valor
// Dado uma série de 05 valores inteiros de temperatura, leia este 5 valores e calcule a média
// destes, e em seguida apresente esta média e caso esta seja maior e igual que 30 graus
// escreva “temperatura acima da média, calor”, caso esta média seja inferior ou igual a 15 graus
// “temperatura a baixo da média, frio “ e se esta estiver no intervalo entre estes dois valores,
// “temperatura mediana, temperatura agradável”

// bibliotecas

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>

// variaveis
int VetorTempe[5], media;
char op;

int main(void)
{
    do
    {

        system("cls");
        for (int i = 0; i < 5; i++)
        {
            printf("Digite a Temperatura desejada %d\n", i + 1);
            scanf("%d", &VetorTempe[i]);
            media = media + VetorTempe[i];
        }

        media = media / 5;

        if (media >= 30)
        {
            printf("Temperatura acima da media, calor.\n");
        }
        if (media <= 29)
        {
            printf("Temperatura abaixo da media, frio.\n ");
        }

        printf("\nMedia da temperatura usada: %.1d Graus", media);

        printf("\n \nDeseja fazer a operacao denovo? <S> ou <N>");
        op = getche();
        op = toupper(op);

    } while (op != 'N');
}
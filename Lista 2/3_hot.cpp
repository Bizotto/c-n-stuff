// 3. A padaria Hotpão vende uma certa quantidade de pães franceses e uma quantidade de
// broas a cada dia. Cada pãozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono
// quer saber quanto arrecadou com a venda dos pães e broas (juntos), e quanto deve guardar
// numa conta de poupança (10% do total arrecadado). Você foi contratado para fazer os cálculos
// para o dono. Com base nestes fatos, faça um algoritmo para ler as quantidades de pães e de
// broas, e depois calcular os dados solicitados.

// bibliotecas
#include <conio.h>
#include <stdio.h>
#include <iostream>

// variaveis
float Broa, ValorFinal, Pao; /*PrecoPao, PrecoBroa*/
float quantidadeBroa, quantidadePao;
char pimba;

int main(void)
{
    do
    {
        system("cls");
        printf("Quantos paes forao comprados durante o dia?\n");
        scanf("%f", &Pao);
        printf("Quantas broas forao compradas durante o dia? \n");
        scanf("%f", &Broa);

        quantidadeBroa = Broa * 1.50;
        quantidadePao = Pao * 0.12;
        ValorFinal = quantidadePao + quantidadeBroa;

        printf("Foram comprados %.0f de Paes e %.0f de Broas, dando um total de R$%.2f (R$%.2f em Paes e R$%.2f em Broas)\n", Pao, Broa, ValorFinal, quantidadePao, quantidadeBroa);
        printf("\n Deseja fazer a aperacao novamente? <S> <N>\n");
        pimba = getche();
        pimba = toupper(pimba);
        
    } while (pimba != 'N');
    system("cls");
    
}
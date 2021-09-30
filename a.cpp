#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

//Declarar variáveis
int Vetor[13];
int X;
int Y;
int i;
int soma;

using namespace std;

//Início
int main()
{

    //Permitir acentuação
    setlocale(LC_ALL, "portuguese");

    //Limpa tela;
    system("cls");

    printf("\n");
    printf("\n Digite 13 valores : \n");
    for (int i = 0; i < 13; i++)
    {

        scanf("%d", &Vetor[i]);
    }

    printf("\n");
    printf("\n Digite valores de 0-12 correspondentes a duas posições no vetor, para serem X e Y.");
    printf("\n");

    do
    {
        printf("Digite um valor (0-12) para X: ");
        scanf("%d", &X);
        if ((X < 0) || (X > 12))
        {
            system("cls");
            printf("\nDigito invalido. ");
            printf("\nDigite um numero entre 0 e 12. ");
        }
    } while ((X < 0) || (X > 12));

    do
    {
        printf("Digite um valor (0-12) para Y: ");
        scanf("%d", &Y);
        if ((Y < 0) || (Y > 12))
        {
            system("cls");
            printf("\nDigito invalido. ");
            printf("\nDigite um numero entre 0 e 12. ");
        }
    } while ((Y < 0) || (Y > 12));

    printf("Vetor X [%i] = %i", X, Vetor[X]);
    printf("\n");
    printf("Vetor Y [%i] = %i", Y, Vetor[Y]);

    printf("\n");
    printf("\n Somar valores encontrados nas respectivas posições X e Y.");
    soma = Vetor[X] + Vetor[Y];
    printf("\n \n \n");
    printf("\n A soma dos valores encontrados nas posições X e Y resultou em: %d", soma);
    printf("\n");
}

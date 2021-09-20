// 1 - Construa um programa em C/C++ que tenha as seguintes opções de Menu:
// 1.1 - Leia um vetor de 10 posições com valores aleatórios 0-100 e na
// sequência selecione aleatoriamente três posições/índices deste vetor e
// apresente os seus valores e a multiplicação destes.
// 1.2 - Leia dois vetores de 5 posições com valores inteiros cada e gere um
// terceiro com os resultados da soma dos valores sendo a lógica: soma o 1ª
// elemento do 1º vetor com o 5º elemento do 2º vetor, 2ª elemento do 1º vetor
// com o 4º elemento do 2º vetor, e assim sucessivamente.
// 1.3 - Construa um vetor de 13 posições com valores caracteres aleatórios e na
// sequência pedir para o usuário digitar um caractere e localizar onde este está
// no vetor e quantas vezes aparece.

// Bibliotecas
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <time.h>

// variaveis
int op;

// op 1
int vetor1, vetor2, vetor3;
int vetor[10];
int resultado1;
// op 2
int vet1, vet2;
int vetresult;
//
int vet13[13];
int posicao;

int main(void)
{
    srand(time(0));
    system("cls");
Menu:
    printf("\n==============================================");
    printf("\nMenu de opcoes:");
    printf("\nOP 1= 10 posi aleatoria.");
    printf("\nOP 2= 5 posi mult diferente.");
    printf("\nOP 3= Vetor char. ");
    printf("\nOP 4= Sair do sistema.");
    printf("\n==============================================\n");
    scanf("%i", &op);
    if (op == 1)
    {
        for (int i = 0; i < 10; i++)
        {
            vetor[i] = rand() % 100;
            printf("\nVetor[%i] = %i", i, vetor[i]);
        }

        printf("\nselecione o primeiro Indice: ");
        scanf("%i", &vetor1);
        printf("\nselecione o segundo Indice: ");
        scanf("%i", &vetor2);
        printf("\nselecione o terceiro Indice: ");
        scanf("%i", &vetor3);

        resultado1 = vetor1[vetor] * vetor2[vetor] * vetor3[vetor];
        printf("\nCalculando.....");
        printf("\nMultiplicacao resultante em %i", resultado1);
        printf("\ntecle qualquer coisa para ir ao menu");
        getche();
        goto Menu;
    }
    if (op == 2)
    {
        
    }
}
// Bibliotecas 
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <time.h>

//   variaveis

// 1
int VetorA[10], ind1, ind2, ind3, MultpValores;

// 2
int vetor1[5], vetor2[5], vetor3soma[5];

// 3
char VetorChar[13], caracter;
int IndAparece;
int Qtasvezes;

char op;

int main(void)
{
    srand(time(0));
    system("cls");
Menu:
    printf("\nMenu de Opcoes de Manipulacao de Vetores");
    printf("\n1 - Vetor 10 posicoes aleatorias 0-100");
    printf("\n2 - Vetores 5 posicoeses - Soma intercalada");
    printf("\n3 - Vetores 13 posicoes de caracteres");
    printf("\n4 - Sair do sistema\n");
    scanf("%s", &op);

    if (op == '1')
    {
        printf("\nGere aleatoriamente 10 valores inteiros aleatorios.");
        for (int i = 0; i < 10; i++)
        {
            VetorA[i] = rand() % 100;
            printf("\n%i", VetorA[i]);
        }
        printf("\ndigite o primeiro indice a buscar conteudo: ");
        scanf("%i", &ind1);
        printf("\ndigite o segundo indice a buscar conteudo: ");
        scanf("%i", &ind2);
        printf("\ndigite o terceiro indice a buscar conteudo: ");
        scanf("%i", &ind3);

        MultpValores = VetorA[ind1] * VetorA[ind2] * VetorA[ind3];

        printf("==================================================");
        printf("\nVetorA[%i]=%i", ind1, VetorA[ind1]);
        printf("\nVetorA[%i]=%i", ind2, VetorA[ind2]);
        printf("\nVetorA[%i]=%i", ind3, VetorA[ind3]);
        printf("\n==================================================\n");

        printf("\nO valor da multiplicacao dos 3: %i\n", MultpValores);
        printf("\nTecle qualquer coisa para ir ao menu");
        getche();
        goto Menu;
    }

    if (op == '2')
    {
        system("cls");
        printf("\nValores do Vetor");
        for (int i = 0; i < 5; i++)
        {
            printf("\nDigite o valor do vetor1: ");
            scanf("%i", &vetor1[i]);
        }

        printf("\nValores do Vetor");
        for (int i = 0; i < 5; i++)
        {
            printf("\nDigite o valor do vetor2: ");
            scanf("%i", &vetor2[i]);
        }

        for (int i = 0; i < 5; i++)
        {
            vetor3soma[i] = vetor1[i] + vetor2[i];
        }

        printf("\nVetor 1\n");
        for (int i = 0; i < 5; i++)
        {
            printf("\nVetor 1: %i", vetor1[i]);
        }

        printf("\nVetor 2\n");
        for (int i = 0; i < 5; i++)
        {
            printf("\nVetor 2: %i", vetor2[i]);
        }

        printf("\nVetor da soma dos dois:\n");
        for (int i = 0; i < 5; i++)
        {
            printf("\nVetor da soma dos dois: %i", vetor3soma[i]);
        }
        
        printf("\nTecle para voltar ao Menu!!");
        getche();
        goto Menu;
        system("cls");
    }

    if (op == '3')
    {
        system("cls");
        printf("\nPrenechendo aleatoriamente 13 caracteres");
        for (int i = 0; i < 13; i++)
        {
            VetorChar[i] = rand () %255;
            printf("\n%c", VetorChar[i]);
        }
        printf("\nDigite um caracter qualquer: \n");
        fflush(stdin);
        scanf("%c", &caracter);

        Qtasvezes = 0;
        for (int i = 0; i < 13; i++)
        {
            if (caracter == VetorChar[i])
            {
                Qtasvezes = Qtasvezes+1;
                printf("%c", VetorChar[i]);
            }
        
        }
        printf("\nTotal de vezes = %i", Qtasvezes);
        printf("\nTecle para ir ao Menu");
        getche(); goto Menu;
    
    }
    if (op == '4')
    {
        printf("\nSaindo do sistema.............");
        printf("\nTecle Enter\n");
        getche();
    }
    
}
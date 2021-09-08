/*1 - Construa um programa em C/C++ que tenha as seguintes opÃ§Ãµes de Menu:
1.1 - Leia um vetor de 10 posiÃ§Ãµes com valores aleatÃ³rios 0-100 e na
sequÃªncia selecione aleatoriamente trÃªs posiÃ§Ãµes/Ã­ndices deste vetor e
apresente os seus valores e a multiplicaÃ§Ã£o destes.
1.2 - Leia dois vetores de 5 posiÃ§Ãµes com valores inteiros cada e gere um
terceiro com os resultados da soma dos valores sendo a lÃ³gica: soma o 1Âª
elemento do 1Âº vetor com o 5Âº elemento do 2Âº vetor, 2Âª elemento do 1Âº vetor
com o 4Âº elemento do 2Âº vetor, e assim sucessivamente.
1.3 - Construa um vetor de 13 posiÃ§Ãµes com valores caracteres aleatÃ³rios e na
sequÃªncia pedir para o usuÃ¡rio digitar um caractere e localizar onde este estÃ¡
no vetor e quantas vezes aparece.
*/

/* VariÃ¡veis
1- VetorA[10] tipo inteiro;
    Ind1,Ind2,Ind3 tipo inteiro;
    MultipValores tipo inteiro;

2- Vetor 1[5], Vetor2[5], Vetor3soma [5] tipo inteiro;

3- VetorChar[13] tipo caracter;
   caracter tipo caracter;
   IndAparece tipo inteiro;
   QtasVezes inteiro;

   VariÃ¡veis gerais
   op tipo caracter;

   Inicio
   Menu:   // Rotulo Menu
    Limpa tela
    escreva("Menu de OpÃ§Ãµes de ManipulaÃ§Ã£o de Vetores");
    escreva("1 - Vetor 10 posiÃ§Ãµes aÃ§eatÃ³ria 0-100");
    escreva("2 - Vetores 5 posiÃ§Ãµes - Soma intercalada");
    escreva("3 - Vetores 13 posiÃ§Ãµes de caracteres");
    escreva("4 - Sair do sistema");
    leia(op);

    se(op == '1') entÃ£o
    escreva("Gere aleatoriamente 10 valores inteiros aleatÃ³rios");
    para(i= 0;i<10;i++) faÃ§a
    VetorA[i] = randomizar(0-100);
    escreva("VetorA[",i,"]=",VetorA[i])
    fimpara
    escreva("Digite o 1Âº indice a buscar o conteÃºdo");
    leia(Ind1);
    escreva("Digite o 2Âº indice a buscar o conteÃºdo");
    leia(Ind2);
    escreva("Digite o 3Âº indice a buscar o conteÃºdo");
    leia(Ind3);

    MultipValores = VetorA[Ind1] * VetorA[Ind2] * VetorA[Ind3];

    escreva("VetorA[",Ind1,] = ",VetorA[Ind1]);
    escreva("VetorA[",Ind2,] = ",VetorA[Ind2]);
    escreva("VetorA[",Ind3,] = ",VetorA[Ind3]);

    escreva("Valor da multiplicaÃ§Ã£o dos trÃªs:",MultipValores);.
    escreva("Tecle enter para voltar ao Menu Principal");
    getche(); VÃ¡ para Menu;
 Fimse // opÃ§Ã£o 1

    se(op == '2') entÃ£o
    esreva("Valores do Vetor1[5]");
    para(i=0;i<5;i++) faÃ§a
    escreva("Digite o valor do Vetor1[",i,"]:");
    leia(Vetor1[i]);

    esreva("Valores do Vetor2[5]");
    para(i=0;i<5;i++) faÃ§a
    escreva("Digite o valor do Vetor2[",i,"]:");
    leia(Vetor2[i]);
    fimpara

    //criaÃ§Ã£o do 3Âº vetor

    tamanho=5;
    para(i=0;i<5;i++) faÃ§a
    Vetor3Soma[i] = Vetor[i] + Vetor2[tamanho-i];
    fimpara

    //mostrar os vetores

    escreva("Vetor1");
    Para(i=0;i<5;i++) faÃ§a
    escreva("Vetor1[",i,"]:", Vetor1[i]);
    fimpara

    escreva("Vetor2");
    Para(i=0;i<5;i++) faÃ§a
    escreva("Vetor2[",i,"]:", Vetor2[i]);
    fimpara

    escreva("Vetor3Soma");
    Para(i=0;i<5;i++) faÃ§a
    escreva("Vetor3Soma[",i,"]:", Vetor3[i]);
    fimpara

    escreva("Tecle enter para voltar ao Menu Principal");
    getche(); VÃ¡ para Menu;
    fimse //opÃ§Ã£o2

    se(op =='3') entÃ£o
    escreva("Preenchimento aleatorios de 13 caracteres");
    para(i=0;i<13;i++) faÃ§a
    VetorChar[i] = Randomizar(0-255);
    escreva("VetorChar[",i,"];",VetorChar[i]);
    fimpara
    escreva("Digite um caracter qualquer:");
    leia(caracter);
    QtasVezes = 0;
    para(i=0;i<13;i++) faÃ§a
    se(caracter == VetorChar[i]) entÃ£o
    QtasVezes=Qtasvezes+1;]
    escreva("Vetorchar[",i,"]:",caracter);
    fimse
    fimpara
    escreva("Total de Vezes:",Qtasvezes);
    escreva("Tecle enter para voltar ao Menu Principal");
    getche(); VÃ¡ para Menu;
    fimse //opÃ§Ã£o 3

    se(op == '4') entÃ£o
    escreva("Saindo do Sistema..............");
    escreva("telce enter.........");
    tecle algo;
    Sair do sistema;
    fimse// opÃ§Ã£o4

    fimalgoritmo

   */

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
char VetorChar[13], caracter, IndAparece, Qtasvezes;

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
            VetorChar[i] = rand () %100;
            printf("\n%i", VetorChar);
        }
        printf("Digite um caracter qualquer: \n");
        scanf("%s", &caracter);
        

    }
    
}
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <time.h>
#include <stdlib.h>

// Variaveis do sistema total
char op;
int deuruim;

// variaveis do exercicio 1.2
char matrizA[5][5];
int opA;
char searchA;
char menor, maior;

// variaveis do exercicio 1.3
int matrizB[3][3], opB, impares[50], impar, num;

int main(void)
{

menu_principal:

    system("cls");
    printf("=================================================================");
    printf("\n Menu de opcoes da prova N2 ");
    printf("\n Opcao A - Matriz 5 x 5, caracteres tipo char A - Z. ");
    printf("\n Opcao B - Matriz 3 x 3, caracteres tipo inteiros 0 - 100. ");
    printf("\n Opcao C - Matriz 4 x 4, caracteres tipo float 0,0 - 99,9. ");
    printf("\n Opcao S - sair do Sistema. \n");
    printf("=================================================================\n");
    scanf("%c", &op);
    op = toupper(op);
    if ((op != 'A') && (op != 'B') && (op != 'C') && (op != 'S'))
    {
        goto menu_principal;
    }

    // opcao A
    if (op == 'A')
    {

        for (int c = 0; c < 5; c++)
        {
            for (int l = 0; l < 5; l++)
            {
                matrizA[c][l] = rand() % 25 + 97;
            }
        }
    Menu2:
        system("cls");
        printf("=================================================================");
        printf("\n Opcao 1 - imprimir os valores da matriz. ");
        printf("\n Opcao 2 - procurar um caracter dentro da matriz. ");
        printf("\n Opcao 3 - maior e menor caracter. ");
        printf("\n Opcao 4 - voltar ao menu inicial. ");
        printf("\n=================================================================\n");
        scanf("%i", &opA);
        if ((opA < 1) || (opA > 4))
        {
            system("cls");
            printf("\n Item invalido, tecle para ir ao menu.");
            printf("\n Favor digitar entre 1 e 4.");
            getche();
            goto Menu2;
        }
        if (opA == 1)
        {
            for (int c = 0; c < 5; c++)
            {
                for (int l = 0; l < 5; l++)
                {
                    printf("\n Matriz[%i][%i] = %c", c, l, matrizA[c][l]);
                }
            }
            printf("\n Tecle para voltar ao menu 2.");
            getche();
            goto Menu2;
        }
        if (opA == 2)
        {
            do
            {
                printf("\n Digite um caracter entre A - Z para ser encontrado. ");
                fflush(stdin);
                scanf("%c", &searchA);
                if ((searchA < 97) || (searchA > 122))
                {
                    system("cls");
                    printf("\n Caracter fora do escopo do sistema.");
                    printf("\n Favor digitar entre A - Z");
                }
            } while ((searchA < 97) || (searchA > 122));

            for (int c = 0; c < 5; c++)
            {
                for (int l = 0; l < 5; l++)
                {
                    if (searchA == matrizA[c][l])
                    {
                        printf("\n Matriz[%i][%i]= %c", c, l, matrizA[c][l]);
                        deuruim++;
                    }
                }
            }
            if (deuruim == 0)
            {
                printf("\n Caracter %c nao encontrado dentro do sistema. ", searchA);
            }

            printf("\n Tecle para voltar ao menu 2.");
            getche();
            goto Menu2;
        }

        if (opA == 3)
        {
            maior = 65;
            menor = 122;

            system("cls");
            for (int c = 0; c < 5; c++)
            {
                for (int l = 0; l < 5; l++)
                {
                    if (matrizA[c][l] < menor)
                    {
                        menor = matrizA[c][l];
                    }
                    if (matrizA[c][l] > maior)
                    {
                        maior = matrizA[c][l];
                    }
                }
            }
            printf("\n O maior caracter = %c", maior);
            printf("\n O menor caracter = %c", menor);

            printf("\n Tecle para voltar ao menu 2.");
            getche();
            goto Menu2;
        }
        if (opA == 4)
        {
            goto menu_principal;
        }
    }

    if (op == 'B')
    {
        impar = 1;
        for (int i = 0; i < 50; i++)
        {
            impares[i] = impar;
            impar = impar + 2;
        }

        for (int c = 0; c < 3; c++)
        {
            for (int l = 0; l < 3; l++)
            {
                matrizB[c][l] = rand() % 101;
            }
        }
    Menu3:
        system("cls");
        printf("=================================================================");
        printf("\n Opcao 1 - Imprimir os valores da Matriz. ");
        printf("\n Opcao 2 - Mostrar todos os valores impares da matriz. ");
        printf("\n Opcao 3 - Localizar se o caracter existe dentro da matriz. ");
        printf("\n Opcao 4 - Voltar ao menu 3. \n");
        printf("=================================================================\n");
        scanf("%i", &opB);
        if ((opB < 1) || (opB > 4))
        {
            goto Menu3;
        }

        if (opB == 1)
        {
            system("cls");

            for (int c = 0; c < 3; c++)
            {
                for (int l = 0; l < 3; l++)
                {
                    printf("\n Matriz[%i][%i]= %i ", c, l, matrizB[c][l]);
                }
            }

            printf("\n Tecle para voltar ao menu 3.");
            getche();
            goto Menu3;
        }

        if (opB == 2)
        {
            system("cls");
            deuruim = 0;
            for (int c = 0; c < 3; c++)
            {
                for (int l = 0; l < 3; l++)
                {
                    for (int i = 0; i < 50; i++)
                    {
                        if (matrizB[c][l] == impares[i])
                        {
                            printf("\n Matriz[%i][%i]=%i", c, l, matrizB[c][l]);
                            deuruim++;
                        }
                    }
                }
            }
            if (deuruim == 0)
            {
                printf("\n Nao existem numeros impares no sistema. ");
            }

            printf("\n Tecle para voltar ao menu 3.");
            getche();
            goto Menu3;
        }
        if (opB == 3)
        {
            system("cls");
            deuruim = 0;
            do
            {
                printf("\n Digite um numero para procurar na matriz:");
                fflush(stdin);
                scanf("%i", &num);
                if ((num < 0) || (num > 100))
                {
                    system("cls");
                    printf("\n Caracter fora do escopo do programa. ");
                    printf("\n Favor digitar entre 0 - 100. ");
                }
            } while ((num < 0) || (num > 100));
            for (int c = 0; c < 3; c++)
            {
                for (int l = 0; l < 3; l++)
                {
                    if (matrizB[c][l] == num)
                    {
                        printf("\n Matriz[%i][%i]=%i ", c, l, matrizB[c][l]);
                        deuruim++;
                    }
                }
            }
            if (deuruim == 0)
            {
                system("cls");
                printf("\n Nao encontramos o Numero %i que fora digitado ", num);
            }
            printf("\n Tecle para voltar ao menu 3.");
            getche();
            goto Menu3;
        }
        if (opB == 4)
        {
            goto menu_principal;
        }
    }
}

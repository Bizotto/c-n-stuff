#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

// variaveis
//Menu Principal
char opcao;

// Opcao A
char matrizA[5][5];
int opcaoa;
char buscCaracter;
int flag;
char maiorCarac, menorCarac;

// Opcao B
int matrizB[3][3];
int opcaob;
int impares[50];
int impar;
int numero;

// Opcao C
float matrizC[4][4];
int opcaoc;
float menor, maior;
float multiplicacao;

main(void)
{
    srand(time(0));

// Menus
Menu_Principal:
    system("cls");
    printf("============================================================================\n");
    printf("A - Preencher a MatrizA [5][5] com valores tipo caractere (a....z).\n");
    printf("B - Preencher a MatrizB [3][3] com valores inteiros (0...100).\n");
    printf("C - Preencher a MatrizC [4][4] com valores fracionarios (0,0 ...99,9).\n");
    printf("S - Sair do Sistema.\n");
    printf("============================================================================\n");
    fflush(stdin);
    scanf("%c", &opcao);
    opcao = toupper(opcao);

    if ((opcao != 'A') && (opcao != 'B') && (opcao != 'C') && (opcao != 'S'))
    {
        goto Menu_Principal;
    }

    switch (opcao)
    {

    // Opcao A Menu Principal
    case 'A':
    {

        // Gera Matriz
        for (int c = 0; c < 5; c++)
        {
            for (int l = 0; l < 5; l++)
            {
                matrizA[c][l] = rand() % 25 + 97;
            }
        }

        // Menu Secundario
    Menu_SecundarioOpcaoA:
        system("cls");
        printf("============================================================================\n");
        printf("1 - Imprimir os valores da Matriz.\n");
        printf("2 - Pedir para o usuario digitar um caractere e localizar se ele existe.\n");
        printf("3 - Localizar o caractere maior e o menor dentro do alfabeto a-z que se encontra na matriz.\n");
        printf("4 - Voltar ao Menu Principal.\n");
        printf("============================================================================\n");
        scanf("%i", &opcaoa);

        // Controle Menu
        if ((opcaoa < 1) || (opcaoa > 4))
        {
            goto Menu_SecundarioOpcaoA;
        }

        // Opcoes Menu Principal
        switch (opcaoa)
        {

        // Opcao 1 Menu Secundario
        case 1:
        {
            system("cls");
            // Imprimar a matriz no console
            for (int c = 0; c < 5; c++)
            {
                for (int l = 0; l < 5; l++)
                {
                    printf("Matriz[%i][%i]= %c", c, l, matrizA[c][l]);
                    printf("\n");
                }
            }

            // Voltar para o menu
            printf("\nTecle enter para voltar ao Menu Secundario\n");
            getch();
            goto Menu_SecundarioOpcaoA;
            break;
        }

        // Opcao 2 Menu Secundario
        case 2:
        {
            system("cls");

            // Controle de busca de caracter
            flag = 0;
            do
            {
                printf("Digite um caracter para procurar na matriz:\n");
                fflush(stdin);
                scanf("%c", &buscCaracter);
                if ((buscCaracter < 97) || (buscCaracter > 122))
                {
                    system("cls");
                    printf("\nCaracter fora da faixa limite -> a-z.\n");
                }
            } while ((buscCaracter < 97) || (buscCaracter > 122));

            // Fazendo a busca do caracter
            system("cls");
            for (int c = 0; c < 5; c++)
            {
                for (int l = 0; l < 5; l++)
                {
                    if (matrizA[c][l] == buscCaracter)
                    {
                        printf("Matriz[%i][%i]= %c\n", c, l, matrizA[c][l]);
                        flag++;
                    }
                }
            }
            if (flag == 0)
            {
                printf("O caracter: %c, nao foi encontrado na matriz!", buscCaracter);
            }

            // Voltar para o menu
            printf("\n\nTecle enter para voltar ao Menu Secundario\n");
            getch();
            goto Menu_SecundarioOpcaoA;
        }
        break;

        // Opcao 3 Menu Secundario
        case 3:
        {
            system("cls");
            maiorCarac = 65;
            menorCarac = 122;

            // Fazendo consulta menor e maior
            for (int c = 0; c < 5; c++)
            {
                for (int l = 0; l < 5; l++)
                {
                    if (matrizA[c][l] < menorCarac)
                    {
                        menorCarac = matrizA[c][l];
                    }
                    if (matrizA[c][l] > maiorCarac)
                    {
                        maiorCarac = matrizA[c][l];
                    }
                }
            }

            // Mostrando resultado
            printf("Maior Caractere= %c", maiorCarac);
            printf("\nMenor Caractere= %c", menorCarac);

            // Voltar para o menu
            printf("\n\nTecle enter para voltar ao Menu Secundario\n");
            getch();
            goto Menu_SecundarioOpcaoA;
        }
        break;

        // Opcao 4 Menu Secundario
        case 4:
        {
            // VOlta para o menu
            goto Menu_Principal;
        }
        break;
        }
    }
    break;

    // Opcao B Menu Principal
    case 'B':
    {

        // Gera numeros impares
        impar = 1;
        for (int i = 0; i < 50; i++)
        {
            impares[i] = impar;
            impar = impar + 2;
        }

        // Gera Matriz Opcao B
        for (int c = 0; c < 3; c++)
        {
            for (int l = 0; l < 3; l++)
            {
                matrizB[c][l] = rand() % 101;
            }
        }

        //Menu Opcao B
    Menu_SecundarioOpcaoB:
        system("cls");
        printf("============================================================================\n");
        printf("1 - Imprimir os valores da Matriz.\n");
        printf("2 - Localizar valores inteiros impares - Mostrar o numero impar e seu indice.\n");
        printf("3 - Pedir para o usuario digitar um numero e localizar se este existe na matriz.\n");
        printf("4 - Voltar ao Menu Principal.\n");
        printf("============================================================================\n");
        scanf("%i", &opcaob);

        if ((opcaob < 1) || (opcaob > 4))
        {
            goto Menu_SecundarioOpcaoB;
        }

        // Opcoes Menu Secundario B
        switch (opcaob)
        {

            // Opcao 1 Menu Secundario
        case 1:
        {
            system("cls");

            // Mostrar valores da matriz
            printf("Valores da matriz:\n");
            for (int c = 0; c < 3; c++)
            {
                for (int l = 0; l < 3; l++)
                {
                    printf("\nMatriz[%i][%i]= %i", c, l, matrizB[c][l]);
                }
            }

            // Voltar para o menu
            printf("\n\nTecle enter para voltar ao Menu Secundario\n");
            getch();
            goto Menu_SecundarioOpcaoB;
        }
        break;

        // Opcao 2 Menu Secundario
        case 2:
        {
            system("cls");
            flag = 0;

            printf("Numeros impares encontrados na matriz:\n");
            // Consultar se existe numero impar
            for (int c = 0; c < 3; c++)
            {
                for (int l = 0; l < 3; l++)
                {
                    for (int i = 0; i < 50; i++)
                    {
                        if (matrizB[c][l] == impares[i])
                        {
                            printf("\nMatrizB[%i][%i]= %i", c, l, matrizB[c][l]);
                            flag++;
                        }
                    }
                }
            }

            // Verificar se existe numeros negativos
            if (flag == 0)
            {
                printf("\nNao existe numeros impares na MatrizB!");
            }

            // Voltar para o menu
            printf("\n\nTecle enter para voltar ao Menu Secundario\n");
            getch();
            goto Menu_SecundarioOpcaoB;
        }
        break;

            // Opcao 3 Menu Secundario
        case 3:
        {
            system("cls");
            flag = 0;

            // Pedir numero para o usuario
            do
            {
                printf("Digite um numero para procurar na matriz:\n");
                fflush(stdin);
                scanf("%i", &numero);

                if ((numero < 0) || (numero > 100))
                {
                    system("cls");
                    printf("Caracter fora da faixa limite -> 0-100.\n");
                }
            } while ((numero < 0) || (numero > 100));

            // Consultar se existe o numero digitado
            for (int c = 0; c < 3; c++)
            {
                for (int l = 0; l < 3; l++)
                {
                    if (matrizB[c][l] == numero)
                    {
                        printf("\nMatriz[%i][%i]= %i", c, l, matrizB[c][l]);
                        flag++;
                    }
                }
            }

            // Verificar se existe o numero digitado
            if (flag == 0)
            {
                system("cls");
                printf("Nao foi encontrado o numero %i na matriz!\n", numero);
            }

            // Voltar para o menu
            printf("\nTecle enter para voltar ao Menu Secundario\n");
            getch();
            goto Menu_SecundarioOpcaoB;
        }
        break;

            // Opcao 4 Menu Secundario
        case 4:
        {
            goto Menu_Principal;
        }
        break;
        }
    }
    break;

    // Opcao C Menu Principal
    case 'C':
    {
        // Gera Matriz Opcao C
        for (int c = 0; c < 4; c++)
        {
            for (int l = 0; l < 4; l++)
            {
                matrizB[c][l] = rand() % 999;
            }
        }

    //Menu Opcao c
    Menu_SecundarioOpcaoC:
        system("cls");
        printf("============================================================================\n");
        printf("1 - Imprimir os valores da Matriz.\n");
        printf("2 - Localizar o Maior e o Menor valor e seus respectivos indices.\n");
        printf("3 - Gerar a multiplicacao de todos os valores da Matriz e mostrar o resultado.\n");
        printf("4 - Voltar ao Menu Principal.\n");
        printf("============================================================================\n");
        scanf("%i", &opcaoc);

        if ((opcaoc < 1) || (opcaoc > 4))
        {
            goto Menu_SecundarioOpcaoC;
        }

        // Opcoes menu secundario
        switch (opcaoc)
        {

            // Opcao 1 Menu Secundario
        case 1:
        {
            system("cls");

            // Mostrar valores da matriz
            printf("Valores da matriz:\n");
            for (int c = 0; c < 4; c++)
            {
                for (int l = 0; l < 4; l++)
                {
                    printf("\nMatriz[%i][%i]= %f", c, l, matrizC[c][l]);
                }
            }

            // Voltar para o menu
            printf("\n\nTecle enter para voltar ao Menu Secundario\n");
            getch();
            goto Menu_SecundarioOpcaoC;
        }
        break;

        // Opcao 2 Menu Secundario
        case 2:
        {
            system("cls");
            maior = 0;
            menor = 200;

            // Localizar maior e menor numero
            for (int c = 0; c < 4; c++)
            {
                for (int l = 0; l < 4; l++)
                {
                    if (matrizC[c][l] < menor)
                    {
                        menor = matrizC[c][l];
                    }
                    if (matrizC[c][l] > maior)
                    {
                        maior = matrizC[c][l];
                    }
                }
            }

            // Mostrar resultados
            printf("Maior numero da matriz: %f", maior);
            printf("\nMenor numero da matriz: %f", menor);

            // Voltar para o menu
            printf("\n\nTecle enter para voltar ao Menu Secundario\n");
            getch();
            goto Menu_SecundarioOpcaoC;
        }
        break;

        // Opcao 3 Menu Secundario
        case 3:
        {
            system("cls");
            multiplicacao = matrizC[0][0];
            // Fazer multiplicação
            for (int c = 0; c < 4; c++)
            {
                for (int l = 0; l < 4; l++)
                {
                    multiplicacao = multiplicacao * matrizC[c][l];
                }
            }

            // Mostrar resultados
            printf("Resultado da multiplicacao de toda a matriz: %f", multiplicacao);

            // Voltar para o menu
            printf("\n\nTecle enter para voltar ao Menu Secundario\n");
            getch();
            goto Menu_SecundarioOpcaoC;
        }
        break;

        // Opcao 3 Menu Secundario
        case 4:
        {
            goto Menu_Principal;
        }
        break;
        default:
            break;
        }
    }
    break;

    case 'S':
    {
        exit(0);
    }
    break;
    default:
        break;
    }
}
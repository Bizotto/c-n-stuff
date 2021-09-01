// 8. Faça um algoritmo para ler três notas de um aluno em uma disciplina e imprimir a sua média
// ponderada (as notas tem pesos respectivos de 1, 2 e 3).

#include <conio.h>
#include <stdio.h>
#include <iostream>

float N1, N2, N3, MediaFim, MediaN;
char pimba;

int main(void)
{
    do
    {
        system("cls");
        printf("\nDigite as suas respectivas notas do semestre\n");

        printf("\nDigite a Nota 1;\n");
        scanf("\n%f", &N1);

        printf("\nDigite a Nota 2;\n");
        scanf("\n%f", &N2);

        printf("\nDigite a Nota 2;\n");
        scanf("\n%f", &N3);

        MediaN = (N1 * 1) + (N2 * 2) + (N3 * 3);

        MediaFim = MediaN / 6;

        if (MediaFim <= 6)
        {
            printf("\nO aluno esta de recuperacao(%.1f).\n", MediaFim);
        }
        if (MediaFim >= 7)
        {
            printf("\nO aluno foi aprovado com uma media de %.1f\n", MediaFim);
        }
        printf("\nDeseja calcular a media de outro aluno? <S> <N>\n");
        pimba = getche();
        pimba = toupper(pimba);
    } while (pimba != 'N');
    system("cls");
}
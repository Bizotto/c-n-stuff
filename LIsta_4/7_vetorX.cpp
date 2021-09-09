// 7. Leia um vetor de 20 posições e em seguida um valor X qualquer. Seu
// programa deverá fazer uma busca do valor de X no vetor lido e informar a
// posição em que foi encontrado ou se não foi encontrado.

// Bibliotecas
#include <conio.h>
#include <stdio.h>
#include <iostream>

// Variaveis
int Vetor[20] /*= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}*/;
int ValorX;
int Posicao;

// incio
int main(void)
{
    system("cls");
   

   
    for (int i = 0; i < 20; i++)
    {
        printf("%i\n", Vetor[i]);
    }
    printf("\nDigite um numero: ");
    scanf("\n%i", &ValorX);
    
    for (int i = 0; i < 20; i++)
    {
        if (ValorX == Vetor[i])
        {
            printf("O Numero %i esta na posicao [%i]",ValorX, i);
            return(0);
        }
        
    }
    
}
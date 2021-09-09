/* Leia um vetor de 12 posições e em seguida ler também dois valores X e Y
quaisquer correspondentes a duas posições no vetor. Ao final seu programa
deverá escrever a soma dos valores encontrados nas respectivas posições X e
Y. */

int Vetor[12];
int NumeroX, NumeroY, Soma;

#include <conio.h>
#include <stdio.h>
#include <iostream>

int main(void){
   for (int i = 0; i < 12; i++)
   {
     printf("Digite um numero para o Vetor[%i]:\n", i);
     scanf("%i", &Vetor[i]);
   }
   
   printf("Escolha um VetorX de 0 a 11.\n");
   scanf("%i", &NumeroX);
   
   printf("Escolha um VetorY de 0 a 11.\n");
   scanf("%i", &NumeroY);

   Soma = Vetor[NumeroX] + Vetor[NumeroY];

   printf("O resultado do calculo: Vetor[%i] + Vetor[%i] foi: %i", NumeroX, NumeroY, Soma);
}
/* Leia um vetor de 40 posições e atribua valor 0 para todos os elementos que
possuírem valores negativos. */

#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <time.h>

int Vetor[40];

int main(void){
    srand(time(0));
    for (int i = 0; i < 40; i++)
    {
        Vetor[i] = rand() % 200 + -100; // define a diferenca de distancia, primeiro sera o inicio o segundo determina quantas casas a frente ele ira.
    }

    for (int i = 0; i < 40; i++)
    {
       if (Vetor[i] < 0){
           Vetor[i]= 0;
       }
       printf("Vetor[%i]= %i\n", i, Vetor[i]);
    }
    

    
}
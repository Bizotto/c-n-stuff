// 12. Leia um vetor de 13 posições contendo letras minúsculas, e na sequência
// mostre o vetor original, o vetor com as letras em maiúscula. Após apresente
// cada letra do vetor das minúsculas com o seu valor da tabela ASCII sendo o
// decimal, Hexadecimal e Binário. E assim também para o vetor das Maiúsculas. 

#include <stdio.h>

int main(void){
    int vetor[6] = {5,7,8,2,9,3}, i, soma;

    for(i = soma = 0; i < 6; ++i)
        if(i % 2)
            soma += vetor[i];

    printf("Soma = %d\n", soma);

    return 0;
}
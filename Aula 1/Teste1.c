/*construa algoritimo que lei dois numeros e calcule a media monstrando na tela.

algoritmo media*/

#include <conio.h>
#include <stdio.h>

int N1,N2;
int Media;

void main(){
    printf("\n Entre com o N1:");
    scanf("%i",&N1);
    printf("\n Entre com o N2:");
    scanf("%i", &N2);
    Media = (N1+N2)/2;
    
    printf ("\n A sua media foi %i", Media);
    printf ("\n Media = (N1: %i + N2: %i )/2 = %i", N1, N2, Media);
}

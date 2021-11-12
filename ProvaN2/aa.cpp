#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;
float matrizc[4][4];

int main(int argc, char *argv[])
{
    srand((unsigned int)time(NULL));

    float a = 5.0;
    for (int c = 0; c < 4; c++)
    {
        for (int l = 0; l < 4; l++)
        {

            matrizc[c][l] = ((float)rand() / (float)(RAND_MAX)) * a;
        }
    }

    for (int c = 0; c < 4; c++)
    {
        for (int l = 0; l < 4; l++)
        {

            printf("\n %i %i %.2f", c, l, matrizc[c][l]);
        }
    }
    return 0;
}
#include<stdio.h>

//este programa exibe o maior valor do array

int main ()
{
    int num[] = {10,5,8,1,13,28};             
    int pos = 0;                                       // pos = posição
    int maior = num [0];
    for (pos = 0; pos <= 5 ; pos++)
    {
        if (num[pos] > maior)
        {
            maior = num [pos];
        }
        
    }

    printf("a maior valor do array é %d\n",maior);

    return 0;

}
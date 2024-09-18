#include <stdio.h>          // biblioteca padrão
#include "../lib/maior_menor.h"
int main()
{
    int numeros [7] = {15,18,3,9,5,29,4};

    printf("o maior valor do array é: %d\n",maior_valor(numeros,7));


    printf("o menor valor do array é: %d\n",menor_valor(numeros,7));
    return 0;
}
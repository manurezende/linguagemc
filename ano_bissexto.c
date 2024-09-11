#include <stdio.h>

    int main()
    {
        int ano;
        printf("digite um ano por favor! \n");
        scanf ("%d" ,&ano );
        // a % representa o mod que vai trabalhar com o que resta da divisão. e o if trabalha com possibilidade
        if (ano % 4 == 0){                                 
            printf("o seu ano é bissexto\n");
        }
        return 0;

    }
#include <stdio.h>
int main()
{
        int contar = 0;             //declaração da variavel de zero ate cem             
        int quantidade = 0;         //declaração da variavel de conta a quantidade de numeros multiplos de 3

        while (contar <= 100)
        {
            if (contar % 3 == 0)
            {
                printf("%d\n" ,contar);
                quantidade++;
            }
            contar++;
        }
        printf("essas são a quantidades de multiplos de 3 que tem de 0 a 100: %d\n" ,quantidade);
        return 0;
}
#include <stdio.h>
int main()
{
    int num;                            //num é o numero que o usuario irá digitar
    int resultado;                      // será a multiplicação do numero digitado pelo contar
    int contar = 0;                     //inicio da tabuada vai de 0 até 10
    printf("por favor digite um numero para fazermos a sua tabuada\n");
    scanf("%d" ,&num);

    while (contar <= 10)
    {
        resultado = num * contar;
        printf("%d x %d = %d\n", num,contar,resultado);
        contar++;
    }
    return 0;
}
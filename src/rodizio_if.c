#include<stdio.h>

int main()
{
    int placa;
    printf("olá! Você poderia informar o final da sua placa por favor!\n");
    scanf("%d",&placa);

    if (placa == 1)
    {
        printf("Você não pode sair na segunda-feira\n");
    }
    else if (placa == 2)
    {
        printf("Você não pode sair na segunda-feira\n");
    }
    else if (placa == 3)
    {
        printf("Você não pode sair na terça-feira\n");
    }
    else if (placa == 4)
    {
        printf("Você não pode sair na terça-feira\n");
    }
    else if (placa == 5)
    {
        printf("Você não pode sair na quarta-feira\n");
    }
    else if (placa == 6)
    {
        printf("Você não pode sair na quarta-feira\n");
    }
    else if (placa == 7)
    {
        printf("Você não pode sair na quinta-feira\n");
    }
    else if (placa == 8)
    {
        printf("Você não pode sair na quinta-feira\n");
    }
    else if (placa == 9)
    {
        printf("Você não pode sair na sexta-feira\n");
    }
    else if (placa == 0)
    {
        printf("Você não pode sair na sexta-feira\n");
    }
    else
    {
        printf("final de placa inesistente, por favor digite somente o ultimo numero!!\n");
    }
    return 0;
}
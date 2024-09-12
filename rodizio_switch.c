#include <stdio.h>
int main()
{
    int placa;
    printf("olá! Você poderia informar o numero final da sua placa por favor!\n");
    scanf("%d",&placa);

    switch (placa)
    {
     case 1:
        printf("Você não pode sair na segunda-feira\n");
        break;
     case 2:
        printf("Você não pode sair na segunda-feira\n");
        break;
     case 3:
        printf("Você não pode sair na terça-feira\n");
        break;
     case 4:
        printf("Você não pode sair na terça-feira\n");
        break;
     case 5:
        printf("Você não pode sair na quarta-feira\n");
        break;
     case 6:
        printf("Você não pode sair na quarta-feira\n");
        break;
     case 7:
        printf("Você não pode sair na quinta-feira\n");
        break;
     case 8:
        printf("Você não pode sair na quinta-feira\n");
        break;
     case 9:
        printf("Você não pode sair na sexta-feira\n");
        break;
     case 0:
        printf("Você não pode sair na sexta-feira\n");
        break;
    
     default:
    
        printf("final de placa inesistente, por favor digite somente o ultimo numero!!\n");
        break;
    }

        return 0;
}
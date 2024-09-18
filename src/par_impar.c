#include <stdio.h>

    int main(){
        int num;
        printf("escreva um numero inteiro!\n");
        scanf ("%d" ,&num);
        if( num % 2 == 0)
        {  
            printf("é um numero par!\n");
        }
        else
        {
            printf("é um numero impar\n");
        }

        return 0;

}
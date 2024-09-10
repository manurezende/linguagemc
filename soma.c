#include <stdio.h>

int main(){
    int v1,v2,rs;
    printf("digite um numero: \n");    
    //   o comando scanf realiza a captura do numero que o usuario ira digitar
    // apos capturar o numero será alocado na variavel v1 

    scanf("%d",&v1);

    printf("digite outro numero: \n");    
    scanf("%d",&v2);

     printf("o valor de v1 é %d e está em %p \n", v1, &v1);
     printf("o valor de v2 é %d e está em %p \n", v2, &v2);

     rs = v1 + v2;
    printf("o resultado da soma é: %d e está em %p \n", rs, &rs); 

    return 0;
}
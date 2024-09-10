#include <stdio.h>
int main ()
{
    char car;                                            //declara a variavel, e fala q ela é caracter
    printf ("digite um caracter e ENTER\n");             // irá mostra na tela a mensagem
    scanf("%c", &car);                                   //irá ler a variavel e guardar o caracter digitado
    printf("o caracter digitado é %c\n", car);           // ira mostra o caracter que foi guardado
    return 0;

}

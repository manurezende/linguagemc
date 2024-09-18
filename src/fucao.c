#include <stdio.h>

void parimpar (int vlr)
{
      if (vlr % 2 ==0)
    {
        printf("o valor é par\n");
    }
   else
    {
        printf("o valor é impar\n");
    } 
}

int main ()
{
    int vlr = 6;                         //valor 
    parimpar(vlr);
    return 0;       
}
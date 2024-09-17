#include<stdio.h>
int main ()
{
    int num[5] = {23,8,11,52,9};             //nesta declaração eu explicitei que no array há 5 elementos
    int pos = 4;                            
    while (pos>=0)
    {
        printf("%d\n" ,num[pos]);
        pos--;
    }
                  

    return 0;

}
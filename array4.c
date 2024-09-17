#include<stdio.h>
int main ()
{
    int num[] = {10,5,8,1,13,28};             
    int pos = 0;                                       // pos = posição
    int rs = 0;
    for ( pos = 0; pos <= 5; pos++)
    {
        printf("%d\n" ,num[pos]);
        rs += num[pos];
    }

    printf("-------------\n%d\n" ,rs);
    return 0;

}
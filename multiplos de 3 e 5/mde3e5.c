#include<stdio.h>

int main()
{
    int X, i, somatorio = 0;
    scanf("%d", &X);
    for(i=0;i<X;i++)
    {
        if(i%3==0 || i%5==0)
        {
            somatorio = somatorio + i;
        }
        else{}
    }
    printf("%d", somatorio);
}
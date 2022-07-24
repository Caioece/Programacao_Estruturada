#include<stdio.h>

int main()
{
    int i, nota[10], posicaonota;
    int maiornota;
    maiornota = 0;
    for(i=0;i<5;i++)
    {
        scanf("%d", &nota[i]);
        if(nota[i]>maiornota)
        {
            maiornota = nota[i];
            posicaonota = i;
        }
    }
    printf("%d\n", maiornota);
    printf("%d", posicaonota);
}
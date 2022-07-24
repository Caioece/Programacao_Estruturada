#include<stdio.h>

int main()
{
    int N, i, nota[100];
    int menornota = 10;
    scanf("%d", &N);

    for(i=0;i<N;i++)
    {
        scanf("%d", &nota[i]);
        if(nota[i] >= 0 && nota[i] <= 10)
        {
            if(nota[i]<menornota)
            {
                menornota = nota[i];
            }
        }
        else
        N--;
    }
    printf("%d", menornota);
}
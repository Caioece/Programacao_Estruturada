#include<stdio.h>

int main()
{
    int N, aprovados = 0, i, nota[100];
    scanf("%d", &N);
    for(i=0;i<N;i++)
    {
        scanf("%d", &nota[i]);
        if(nota[i] >= 0 && nota[i] <= 10)
        {
            if(nota[i]>=5)
            {
                aprovados++;
            }
        }
        else{}
    }
    printf("%d", aprovados);
    return 0;
}
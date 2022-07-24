#include<stdio.h>

int main()
{
    int N, i, nota[100];
    int menornota = 10, segundamenor = 10;
    scanf("%d", &N);
    //ESTRUTURA DE REPETIÇÃO PARA PEGAR AS NOTAS DE TODOS
    for(i=0;i<N;i++)
    {
        scanf("%d", &nota[i]);
        //SE A NOTA FOR MAIOR OU IGUAL A 0 E MENOR OU IGUAL A 10//
        if(nota[i] >= 0 && nota[i] <= 10)
        {
            //SE A NOTA FOR MENOR QUE A MENOR NOTA//
            if(nota[i] < menornota)
            {
                menornota = nota[i];
            }
        }
        else
        N--;
    }
    for(i = 0; i < N; i++)
    {
        if(nota[i] < segundamenor && nota[i] != menornota)
        segundamenor = nota[i];
    }
    printf("%d", segundamenor);
}
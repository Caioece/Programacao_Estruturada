#include<stdio.h>
#include<math.h>

int main()
{
    int N, quadrado[100];
    int i;
    scanf("%d", &N);
    for(i = 0; i <= N; i++)
    {
        if(i%2==0)
        {
        quadrado[i] = pow(i,2);
        printf("%d^2 = %d\n", i, quadrado[i]);
        }
    }

    return 0;
}
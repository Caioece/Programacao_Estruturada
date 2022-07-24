#include<stdio.h>

int main()
{
    float x[10], y[10] ,z[10], medias[10];
    int N, i = 0;
    scanf("%d", &N);
    for(i = 0; i<N; i++)
    {
        medias[i] = 0;
    }
        for(i = 0; i < 3; i++)
        {
            scanf("%f %f %f", &x[i], &y[i], &z[i]);
            medias[i] = ((x[i]*2) + (y[i]*3) + (z[i]*5))/10;
        }
    for(i=0; i<3; i++)
    {
        printf("%.1f\n", medias[i]);
    }
}
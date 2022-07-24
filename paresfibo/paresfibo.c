#include<stdio.h>

int main()
{
    //COMECEI O VALOR DO SOMATORIO COMO 2 PORQUE O FIBO2 COMECA COM 2//
    int X, somatorio = 2;
    int fibo1=1;
    int fibo2=2;
    int fibo=0;
    scanf("%d", &X);
    printf("Entrada: %d", X);
    //FIBONACCI//
    while(fibo<X)
    {
        fibo = fibo1 + fibo2;
        fibo1 = fibo2;
        fibo2 = fibo;

        //ANALISANDO O FIBO PARA SOMAR OS PARES//
        if(fibo%2==0 && fibo<X)
        {
            somatorio = somatorio + fibo;
        }
    }
    printf("Saida: %d", somatorio);
}
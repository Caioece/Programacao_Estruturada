#include<stdio.h>

int main()
{
   int x, y, i, somatorio = 0; 
   //SE X FOR MENOR QUE Y, A META VAI SER Y//
   scanf("%d %d", &x, &y);
    if(x < y)
    {
        //I = X E FAZ O SOMATORIO ATE O Y//
        for(i=x;i<=y; i++)
        {
            if(i%13!=0)
            {
                somatorio = somatorio + i;
            }
            else
            {}
        }
    }
    //SE O X FOR MAIOR QUE Y, ENTAO COMECA DE Y E TERMINA EM X//
    if(x > y)
    {
        for(i=y;i<=x; i++)
        {
            if(i%13!=0)
            {
                somatorio = somatorio + i;
            }
            else
            {}
        }
    }
    printf("%d", somatorio);
   return 0;
}
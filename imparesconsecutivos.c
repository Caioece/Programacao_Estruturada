#include<stdio.h>

int main()
{
    int x, y;
    int i;
    int somatorio = 0;
    scanf("%d %d", &x, &y);
    if(x < y)
    {
        for(i = x+1; i < y; i++)
        {
            if(i%2!=0)
            {
                somatorio = somatorio + i;
                i++;
            }
            else{}
        }
    }    
    else if(x > y)
    {
        for( i = y+1; i < x; i++)
        {
            if(i%2!=0)
            {
                somatorio += i;
            }
            else{}
        }
    }
    printf("%d", somatorio);
}  
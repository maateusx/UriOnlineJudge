#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x,aux=0,i=1;
    scanf("%d",&n);
    do
    {
        scanf("%d",&x);
        do
        {
            if (x%i==0)
                aux=aux+i;
            i++;
        }
        while (i<x);
        if (aux==x)
        {
            if (x==1)
                printf("%d nao eh perfeito\n", x);
            else
            printf("%d eh perfeito\n", x);
        }
        else
            printf("%d nao eh perfeito\n", x);
        n--;
        i=1;
        aux=0;
    }
    while(n>0);
    return 0;
}

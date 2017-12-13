#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, i, soma=0;
    while(scanf("%d", &n)!=0)
    {
        if(n==0)
            break;
        soma=0;
        for(i=n; i>0; i--)
        {
            soma+=pow(i,2);
        }
        printf("%d\n", soma);
    }
    return 0;
}

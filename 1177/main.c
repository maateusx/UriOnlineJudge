#include <stdio.h>
#include <stdlib.h>

void vetor(int n)
{
    int i=0,x=0;
    do
    {
        if (x==n)
            x=0;
        printf("N[%d] = %d\n",i,x);
        i++;
        x++;
    } while (i<1000);
    return;
}

int main()
{
    int n;
    scanf("%d", &n);
    vetor(n);
    return 0;
}

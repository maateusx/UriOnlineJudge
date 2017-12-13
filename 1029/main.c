#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, vet[39], a, i, call[39];
    scanf("%d", &n);
    call[1]=1;
    vet[1]=vet[0]=call[0]=0;
    vet[2]=2; vet[3]=4; vet[4]=8;
    for(i=2; i<39; i++)
    {
        call[i]=call[i-1]+call[i-2];
        vet[i]=vet[i-1]+vet[i-2]+2;
    }
    while(n!=0)
    {
        scanf("%d", &a);
        printf("fib(%d) = %d calls = %d\n", a, vet[a], call[a]);
        n--;
    }
    return 0;
}

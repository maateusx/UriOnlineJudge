#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[15], i, j, a[5], b[5], m=0, n=0;

    for(i=0; i<15; i++)
    {
        scanf("%d", &vet[i]);
        if(vet[i]%2==0)
        {
            a[m]=vet[i];
            m++;
        }
        else if(vet[i]%2!=0)
        {
            b[n]=vet[i];
            n++;
        }

        if(m==5){
            for(j=0; j<5; j++)
                printf("par[%d] = %d\n", j, a[j]);
            m=0;
        }
        if(n==5){
            for(j=0; j<5; j++)
                printf("impar[%d] = %d\n", j, b[j]);
            n=0;
        }
    }

    if(n!=0)
        for(i=0; i<n; i++)
            printf("impar[%d] = %d\n", i, b[i]);
    if(m!=0)
        for(i=0; i<m; i++)
            printf("par[%d] = %d\n", i, a[i]);
    return 0;
}

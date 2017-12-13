#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, maior=0, menor=0, i , ki=0, j;
    scanf("%d", &n);
    int vet[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &vet[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<i; j++)
        {
            menor=vet[i]-vet[j];
            if(menor > maior)
                maior=menor;
        }
    }
    printf("%d\n", maior);
    return 0;
}

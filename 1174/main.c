#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vet[100];
    int i;

    for (i=0; i<100; i++)
    {
        scanf("%f", &vet[i]);

        if (vet[i]<=10.0)
        {
            if((vet[i]-(int)vet[i])==0)
                printf("A[%d] = %.0f\n", i, vet[i]);
            else
                printf("A[%d] = %.1f\n", i, vet[i]);
        }

    }
    return 0;
}

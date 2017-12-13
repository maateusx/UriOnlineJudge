#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, k=0, vet[26], j;
    while(n!=0)
    {
        scanf("%d", &n);
        if(n==0)
            break;

        for(i=0; i<26; i++)
        {
            vet[i]=65+i;
        }

        for(i=0; i<n; i++)
        {
            k=0;
            scanf("%d", &k);
            printf("%c", vet[k-1]);
            for(j=k; j>1; j--)
            {
                vet[j-1]=vet[j-2];
            }
            vet[0]=k;
        }

        printf("\n");
    }
    return 0;
}

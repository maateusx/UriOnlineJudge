#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, m, k=0;

    while(scanf("%d %d", &n, &m)!=EOF)
    {
        int vet[n+1], volt[m];
        vet[0]=0;
        for(i=1; i<=n; i++)
        {
            vet[i]=i;
        }
        for(i=0; i<m; i++)
        {
            scanf("%d", &volt[i]);
            vet[volt[i]]=0;
        }
        if(n!=m)
        {
            for(i=0; i<=n; i++)
            {
                if(vet[i]!=0)
                {
                    //if(k!=0)
                       // printf(" ");
                    printf("%d ", vet[i]);
                k=1;
                }
            }
            printf("\n");
        }
        else
            printf("*\n");

    }
    return 0;
}

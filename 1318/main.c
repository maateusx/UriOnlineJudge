#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=1, y, i, j, k, n=0;

    while(x!=0 || y!=0)
    {
        i=j=k=n=0;
        scanf("%d %d", &x ,&y);
        if(x==0 && y==0)
            break;
        int vet[y];
        for(i=0; i<y; i++)
        {
            scanf("%d", &vet[i]);
        }

        for(i=0; i<y; i++)
        {
            for(j=i; j<y; j++)
            {
                if(vet[i]!=0)
                {
                    if(n==1 && vet[i]==vet[j] && i!=j)
                    {
                        vet[j]=0;
                    }
                    if(n==0 && vet[i]==vet[j] && i!=j)
                    {
                        n++;
                        k++;
                        vet[j]=0;
                    }
                }
            }
            n=0;
        }
        printf("%d\n", k);
    }
    return 0;
}

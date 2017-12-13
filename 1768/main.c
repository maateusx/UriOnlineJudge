#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, met, k;
    char v[101];

    while(scanf("%d", &n)!=EOF)
    {
        i=j=met=k=0;
        met=(n+1)/2;
        for(i=0; i<n; i++)
            v[i]='*';

        for(i=1; i<=n; i++)
        {
            if(i%2!=0)
            {
                for(k=1; k<met; k++)
                    printf(" ");
                for(j=0; j<i; j++)
                {
                    printf("%c", v[j]);
                }
                met--;
                printf("\n");
            }
        }
        met=(n+1)/2;
        for(k=1; k<met; k++)
            printf(" ");
        printf("*\n");
        for(k=1; k<met-1; k++)
            printf(" ");
        printf("***");
        printf("\n\n");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int len(unsigned x) {
    if(x>=1000000000) return 10;
    if(x>=100000000) return 9;
    if(x>=10000000) return 8;
    if(x>=1000000) return 7;
    if(x>=100000) return 6;
    if(x>=10000) return 5;
    if(x>=1000) return 4;
    if(x>=100) return 3;
    if(x>=10) return 2;
    return 1;
}

int main()
{
    unsigned long long n, i=0, j=0, k=0, cont=4, P;

    scanf("%llu", &n);

    while(n!=0)
    {
        scanf("%llu", &k);
        int mat[k][k], maior[k];

        for(i=0; i<k; i++)
        {
            maior[i]=0;
        }

        for(i=0; i<k; i++) //ler
        {
            for(j=0; j<k; j++)
            {
                scanf("%llu", &mat[i][j]);
                mat[i][j]=pow(mat[i][j],2);
                if(mat[i][j]>maior[j])
                    maior[j]=mat[i][j];
            }
        }

        printf("Quadrado da matriz #%d:\n", cont);

        for(i=0; i<k; i++) //imprimir
        {
            P=0;
            for(j=0; j<k; j++)
            {
                P=len(maior[j])-len(mat[i][j]);
                while(P>0)
                {
                        printf(" ");
                        P--;
                }
                printf("%llu", mat[i][j]);
                if(j==k-1)
                    printf("\n");
                else
                    printf(" ");
            }
        }
        n--;
        if(n!=0)
            printf("\n");
        cont++;
    }
    return 0;
}

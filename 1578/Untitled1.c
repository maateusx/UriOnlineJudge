#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i=0, j=0, k=0, cont=4;

    scanf("%d", &n);

    while(n!=0)
    {
        scanf("%d", &k);
        int mat[k][k];

        for(i=0; i<k; i++) //ler
        {
            for(j=0; j<k; j++)
            {
                scanf("%d", &mat[i][j]);
                mat[i][j]=mat[i][j]*mat[i][j];
            }
        }

        printf("Quadrado da matriz #%d:\n", cont);

        for(i=0; i<k; i++) //imprimir
        {
            for(j=0; j<k; j++)
            {
                printf("%d", mat[i][j]);
                if(j==0)
                    printf(" ");
                if(j==1)
                    printf("\n");
            }
        }
        n--;
        cont++;
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[9][9], i, j, k, n, igual=0, l=0;

    scanf("%d", &n);

    while(n!=0)
    {
        l++;
        for(i=0; i<9; i++)
        {
            for(j=0; j<9; j++)
            {
                scanf("%d", &mat[i][j]);
            }
        }

        for(i=0; i<9; i++)
        {
            for(j=0; j<9; j++)
            {
                for(k=0; k<9; k++)
                    if(mat[i][k]==mat[i][j] || mat[])
                        igual=1;
            }
        }
        if(igual==0)
            printf("Instancia %d\nSIM \n", l);
        else
            printf("Instancia %d\nNAO \n", l);
        printf("\n");
        n--;
    }
    return 0;
}

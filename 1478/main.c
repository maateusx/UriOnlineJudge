#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i ,j;

    do
    {
        scanf("%d", &n);
        if(n==0)
            break;
        int mat[n][n];
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                mat[i][j]=j+1;
                if(i==0)
                {
                   mat[i][j]=j+1;
                }
                else if(j==0 && i!=0)
                {
                    mat[i][j]=mat[i-1][j]+1;
                }
                else if(j==n-1)
                {
                    mat[i][j]=mat[i-1][j]-1;
                }
                else
                    mat[i][j]=mat[i-1][j-1];

            }
        }

        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(j==n-1)
                    printf("%3d\n", mat[i][j]);
                else
                    printf("%3d ", mat[i][j]);
            }
        }
        printf("\n");

    }
    while(n!=0);
    return 0;
}

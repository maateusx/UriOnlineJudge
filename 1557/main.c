#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, K;

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
                if(j==0 && i==0)
                    mat[i][j]=1;

                else if(j==0 && i!=0)
                    mat[i][j]=2*mat[i-1][j];

                else
                    mat[i][j]=2*mat[i][j-1];
                if(i==n-1 && j==n-1)
                    K=mat[i][j];
            }
        }

        if(K<=9)
        {
            for(i=0; i<n; i++)
            {
                for(j=0; j<n; j++)
                {
                    if(j==n-1)
                        printf("%1d\n", mat[i][j]);
                    else
                        printf("%1d ", mat[i][j]);

                }
            }
        }
        else if(K>=10 && K<100)
        {
            for(i=0; i<n; i++)
            {
                for(j=0; j<n; j++)
                {
                    if(j==n-1)
                        printf("%2d\n", mat[i][j]);
                    else
                        printf("%2d ", mat[i][j]);

                }
            }
        }
        else if(K>=100 && K<1000)
        {
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
        }
        else if(K>=1000 && K<10000)
        {
            for(i=0; i<n; i++)
            {
                for(j=0; j<n; j++)
                {
                    if(j==n-1)
                        printf("%4d\n", mat[i][j]);
                    else
                        printf("%4d ", mat[i][j]);

                }
            }
        }
        else if(K>=10000 && K<100000)
        {
            for(i=0; i<n; i++)
            {
                for(j=0; j<n; j++)
                {
                    if(j==n-1)
                        printf("%5d\n", mat[i][j]);
                    else
                        printf("%5d ", mat[i][j]);

                }
            }
        }
        else if(K>=100000 && K<1000000)//100k - 1m
        {
            for(i=0; i<n; i++)
            {
                for(j=0; j<n; j++)
                {
                    if(j==n-1)
                        printf("%6d\n", mat[i][j]);
                    else
                        printf("%6d ", mat[i][j]);

                }
            }
        }
        else if(K>=1000000 && K<10000000)//1m - 10m
        {
            for(i=0; i<n; i++)
            {
                for(j=0; j<n; j++)
                {
                    if(j==n-1)
                        printf("%7d\n", mat[i][j]);
                    else
                        printf("%7d ", mat[i][j]);

                }
            }
        }
        else if(K>=10000000 && K<100000000)//10m-100m
        {
            for(i=0; i<n; i++)
            {
                for(j=0; j<n; j++)
                {
                    if(j==n-1)
                        printf("%8d\n", mat[i][j]);
                    else
                        printf("%8d ", mat[i][j]);

                }
            }
        }
        else if(K>=100000000)//100m
        {
            for(i=0; i<n; i++)
            {
                for(j=0; j<n; j++)
                {
                    if(j==n-1)
                        printf("%9d\n", mat[i][j]);
                    else
                        printf("%9d ", mat[i][j]);

                }
            }
        }
        printf("\n");
        K=0;
    }
    while(n!=0);

    return 0;
}

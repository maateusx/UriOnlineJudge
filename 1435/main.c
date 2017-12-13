#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, aux=0, mat[100][100];
    int i=0, j=0;

    do{
        scanf("%d", &n);
        if(n==0)
            break;
        aux=0;
        while (aux < n-aux){
            for(i=aux; i< n-aux; i++){
                mat[aux][i]= aux+1;
            }
            for(i=aux+1; i<=n/2; i++){
                mat[i][aux] = aux+1;
                mat[i][n-1-aux] = aux+1;
            }
            aux++;
        }

        if(n%2!=0){
            for(i=0; i<=n/2; i++){
                for(j=0; j<n; j++){
                    if(j==n-1)
                        printf("%3d\n", mat[i][j]);
                    else
                        printf("%3d ", mat[i][j]);
                }
            }
        } else {
            for(i=0; i<n/2; i++){
                for(j=0; j<n; j++){
                    if(j==n-1)
                        printf("%3d\n", mat[i][j]);
                    else
                        printf("%3d ", mat[i][j]);
                }
            }
        }


        for(i=n/2-1; i>=0; i--){
            for(j=n-1; j>=0; j--){
                    if(j==0)
                        printf("%3d\n", mat[i][j]);
                    else
                        printf("%3d ", mat[i][j]);
            }
        }
    printf("\n");

    } while(n!=0);
return 0;
}

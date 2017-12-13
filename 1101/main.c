#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,soma=0;
    do{
        scanf("%d %d", &m, &n);
        if (m==0 || n==0) break;
        else
        if (m>n){
            while(n<=m){
                soma=soma+n;
                printf("%d ",n);
                n++;
            }//while
            printf("Sum=%d\n",soma);
        }//if

        else if (m<n){
            while(m<=n){
                soma=soma+m;
                printf("%d ",m);
                m++;
            }//while
            printf("Sum=%d\n",soma);
        }//if
    soma=0;
    } while(m>0 && n>0);

    return 0;
}

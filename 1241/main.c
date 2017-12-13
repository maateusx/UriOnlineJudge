#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char A[1001], B[1001];
    int n, i, j, k, L1, L, cont;

    scanf("%d", &n);
    fflush(stdin);
    while(n!=0)
    {
        i=j=k=L1=L=cont=0;

        scanf("%s", A);
        scanf("%s", B);

        L=strlen(A);
        L1=strlen(B);

        if(L1>L)
        {
            printf("nao encaixa\n");
        }
        else
        {
            j=L-1;
            for(i=L1-1; i>=0; i--)
            {
                if(A[j]==B[i])
                {
                    cont++;
                }
                else
                {
                    printf("nao encaixa\n");
                    cont=0;
                    break;
                }
                j--;
            }
            if(cont==L1)
                printf("encaixa\n");
        }


        n--;
    }
    return 0;
}

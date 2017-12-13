#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, n, j, maior, soma, empate, T;
    char v[15], exp[15];

    do{
     i=j=maior=soma=empate=T=0;
        scanf("%d", &n);
        if(n==0)
            break;
        for(i=0; i<=n; i++)
        {
            soma=0;
            gets(v);

            for(j=0; j<strlen(v); j++)
            {
                soma+=v[j];
            }

            if(maior<soma)
            {
                T=strlen(v);
                strcpy(exp,v);
                maior=soma;
                empate=0;
            }

            else if(maior==soma)
            {
                empate++;
            }
        }

        if(empate!=0)
            printf("Impossibilidade de empate.\n");
        else
        {
            for(i=0; i<T; i++)
                printf("%c", exp[i]);
            printf("\n");
        }

    }while(n!=0);
    return 0;
}

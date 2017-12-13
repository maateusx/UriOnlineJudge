#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, i, cont, j, K;
    char v[51];

    scanf("%d ", &n);

    while(n!=0)
    {
        i=cont=j=K=0;
        gets(v);
        for(i=0; i<strlen(v); i++)
        {
            if(v[i]!=' ' && cont==0)
            {
                printf("%c", v[i]);
                cont++;
            }
            if(v[i]==' ')
                cont=0;
        }
        printf("\n");
        n--;
    }
    return 0;
}

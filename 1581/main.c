#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, T, i, cont;
    char exp[21], exp2[21];

    scanf("%d", &n);
    fflush(stdin);

    while(n!=0)
    {
        T=i=cont=0;
        scanf("%d", &T);

        for(i=0; i<T; i++)
        {
            scanf("%s", exp);

            if(i==0)
                strcpy(exp2, exp);

            if(strcmp(exp,exp2)!=0)
            {
                cont++;
            }
        }

        if(cont!=0)
            printf("ingles\n");
        else
        {
            puts(exp2);
        }

        n--;
    }
    return 0;
}

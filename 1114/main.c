#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i=1,n;
    do
    {
        scanf("%d", &n);
        if (n==2002)
        {
            printf("Acesso Permitido\n");
            i=0;
        }
        if (n!=2002)
            printf("Senha Invalida\n");
    }
    while(i!=0);
    return 0;
}

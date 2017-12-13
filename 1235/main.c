#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n=0, tam, i, j;
    char exp[101];

    scanf("%d", &n);
    getchar();

    while(n!=0)
    {
        gets(exp);
        tam=strlen(exp);
        if(tam%2==0)
        {
            tam=tam/2;
            tam--;
        }
        else
        {
            tam=(tam+1)/2;
            tam--;
        }
        for(i=tam; i>=0; i--)
        {
            printf("%c", exp[i]);
        }
        for(i=strlen(exp)-1; i>tam; i--)
        {
            printf("%c", exp[i]);
        }
        printf("\n");
        n--;
        tam=0;
    }
    return 0;
}

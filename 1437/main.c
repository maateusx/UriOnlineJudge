#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char vet[1000];
    int i, n, cont=0;
    while(n!=0)
    {
        scanf("%d", &n);
            if(n==0)
                break;
        scanf("%s", vet);
        for(i=0; i<n; i++)
        {
            if(vet[i]=='D')
            {
                cont++;
                if(cont>4)
                    cont=1;
            }
            else
            {
                cont--;
                if(cont<-4)
                    cont=-1;
            }
        }
        if(cont==0 || cont==4 || cont==-4)
            printf("N\n");
        if(cont==1 || cont==-3)
            printf("L\n");
        if(cont==2 || cont==-2)
            printf("S\n");
        if(cont==3 || cont==-1)
            printf("O\n");
        cont=0;
    }
    return 0;
}

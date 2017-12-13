#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, maior=0;
    while(scanf("%d", &n)!=EOF)
    {
        maior=0;
        int vet[n];
        for(i=0; i<n; i++)
        {
            scanf("%d", &vet[i]);
            if(vet[i]>maior)
                maior=vet[i];
        }
        if(maior<10)
            printf("1\n");
        else if(maior>=10 && maior<20)
            printf("2\n");
        else
            printf("3\n");
    }
    return 0;
}

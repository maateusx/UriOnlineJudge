#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet1[5], vet2[5],i;

    for(i=0; i<5; i++)
    {
        scanf("%d", &vet1[i]);
    }

    for(i=0; i<5; i++)
    {
         scanf("%d", &vet2[i]);
    }
    for(i=0; i<5; i++)
    {
        if(vet1[i]==vet2[i])
        {
            printf("N\n");
            break;
        }
        if(i==4)
            printf("Y\n");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, soma=0, i, z;

    for(z=1; z>0; z++)
    {
        scanf("%d", &x);

        if(x==0)
            break;

        for(i=0; i<5; i++)
        {
            if (x%2==0)
                soma=soma+x;
            else
                i--;
            x++;
        }

        printf("%d\n",soma);
        soma=0;

    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, i=0, n, z, soma=0;
    scanf("%d", &n);
    while(i<n)
    {
        scanf("%d %d", &x, &y);

            for(z=1; z<=y; z++)
            {
                if(x%2!=0)
                    soma=soma+x;
                else
                    z--;
                x++;
            }

        printf("%d\n", soma);
        soma=0;
        i++;
    }
    return 0;
}

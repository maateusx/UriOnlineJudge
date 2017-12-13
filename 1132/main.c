#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,soma=0;
    scanf("%d %d", &x, &y);
    if (x<y)
    {
        while (x<=y)
        {
            if (x%13!=0)
                soma=soma+x;
            x++;
        }
    }

    else while (y<=x)
        {
            if (y%13!=0)
                soma=soma+y;
            y++;
        }
    printf("%d\n", soma);
    return 0;
}

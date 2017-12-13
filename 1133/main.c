#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    scanf("%d %d", &x, &y);
    if (x<y)
    {
        x++;
        do
        {
            if(x%5==2 || x%5==3)
                printf("%d\n",x);
            x++;

        }
        while(x<y);
    }
    else if (x>y)
    {
        y++;
        do
        {
            if(y%5==2 || y%5==3)
                printf("%d\n",y);
            y++;

        }
        while(x>y);
    }
    return 0;
}

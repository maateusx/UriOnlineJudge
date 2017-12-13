#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=1, X0, Y0, x, y;


    while(n!=-1)
    {
        scanf("%d", &n);
        if(n==0)
            break;
        scanf("%d %d", &X0, &Y0);
        while(n!=0)
        {
            scanf("%d %d", &x, &y);

            if(x==X0 || y==Y0)
                printf("divisa\n");
            else if(x>X0 && y>Y0)
                printf("NE\n");
            else if(x>X0 && y<Y0)
                printf("SE\n");
            else if(x<X0 && y<Y0)
                printf("SO\n");
            else
                printf("NO\n");
            n--;
        }
    }
return 0;
}

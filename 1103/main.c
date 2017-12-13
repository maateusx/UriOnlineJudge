#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h1, m1, h2, m2, r1, r2, n=1, total = 0;

    while(n>0)
    {
        scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
            if (h1==0 && m1==0 && h2==0 && m2==0)
                break;

            if(0<=h1 && h1<=23 && 0<=m1 && m1<=59 && 0<=h2 && h2<=23 && 0<=m2 && m2<=59)
            {
                    r1=(60*h1)+m1;
                    r2=(60*h2)+m2;
                    total=r2-r1;
            }
        if(total<0)
            total= total + 1440;
        printf("%d\n", total);
        r1=r2=total=0;
    }
    return 0;
}

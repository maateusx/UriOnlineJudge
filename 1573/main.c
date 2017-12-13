#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a=1, b=1, c=1, n=0;

    while(a!=0 || b!=0 || c!=0)
    {
        scanf("%d %d %d", &a, &b, &c);
        if(a==0 && b==0 && c==0)
            break;
        n=a*b*c;
        n=cbrt(n);
        printf("%d\n", n);
    }
    return 0;
}

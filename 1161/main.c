#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long a, b, c=1, d=1;
    int i;

    while(scanf("%lld %lld", &a, &b)!=EOF)
    {
        for(i=1; i<=a; i++)
            c=c*i;
        for(i=1; i<=b; i++)
            d=d*i;

        if (a==0)
            c=1;
        if (b==0)
            d=1;
        printf("%lld\n", c+d);
        c=d=1;
    }
    return 0;
}

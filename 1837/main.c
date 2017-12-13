#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, r, q;
    scanf("%d %d", &a, &b);

    //a = b × q + r
    r = b * q - a;
    r = r * (-1);

    q = a/b - r;
    //q = trunc(a/b);
    //r = a%b;

    //if(r<0)
    //    r=r*(-1);

    printf("%d %d\n", q, r);

    return 0;
}

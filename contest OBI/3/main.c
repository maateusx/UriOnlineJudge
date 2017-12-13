#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0, cont=1;
    float a, b, n=0;
    scanf("%f %f", &a, &b);
    n = a;
    while(n<b)
    {
        cont++;
        n = n - (n/10);
        n = n + a;
    }
    printf("%d\n", cont);
    return 0;
}

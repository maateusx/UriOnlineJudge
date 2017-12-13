#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h, m, s, n, resto;
    scanf("%d", &n);
    h=n/3600;
    resto=n%3600;
    m=resto/60;
    resto=resto%60;
    printf("%d:%d:%d\n", h, m, resto);
    return 0;
}

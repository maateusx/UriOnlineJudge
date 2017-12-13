#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a,b;
    scanf("%d", &n);

    while(n!=0)
    {
        scanf("%d %d", &a, &b);
        printf("%d cm2\n", (a*b)/2);
        n--;
    }
    return 0;
}

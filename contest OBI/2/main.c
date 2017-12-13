#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i;
    scanf("%d %d", &a, &b);
    for(i=1; i<=b; i++)
    {
        if(i!=b)
            printf("%d ", a);
        else
            printf("%d\n", a);
        a=a*10;
    }
    return 0;
}

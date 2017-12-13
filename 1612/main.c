#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, p;

    scanf("%d", &n);
    while(n!=0)
    {
        if(n==0)
            break;

        scanf("%d", &p);
        if (p%2==0)
            printf("%d\n", p/2);
        else
            printf("%d\n", (p+1)/2);

        n--;
    }
    return 0;
}

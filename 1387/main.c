#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l, r, n=1;

    while(n!=0)
    {
        scanf("%d %d", &l, &r);
        if(l==0 && r==0)
            break;
        printf("%d\n", l+r);
    }
    return 0;
}

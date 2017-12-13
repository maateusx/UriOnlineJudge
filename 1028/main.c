#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a, b, z, i;

    scanf("%d", &n);

    while(n>0)
    {
        scanf("%d %d", &a, &b);
        if(a>b)
            {
                while ( z !=0 )
                {
                    z = a % b;
                    a = b;
                    b = z;
                };
                printf("%d\n", a);
        }
        else if(a<b)
        {
            while ( z !=0 )
                {
                    z = a % b;
                    a = b;
                    b = z;
                };
                printf("%d\n", a);
        }
        else if(a==b)
            printf("%d\n", a);
        n--;
        z=1;
    }
    return 0;
}

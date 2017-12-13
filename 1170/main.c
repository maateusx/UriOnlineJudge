#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a, i;
    float b;
    scanf("%d", &n);
    while(n!=0)
    {
        i=1;
        a=0;
        scanf("%f", &b);
        while(i!=0)
        {
            if(b<=1.0)
                {
                    printf("%d dias\n", a);
                    i=0;
                }
            else
            {
                b=b/2.0;
                a++;
            }
        }

        n--;
    }
    return 0;
}

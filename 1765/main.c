#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i=1;
    float a, b, c;

    while(n!=-1)
    {
        scanf("%d", &n);
        if(n==0)
            break;
        while(n!=0)
        {
            scanf("%f %f %f", &a, &b, &c);
            printf("Size #%d:\n", i);
            printf("Ice Cream Used: %.2f cm2\n", a*(((b+c)*5)/2));
            n--;
            i++;
        }
        i=1;
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,n,z=0;
    double c,d;

    scanf("%d", &n);

    do
    {

        scanf("%d %d", &a, &b);
        scanf("%lf %lf", &c, &d);

        while(a<=b)
        {
            b+=(b*d)/100;
            a+=(a*c)/100;
            z++;
            if (z>100)
            {
                printf("Mais de 1 seculo.\n");
                a+=b;

            }
        }

        if (z<=100)
        {
            printf("%d anos.\n",z);
        }

        n--;
        z=0;
    }
    while(n!=0);
    return 0;
}

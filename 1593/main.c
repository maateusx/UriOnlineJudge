#include "stdio.h"
#include "stdlib.h"
#include "conio.h"
#include "string.h"

int main()
{
    int n;
    unsigned long long a, a1, a2, a3;
    scanf("%d", &n);

    while(n!=0)
    {
        a=a1=a2=a3=0;
        scanf("%llu", &a);
        while(a!=0)
        {
            a1= a%2;
            if(a1==1)
                a2++;
            else
                a3++;
            a=a/2;
        }
        printf("%llu\n", a2);
        printf("%llu\n", a3);

    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    unsigned long long int i=0, soma=0 ,a=0, b=0, a1=0, b1=0;

    fflush(stdin);
    while(scanf("%llu %llu", &a, &b)!=EOF)
    {
        while(a!=0 || b!=0)
        {
            a1= a%2;
            a= a/2;
            b1= b%2;
            b=b/2;

            if(a1+b1==1)
                soma+= pow(2,i);
            i++;
        }
        printf("%llu\n", soma);
        a=b=a1=b1=i=soma=0;
    }
    return 0;
}

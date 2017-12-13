#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mdc=0, a, b, c, i, maior=0;
    while(scanf("%d %d %d", &a, &b, &c)!=EOF)
    {
        if(a>=b)
            maior=b;
        else if(b>=a)
            maior=a;
        if(b>=c && a>=c)
            maior=c;

        if(((a*a)==(b*b+c*c)) || ((b*b)==(a*a+c*c)) || ((c*c)==(b*b+a*a)))
        {
            for(i=1; i<=maior; i++)
            {
                if(a%i==0 && b%i==0 && c%i==0)
                    mdc=i;
            }

            if(mdc!=1)
                printf("tripla pitagorica\n");
            else
                printf("tripla pitagorica primitiva\n");
        }

        else
        {
            printf("tripla\n");
        }
        mdc=maior=0;
    }
    return 0;
}

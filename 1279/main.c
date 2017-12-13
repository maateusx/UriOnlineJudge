#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k=-1, u=0;

    while(scanf("%d", &n)!=EOF)
    {
        if(k==0)
            printf("\n");
        if((n%4 == 0 && n%100 != 0) || n%400 == 0)
        {
            printf("This is leap year.\n");
                if(n%5==0 && n%11==0)
                    k=1;
            u++;
        }

        if (n%15 == 0)
        {
            printf("This is huluculu festival year.\n");
            u++;
        }

        if (k>0)
            printf("This is bulukulu festival year.\n");

        if(u==0)
            printf("This is an ordinary year.\n");

        if(k==-1)
                printf("\n");
        k=u=0;
    }
    return 0;
}

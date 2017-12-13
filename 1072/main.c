#include <stdio.h>
#include <stdlib.h>

int main()
{
    int q,n,in=0,out=0;
    scanf("%d",&q);
    do{
        scanf("%d", &n);
        if (n>=10 && n<=20)
            in++;
        else
            out++;
        q--;
    }   while(q>0);
    printf("%d in\n%d out\n",in,out);
    return 0;
}

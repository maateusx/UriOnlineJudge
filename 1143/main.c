#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,i=1;
    scanf("%d",&n);
    do{
        printf("%d %d %d\n",i,i*i,i*i*i);
        i++;
        n--;
    } while(n>0);
    return 0;
}

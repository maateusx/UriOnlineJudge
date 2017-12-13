#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=1;
    scanf("%d",&n);
    do{
    printf("%d x %d = %d\n",i,n,i*n);
    i++;
    } while(i<=10);
    return 0;
}

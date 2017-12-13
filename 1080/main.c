#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,p=0,i=1,maior=0;
    do{
        scanf("%d", &n);
        if (n>maior)
        {
            maior=n;
            p=i;
        }
    i++;
    } while (i<=100);
    printf("%d\n%d\n",maior,p);
    return 0;
}

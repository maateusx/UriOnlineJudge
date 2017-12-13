#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    scanf("%d", &n);
    while(n!=0)
    {
        printf("Ho");
        if(n!=1)
            printf(" ");
        n--;
    }
    printf("!\n");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a;

    scanf("%d", &a);

    while(a!=0){
        scanf("%d", &n);
        if(n%2 == 0)
            printf("0\n");
        else
            printf("1\n");

        a--;
    }
    return 0;
}

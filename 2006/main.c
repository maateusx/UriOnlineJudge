#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, igual = 0, i;
    scanf("%d", &a);

    for(i=0; i<5; i++){
        scanf("%d", &b);
        if(b == a)
            igual++;
    }
    printf("%d\n", igual);
    return 0;
}

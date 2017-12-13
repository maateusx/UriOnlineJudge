#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia, hr, min, seg;
    char aux;

    scanf("%c %c %c %d %d %c %d &c %d",&aux,&aux,&aux,&dia,&hr,&aux,&min,&aux,&seg);
    printf("%d %d %d %d", dia, hr, min, seg);

    return 0;
}

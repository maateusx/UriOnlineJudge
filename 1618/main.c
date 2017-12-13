#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, ax, ay, bx, by, cx, cy, dx, dy, rx, ry;
    scanf("%d", &n);

    while(n!=0)
    {
        scanf("%d %d %d %d %d %d %d %d %d %d", &ax, &ay, &bx, &by, &cx, &cy, &dx, &dy, &rx, &ry);
            if (rx>=ax && ry>=ay && rx<=bx && ry>=by && rx>=dx && ry<=dy && rx<=cx && ry<=cy)
                printf("1\n");
            else
                printf("0\n");
    n--;
    }

    return 0;
}

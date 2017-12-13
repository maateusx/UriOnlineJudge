#include <stdio.h>
#include <stdlib.h>

int main()
{
    int gre=0,inter=0,j=0,emp=0,i,x,y;
    do
    {
        scanf("%d %d", &x, &y);
        if (x>y)
            inter++;
        else if (y>x)
            gre++;
        else
            emp++;
        j++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&i);
    } while(i!=2);
    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n",j,inter,gre,emp);
    if (inter>gre)
        printf("Inter venceu mais\n");
    if (inter<gre)
        printf("Gremio venceu mais\n");
    return 0;
}

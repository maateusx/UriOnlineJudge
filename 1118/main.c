#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,j=1,d;
    float x,y;
    do
    {
        do
        {
            scanf("%f",&x);

            if(x>=0 && x<=10)
                i=-1;
            else
                //if (x<0 || x>10)
            {
                printf("nota invalida\n");
            }
            // else if (x==2)
            //     d=2;
        }
        while(i>0);

        do
        {
            scanf("%f",&y);

            if(y>=0 && y<=10)
                j=-1;

            else //if (y<0 || y>10)
            {
                printf("nota invalida\n");
            }
            // else if (y==2)
            //    d=2;
        }
        while(j>0);
        printf("media = %.2f\n", (x+y)/2);
        do
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &d);
        }
        while(d!=1 && d!=2);
        i=1;j=1;
    }
    while(d!=2);
    return 0;
}

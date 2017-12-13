#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x, y;
    scanf("%d", &n);

    while(n!=0)
    {
        scanf("%d %d", &x, &y);

        if( ((3*x*3*x) + (y*y)) > (-100*x + (y*y*y)) && ((3*x*3*x) + (y*y)) > (2*(x*x) + ((5*y)*(5*y))) )
            printf("Rafael ganhou\n");
        else if( ((3*x*3*x) + (y*y)) < (-100*x + (y*y*y)) && (-100*x + (y*y*y)) > (2*(x*x) + ((5*y)*(5*y))) )
            printf("Carlos ganhou\n");
        else if( ((2*(x*x)) + ((5*y)*(5*y))) > (-100*x + (y*y*y)) && ((3*x*3*x) + (y*y)) < (2*(x*x) + ((5*y)*(5*y))) )
            printf("Beto ganhou\n");

        n--;
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, i, j, X, Y, X2, Y2;

    do{
        scanf("%d %d", &X, &Y);
        if(X==0 && Y==0)
            break;
        char v[X*Y];
        for(i=0; i<(X*Y); i++)
        {
            scanf("%c", &v[i]);
            printf("%c", v[i]);
        }
        printf("alo");
    }while(X!=0 && Y!=0);

    return 0;
}

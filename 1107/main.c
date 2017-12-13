#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    int i;

    while(scanf("%d %d", &a, &b)!=0){
        if(a==0 && b ==0)
            break;

        int v[b];
        int soma, d;
        soma  = d = 0;

        for(i=0; i<b; i++)
        {
            scanf("%d", &v[i]);
            if(i>0){
                d = v[i]-v[i-1];
                if(d>0)
                    soma+=d;
            }
        }
        d = a - v[b-1];
        if(d>0)
            soma+=d;

        printf("%d\n", soma);

    }
    return 0;
}

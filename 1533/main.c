#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, v[10001], maior, maior2, pos, pos2;

    do{
    i=j=maior=maior2=pos=pos2=0;
        scanf("%d", &n);

        if(n==0)
            break;

        for(i=0; i<n; i++)
        {
            scanf("%d", &v[i]);
            if(v[i]>maior)
            {
                pos2=pos;
                maior2=maior;
                maior=v[i];
                pos=i+1;

            }
            else if(v[i]>maior2 && v[i]<maior)
            {
                maior2=v[i];
                pos2=i+1;
            }
        }
        printf("%d\n", pos2);
    }while(n!=0);

    return 0;
}

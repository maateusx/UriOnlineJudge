#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, QT, S, aux=0, V=0, j=0, K=0, pos=0;
    scanf("%d", &n);

    while(n!=0)
    {
        scanf("%d %d", &QT, &S);
        for(i=1; i<=QT; i++)
        {
            scanf("%d", &V);

            if(V==S && j==0)
            {
                j=1;
                pos=i;
            }

            else if(V>S && j==0)
            {
                aux=V;
                aux=aux-S;

                if(aux<K || K==0)
                {
                    K=aux;
                    pos=i;
                }
            }

            else if(V<S && j==0)
            {
                aux=V;
                aux=S-aux;

                if(aux<K || K==0)
                {
                    K=aux;
                    pos=i;
                }
            }

        }

        printf("%d\n", pos);
         i=QT=S=aux=V=j=K=pos=0;
        n--;
    }
    return 0;
}

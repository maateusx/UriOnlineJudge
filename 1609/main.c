#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, a, s, k=0;
    scanf("%d", &n);

    while(n!=0)
    {
        if (n==0)
            break;

        scanf("%d", &a);
        int v[a];


        s=k=0;
        for(i=0; i<a; i++)
            scanf("%d", &v[i]);

        for(i=0; i<a; i++)
        {
            if(v[i]!=-1)
            {
                for(j=i; j<a; j++)
                {
                    if(v[j]!=-1)
                    {
                        if(v[i]==v[j] && i!=j)
                            {
                                v[j]=-1;
                                s++;
                            }
                        s++;
                    }
                }
            }
        }
        printf("%d\n", s/2);
        n--;
       // free(v);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[5], i, K, k, n;

    while(scanf("%d", &n)!=0)
    {
        if(n==0)
            break;

        while(n!=0)
        {
            if(n==0)
                break;

            K=k=0;
            scanf("%d %d %d %d %d", &v[0], &v[1], &v[2], &v[3], &v[4]);

            for(i=0; i<5; i++)
            {
                if(v[i]<=127)
                {
                    K=i;
                    k++;
                }
            }

            if(k==1)
            {
                if(K==0)
                    printf("A\n");
                else if(K==1)
                    printf("B\n");
                else if(K==2)
                    printf("C\n");
                else if(K==3)
                    printf("D\n");
                else if(K==4)
                    printf("E\n");
            }
            else
                printf("*\n");
            n--;
        }
    }
    return 0;
}

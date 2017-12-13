#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned  long int N=1, i, soma=0, n;

    while(scanf("%lu",&n)!=EOF){

        for(i=1; i<=n; i++)
        {
            N=N*i;
        }

        for(i=1; i<N; i++)
        {
            if(N%i == 0)
                soma=soma+i;
        }

        printf("%lu %lu\n", soma, N);
        soma=0;
        N=1;

    }

    return 0;
}

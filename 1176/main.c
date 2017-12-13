#include <stdio.h>
#include <stdlib.h>

int main()
{
    double vet[61];
    int n, i,k;
    scanf("%d", &n);
    vet[0]=0;
    vet[1]=1;

    for(i=2; i<61; i++){
            vet[i]=vet[i-1]+vet[i-2];
    }

    while(n!=0){
        scanf("%d", &k);
        printf("Fib(%d) = %0.f\n", k, vet[k]);
        n--;
    }
    return 0;
}

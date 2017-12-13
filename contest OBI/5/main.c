#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, maior=0, k=1, a, i;
    scanf("%d", &n);
    while(n!=0)
    {
        scanf("%d", &a);
        int vet[a];
        for(i=0; i<a; i++)
        {
            scanf("%d", &vet[i]);
            if(vet[i]>maior)
                maior=vet[i];
        }
        printf("Case %d: %d\n", k, maior);
        k++;
        maior=0;
        n--;
    }
    return 0;
}

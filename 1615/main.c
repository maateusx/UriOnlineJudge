#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a, i, j, cand, vet[11], maior, vet2[100001];
    double b, k;
    scanf("%d", &n);
    while(n!=0)
    {
        a=b=i=j=maior=cand=0;

        for(i=0; i<11; i++)
        {
            vet[i]=0;
        }

        scanf("%d %lf", &a, &b);

        for(i=0; i<b; i++)
        {
            scanf("%d", &vet2[i]); //le
            for(j=0; j<a; j++)
            {
                if(vet2[i]==j+1) //se o voto vet2 for = cand j
                {
                    vet[j]++; //conta os votos
                    break;
                }
            }
        }

        for(i=0; i<a; i++)
        {
            if(vet[i]>maior) //numero de votos maior
            {
                maior=vet[i]; //guarda numero de votos
                cand=i+1; //guarda o numero do cand
            }
            else if(vet[i]==maior) //numero de votos cand I = maior
            {
                cand=-1;
            }
        }
        k = maior;
        if (maior>b/2)
        {
            printf("%d\n", cand);

        }
        else
            printf("-1\n");
        n--;
    }
    return 0;
}

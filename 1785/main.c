#include <stdio.h>
#include <stdlib.h>

/*int krapekar(int X)
{

    int cnt = 0;

    while (X != 6174)
    {

        int maior = maior_numero_com_digitos_de(X);

        int menor = menor_numero_com_digitos_de(X);

        X = maior - menor;

        cnt = cnt + 1;

    }

    return cnt;*/

//}

int menor_numero_com_digitos_de(int X)
{
    int i, j, K, vet[5], f[5];

    if(X<10)
    {
        vet[0]=X%10;
        vet[1]=0;
        vet[2]=0;
        vet[3]=0;
    }
    else if(X<100)
    {
        vet[0]=X%10;
        X=X/10;
        vet[1]=X%10;
        vet[2]=0;
        vet[3]=0;
    }
    else if(X<1000)
    {
        vet[0]=X%10;
        X=X/10;
        vet[1]=X%10;
        X=X/10;
        vet[2]=X%10;
        vet[3]=0;
    }
    else if(X<10000)
    {
        vet[0]=X%10;
        X=X/10;
        vet[1]=X%10;
        X=X/10;
        vet[2]=X%10;
        X=X/10;
        vet[3]=X%10;
    }

    int menor=1000;
    for(j=0; j<4; j++)
    {
        for(i=0; i<4; i++)
        {
            if(menor<vet[i] && vet[i]!=-1)
            {
                menor=vet[i];
                K=i;
            }
        }
        f[j]=menor;
        vet[K]=-1;
        K=0;
    }

    X=f[0]*10+f[1];
    X=X*10+f[2];
    X=X*10+f[3];
    return X;
}

int maior_numero_com_digitos_de(int X)
{
    int i=0, j=0, K=0, vet[5], f[5];

    if(X<10)
    {
        X=X*1000;
        return X;
    }
    else if(X<100)
    {
        vet[0]=X%10;
        X=X/10;
        vet[1]=X%10;
        if(vet[0]>vet[1])
        {
            X=vet[0]*1000 + vet[1]*100;
            return X;
        }
        else
        {
            X=vet[1]*1000 + vet[0]*100;
            return X;
        }
    }
    else if(X<1000)
    {
        vet[0]=X%10;
        X=X/10;
        vet[1]=X%10;
        X=X/10;
        vet[2]=X%10;
        vet[3]=0;
    }
    else if(X<10000)
    {
        vet[0]=X%10;
        X=X/10;
        vet[1]=X%10;
        X=X/10;
        vet[2]=X%10;
        X=X/10;
        vet[3]=X%10;
    }

    printf("%d %d %d %d", vet[0], vet[1], vet[2], vet[3]);

    int maior=0;
    for(j=0; j<4; j++)
    {
        printf("alo");
        for(i=0; i<4; i++)
        {
            printf("\nalo2");
            if(maior>vet[i] && vet[i]!=-1)
            {
                maior=vet[i];
                K=i;
            }
        }
        printf("saiu\n");
        f[j]=maior;
        vet[K]=-1;
        K=maior=0;
    }

    X=f[0]*10+f[1];
    X=X*10+f[2];
    X=X*10+f[3];
    return X;
}

int main()
{
    int x, n, i=1;

    scanf("%d", &n);
    while(n!=0)
    {
        scanf("%d", &x);
        //x=krapekar(x);
        int maior = maior_numero_com_digitos_de(x);
        printf("maior %d\n", maior);
        int menor = menor_numero_com_digitos_de(x);
        printf("menor %d\n", menor);
        printf("Caso #%d: %d\n", i, x);
        n--;
        i++;
    }
    return 0;
}

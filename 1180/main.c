#include <stdio.h>
#include <stdlib.h>

void funcao(int n)
{
    int x,pos=0, menor=0,i=0;
    do{
        scanf("%d",&x);
            if(x<menor)
            {
            menor=x;
            pos=i;
            }
        i++;
    } while (i<n);
    printf("Menor valor: %d\nPosicao: %d\n",menor,pos);

}

int main()
{
    int n;
    scanf("%d", &n);
    funcao(n);
    return 0;
}

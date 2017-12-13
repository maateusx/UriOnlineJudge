#include <stdio.h>
#include <stdlib.h>

int main()
{
    int gas=0,dis=0,alc=0,x;
    do{
        scanf("%d", &x);
        if(x==1)
            alc++;
        else if(x==2)
            gas++;
        else if(x==3)
            dis++;
    }
    while(x!=4);
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",alc,gas,dis);
    return 0;
}

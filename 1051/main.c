#include <stdio.h>
#include <stdlib.h>

int main()
{
        float s=0,juros=0;
    scanf("%f", &s);
    if (s<=2000)
        printf("Isento\n");

    else
    {
        if (s>2000.01 && s<=3000.00)
        {
            juros=(s-2000)*0.08;
        }
        else if (s>3000.01 && s<=4500.00)
        {
            juros=((s-3000)*0.18)+80;
        }
        else if (s>=4500.01)
        {
            juros=((s-4500)*0.28)+350;
        }
        printf("R$ %.2f\n",juros);
    }
    return 0;
}

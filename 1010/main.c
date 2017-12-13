#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cp1, np1, cp2, np2;
    float p1, p2, soma;
    scanf("%d %d %f %d %d %f", &cp1, &np1, &p1, &cp2, &np2, &p2);
    soma = (np1 * p1) + (np2 * p2);
    printf("VALOR A PAGAR: R$ %.2f\n", soma);
    return 0;
}

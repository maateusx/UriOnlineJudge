#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    float b, total;

    scanf("%d %f", &a, &b);

switch (a)
{
    case 1:
    total=4.0*b;
    printf("Total: R$ %.2f\n", total);
    break;

    case 2:
    total=4.50*b;
    printf("Total: R$ %.2f\n", total);
    break;

    case 3:
    total=5.00*b;
    printf("Total: R$ %.2f\n", total);
    break;

    case 4:
    total=2.00*b;
    printf("Total: R$ %.2f\n", total);
    break;

    case 5:
    total=1.50*b;
    printf("Total: R$ %.2f\n", total);
    break;

}

return 0;
}

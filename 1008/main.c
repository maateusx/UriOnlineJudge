#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NUMBER, h;
    float SALARY;
    scanf("%d %d %f", &NUMBER, &h, &SALARY);
    SALARY = h*SALARY;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", NUMBER, SALARY);
    return 0;
}

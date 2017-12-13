#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salario, vendas;
    char nome[4];
    scanf("%s %lf %lf", &nome, &salario, &vendas);
    salario= ((vendas*15)/100) + salario;
    printf("TOTAL = R$ %.2lf\n", salario);
    return 0;
}

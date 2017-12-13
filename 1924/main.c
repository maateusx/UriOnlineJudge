#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    char vet[1000];

    scanf("%d", &n);

    while(n!=0) {
        scanf(" %1000[^\n]*c", vet);
        n--;
    }
    printf("Ciencia da Computacao\n");
    return 0;
}

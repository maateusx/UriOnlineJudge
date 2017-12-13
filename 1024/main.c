#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char vet[1000], b[1000];
    int i, k, n, j, A;
    i=j=A=0;

    scanf("%d ", &n);

    while(n!=0)
    {
        i=j=A=k=0;
        gets(vet);
        j=strlen(vet);
        A=strlen(vet);
        j--;

        for(i=0; i<=j; i++) //1 passada
        {
            k=vet[i];
            if((k>=65 && k<=90) || (k>=97 && k<=122)) //letras maiuscula e minuscula
            {
                k=k + 3;
                vet[i]=k;
            }
        }//certo

        k=0;
        j=strlen(vet);
        b[j]='\0';
        j--;
        for(i=0; vet[i]!='\0'; i++) //2 passada - inverter
        {
            b[j]=vet[i];
            j--;
        }//certo

        for(i=0; i<strlen(vet); i++)
        {
            vet[i]=b[i];
        }
        vet[A]='\0';

        k=trunc(strlen(vet)/2);

        for(i=k; vet[i]!='\0'; i++) //terceira
        {
            A=0;
            A=vet[i];
            A=A-1;
            vet[i]=A;
        }

        puts(vet);
        n--;
    }
    return 0;
}

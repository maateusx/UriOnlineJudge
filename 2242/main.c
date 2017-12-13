#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char v[51];
    fflush(stdin);
    gets(v);

    int i, j=0, deuerrado = 0;
    char aux[51];
    for(i=0; i<strlen(v); i++){
        if(v[i] == 'a' || v[i] == 'e' || v[i] == 'i' || v[i] == 'o' || v[i] == 'u'){
            aux[j]=v[i];
            j++;
        }
    }
    j--;
    for(i=0;i<j; i++){
        if(aux[j] != aux[i])
            deuerrado++;
        j--;
    }

    if(deuerrado==0)
        printf("S\n");
    else
        printf("N\n");
    return 0;
}

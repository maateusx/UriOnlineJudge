#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, m2, m3, m4, m5;
    i = m2 = m3 = m4 = m5 = 0;
    scanf("%d", &n);

    int v[n];

    for(i=0; i<n; i++){
        scanf("%d", &v[i]);
        if(v[i]%2 == 0)
            m2++;
        if(v[i]%3 == 0)
            m3++;
        if(v[i]%4 == 0)
            m4++;
        if(v[i]%5 == 0)
            m5++;
    }
    printf("%d Multiplo(s) de 2\n", m2);
    printf("%d Multiplo(s) de 3\n", m3);
    printf("%d Multiplo(s) de 4\n", m4);
    printf("%d Multiplo(s) de 5\n", m5);
    return 0;
}

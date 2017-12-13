#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, certo = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(a<b+c) {//A B C
        if(b<c+a) {//b
            if(c<a+b) {//c
                certo++;
            }
        }
    }

    if(certo==0 && a<b+d) {//A B D
        if(b<d+a) {
            if(d<a+b) {
                certo++;
            }
        }
    }

    if(certo==0 && a<d+c) {//A C D a<b+c, b<c+a, c<b+a
        if(d<c+a) {
            if(c<a+d) {
                certo++;
            }
        }
    }

    if(certo == 0 && d<b+c) {//B C D a<b+c, b<c+a, c<b+a
        if(b<c+d) {
            if(c<d+b) {
                certo++;
            }
        }
    }

    if(certo!=0)
        printf("S\n");
    else
        printf("N\n");
    return 0;
}

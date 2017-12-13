#include<stdio.h>
#include<stdlib.h>

int main()
{
    int H1, M1, S1, H2, M2, S2, N_DIAS, N_HORAS, N_MINUTOS, N_SEGUNDOS, DIA_B, DIA_F, S_TOTAL, T1, T2;
    char DIA1[30], DIA2[30];

    scanf("%s %d\n%d : %d : %d", &DIA1, &DIA_B, &H1, &M1, &S1);
    scanf("%s %d\n%d : %d : %d", &DIA2, &DIA_F, &H2, &M2, &S2);

    if (DIA_B == DIA_F) {
        T1 = (H1 * 3600) + (M1 * 60) + S1;
        T2 = (H2 * 3600) + (M2 * 60) + S2;
        S_TOTAL = T2 - T1;
    }
    else {
        T1 = (H1 * 3600) + (M1 * 60) + S1;
        T2 = (H2 * 3600) + (M2 * 60) + S2;
        S_TOTAL = (T2 - T1) + ((DIA_F - DIA_B) * 86400);
    }

    N_DIAS = S_TOTAL / 86400;
    S_TOTAL = S_TOTAL - (N_DIAS * 86400);
    N_HORAS = S_TOTAL / 3600;
    S_TOTAL = S_TOTAL - (N_HORAS * 3600);
    N_MINUTOS = S_TOTAL / 60;
    N_SEGUNDOS = S_TOTAL - (N_MINUTOS * 60);

    system("cls");
    printf("%ddia(s)\n", N_DIAS);
    printf("%dhora(s)\n", N_HORAS);
    printf("%dminuto(s)\n", N_MINUTOS);
    printf("%dsegundo(s)\n", N_SEGUNDOS);
    return 0;
}

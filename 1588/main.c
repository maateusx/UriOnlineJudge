#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct time{
    char nome[100];
    int pontos;
    int vitorias;
    int gols;
    int ordem;
}Time;

int main()
{
    int n, x, y, g1, g2, k, i, j, maior;
    char t1[100], t2[100];
    setbuf(stdin, NULL);
    scanf("%d", &n);
    while(n!=0)
    {
        x=y=g1=g2=k=i=maior=j=0;
        scanf("%d %d", &x, &y);
        Time vet[x];
        for(i=0; i<x; i++)
        {
            scanf("%s", &vet[i].nome);
            vet[i].pontos=0;
            vet[i].gols=0;
            vet[i].vitorias=0;
            vet[i].ordem=i+1;
        }

        for(i=0; i<y; i++)
        {
            scanf("%d %s %d %s", &g1, &t1, &g2, &t2);


            if(g1>g2) // time 1 ganhou
            {
                k=PesquisaBinaria(vet, t1, y);
                vet[k].pontos += 3;
                vet[k].vitorias++;
                vet[k].gols += g1;

                k=PesquisaBinaria(vet, t2, y);
                vet[k].gols += g2;
            }
            else if(g2 > g1) //time 2 ganhou
            {
                k=PesquisaBinaria(vet, t2, y);
                vet[k].pontos += 3;
                vet[k].vitorias++;
                vet[k].gols += g2;

                k=PesquisaBinaria(vet, t1, y);
                vet[k].gols += g1;
            }
            else if(g1==g2) // empate
            {
                k=PesquisaBinaria(vet, t1, y);
                vet[k].pontos++;
                vet[k].gols += g1;

                k=PesquisaBinaria(vet, t2, y);
                vet[k].pontos++;
                vet[k].gols += g2;
            }
        }
        for(i=0; i<x; i++)
        {
            maior = i;
            for(j=0; j<x; j++)
            {
                if(vet[maior].pontos < vet[j].pontos)
                    maior=j;
                else if(vet[maior].vitorias < vet[j].vitorias)
                    maior=j;
                else if(vet[maior].gols < vet[j].gols)
                    maior=j;
                else if(vet[maior].ordem > vet[j].ordem || vet[maior].ordem==0)
                    maior=j;
            }
            printf("%s\n", vet[maior].nome);
            vet[maior].pontos = -1;
            vet[maior].ordem = 0;
        }
        n--;
    }
    return 0;
}

int PesquisaBinaria (Time vet[], char chave[], unsigned Tam)
{
     int inf = 0; //Limite inferior      (o primeiro elemento do vetor em C é zero)
     int sup = Tam-1; //Limite superior    (termina em um número a menos 0 à 9 são 10 numeros )
     int meio;
     while (inf <= sup)
     {
          meio = (inf + sup)/2;
          if (strcmp(chave,vet[meio].nome) == 0)
               return meio;
          else if (strcmp(chave ,vet[meio].nome) > 0)
               sup = meio-1;
          else
               inf = meio+1;
     }
     return -1;   // não encontrado
}

#include <stdio.h>

int main(void)
{
   long long int reais, centavos, cont_100, cont_50, cont_20, cont_10, cont_5, cont_2,
       cont_1, cont_50_cent, cont_25_cent, cont_10_cent, cont_5_cent, cont_1_cent;
   float entrada;

   scanf("%f", &entrada);

   reais = (int) entrada;
   centavos = (int) ((entrada - reais)*100);

   // zerando os contadores
   cont_100 = cont_50 = cont_20 = cont_10 = cont_5 = cont_2 = cont_1 =
           cont_50_cent = cont_25_cent = cont_10_cent = cont_5_cent = cont_1_cent = 0;

   // processamento da parte inteira
   cont_100 = reais/100;
   reais %= 100;

   cont_50 = reais/50;
   reais %= 50;

   cont_20 = reais/20;
   reais %= 20;

   cont_10 = reais/10;
   reais %= 10;

   cont_5 = reais/5;
   reais %= 5;

   cont_2 = reais/2;
   reais %= 2;

   cont_1 = reais;

   // processamento da parte fracionária (centavos)
   cont_50_cent = centavos/50;
   centavos %= 50;

   cont_25_cent = centavos/25;
   centavos %= 25;

   cont_10_cent = centavos/10;
   centavos %= 10;

   cont_5_cent = centavos/5;
   centavos %= 5;

   cont_1_cent = centavos;

   // saída
   puts("NOTAS:");
   printf("%lld nota(s) de R$ 100.00\n", cont_100);
   printf("%lld nota(s) de R$ 50.00\n", cont_50);
   printf("%lld nota(s) de R$ 20.00\n", cont_20);
   printf("%lld nota(s) de R$ 10.00\n", cont_10);
   printf("%lld nota(s) de R$ 5.00\n", cont_5);
   printf("%lld nota(s) de R$ 2.00\n", cont_2);
   puts("MOEDAS:");
   printf("%lld moeda(s) de R$ 1.00\n", cont_1);
   printf("%lld moeda(s) de R$ 0.50\n", cont_50_cent);
   printf("%lld moeda(s) de R$ 0.25\n", cont_25_cent);
   printf("%lld moeda(s) de R$ 0.10\n", cont_10_cent);
   printf("%lld moeda(s) de R$ 0.05\n", cont_5_cent);
   printf("%lld moeda(s) de R$ 0.01\n", cont_1_cent);

   return 0;
}

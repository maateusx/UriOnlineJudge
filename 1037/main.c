#include <stdlib.h>
#include <stdio.h>

int main() {
   float num;
   scanf("%f", &num);
   if (num < 0 || num > 100)
      printf("Fora de intervalo\n");
   else
      if (num >= 75.0000000)
         printf("Intervalo (75, 100]\n");
      else
         if (num >= 50.0000000)
            printf("Intervalo (50, 75]\n");
         else
            if (num >= 25.0000000)
               printf("Intervalo (25, 50]\n");
            else
               printf("Intervalo [0, 25]\n");
   return 0;
}

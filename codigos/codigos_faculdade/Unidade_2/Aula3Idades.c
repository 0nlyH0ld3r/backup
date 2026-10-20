#include <stdio.h>
int main() {
  float idade[100], media = 0;
  int divisor = 0;
  for (int i = 0; i <= 100 - 1; i++) {
    printf("Digite a idade de alguém (-1 irá parar o programa e calcular as "
           "médias): ");
    scanf("%f", &idade[i]);
    if (idade[i] == -1) {
      for (int a = 0; a <= (i - 1); a++) {
        media += idade[a];
        divisor = i;
      }
      media /= divisor;
      printf("A média aritmética das %d idades é: %.2f\n", i, media);
      break;
    }
  }
}

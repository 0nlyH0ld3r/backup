#include <stdio.h>

#define TAMANHO_VETOR 8

int main() {
  int vetor[8];
  int x;
  for (int i = 0; i < TAMANHO_VETOR; ++i) {
    printf("Digite um total de 8 números em qualquer ordem. Vamos organizar o "
           "vetor\n");
    scanf("%d", &vetor[i]);
  }

  for (int k = 0; k < TAMANHO_VETOR; ++k) {
    for (int i = 0; i < TAMANHO_VETOR - 1; ++i) {
      if (vetor[i] > vetor[i + 1]) {
        x = vetor[i + 1];
        vetor[i + 1] = vetor[i];
        vetor[i] = x;
      }
    }
  }

  for (int i = 0; i < TAMANHO_VETOR; ++i) {
    printf("vetor[%d] = %8d\n", i, vetor[i]);
  }
}

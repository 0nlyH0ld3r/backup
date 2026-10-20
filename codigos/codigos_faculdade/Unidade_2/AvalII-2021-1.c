#include <stdio.h>

#define TAMANHO_VETOR 10

// Checando exclusividade dos items de um vetor para outro e imprimindo somente
// os exclusivos do primeiro vetor. Tem outras coisas aí tbm, mas eu n lembro e
// tá meio incompleto
int main() {
  int vetor1[TAMANHO_VETOR], vetor2[TAMANHO_VETOR], exclusivo,
      resultado[TAMANHO_VETOR];
  for (int i = 0; i < TAMANHO_VETOR; ++i) {
    printf("Digite 10 valores para o vetor: \n");
    scanf("%d", &vetor1[i]);
    printf("Digite 10 valores para o segundo vetor: \n");
    scanf("%d", &vetor2[i]);
  }
  for (int i = 0; i < TAMANHO_VETOR; ++i) {
    exclusivo = 1;
    resultado[i] = vetor1[i] + vetor2[i];
    for (int j = 0; j < TAMANHO_VETOR && exclusivo; ++j) {
      exclusivo = (vetor1[i] == vetor2[j]) == 0;
    }
    if (exclusivo) {
      printf("vetor1[%d]: %d\n", i, vetor1[i]);
    }
    /* printf("vetor1[%d]: %d\nvetor2[%d]: %d\nresultado[%d]: %d\n\n", i,
           vetor1[i], i, vetor2[i], i, resultado[i]); */
  }
}

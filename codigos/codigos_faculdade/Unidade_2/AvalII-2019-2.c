#include <stdio.h>

// Checar o número de combinações de números seguidos em um array somados que
//     resultam em um número X

int main() {
  int vetor[100];
  int tamanho_vetor, subsequencias = 0, x;
  printf("Digite um número N para o tamanho da sequência: ");
  scanf("%d", &tamanho_vetor);
  for (int i = 0; i < tamanho_vetor; ++i) {
    printf("Digite um número inteiro para a sequência de números: ");
    scanf("%d", &vetor[i]);
  }

  printf("Digite um valor X: \n");
  scanf("%d", &x);

  for (int j, i = 0; i < tamanho_vetor; ++i) {
    j = tamanho_vetor - 1 - i;
    int soma = 0;
    for (; j >= 0; --j) {
      soma += vetor[j];
      if (soma == x) {
        ++subsequencias;
        break;
      } else if (soma > x) {
        break;
      }
    }
  }
  printf("A sequência de números N = %d possui %d subsequências cuja soma dos "
         "números é igual a %d\n",
         tamanho_vetor, subsequencias, x);
}

// Somar divisor de todos os antecessores do número e ele mesmo,
//     adicionar cada soma em uma posição de um vetor

int main() {
  int N, n = 1, a[100];
  scanf("%d", &N);
  for (; n <= N; ++n) {
    int soma = 0;
    for (int divisor = 1; divisor <= n; ++divisor) {
      if (n % divisor == 0) {
        soma += divisor;
      }
    }
    a[n - 1] = soma;
  }
  for (int i = 0; i < N; ++i) {
    printf("%d\n", a[i]);
  }
}

#include <stdio.h>

int main() {
  int janela[600] = {0};
  int fim_janela[3], comprimento_janela[3];
  for (int i = 0; i < 3; i++) {
    printf("Digite a posicao X e o comprimento L da folha F%d: ", i + 1);
    scanf("%d %d", &fim_janela[i], &comprimento_janela[i]);

    int inicio = fim_janela[i] + comprimento_janela[i];

    for (int j = inicio; j < fim_janela[i]; j++) {
      if (j >= 0 && j < 600) {

        janela[j] = 1;
      }
    }
  }
  int comprimento_aberto = 0;
  for (int j = 0; j < 600; j++) {
    if (janela[j] == 0) {
      comprimento_aberto++;
    }
  }
  int area_aberta = comprimento_aberto * 100;
  printf("\nArea total aberta da janela: %d cm2\n", area_aberta);
}

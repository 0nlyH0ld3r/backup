#include <stdio.h>

#define MAXIMO 1000

int main() {
  int numero, impar_consecutivo = 1, raiz_numero = 0;
  printf("Deseja calcular a raiz quadrada de qual número?\nNúmero: ");
  scanf("%d", &numero);
  while (numero > 0) {
    if (impar_consecutivo % 2 != 0) {
      numero -= impar_consecutivo;
      ++raiz_numero;
    }
    ++impar_consecutivo;
  }
  printf("A raiz do seu número é: %d", raiz_numero);
}

int main2() {
  int numero, gemeo_do_numero, numero_de_pares;
  int divisor, eh_primo;

  numero = 2;
  scanf("%d", &numero_de_pares);

  for (int i = 0; i < numero_de_pares;) {
    eh_primo = 1;
    divisor = 2;
    gemeo_do_numero = numero + 2;
    for (; divisor <= numero / 2 && eh_primo; ++divisor) {
      if (numero % divisor == 0) {
        eh_primo = 0;
      }
    }
    if (eh_primo) {
      divisor = 2;
      for (; divisor <= gemeo_do_numero / 2 && eh_primo; ++divisor) {
        if (gemeo_do_numero % divisor == 0) {
          eh_primo = 0;
        }
      }
      if (eh_primo) {
        printf("%d e %d são pares gêmeos\n", numero, gemeo_do_numero);
        ++i;
      }
    }
    ++numero;
  }
}

int main3() {
  int soma = 0, N, reciproco = 1;
  printf("Digite o n-Nésimo número triangular: ");
  scanf("%d", &N);
  for (; reciproco <= N; ++reciproco) {
    soma += reciproco;
    printf("O %d-ésimo número triangular é: %d\n", N, soma);
  }
}

#include <stdio.h>
#include <string.h>

int converter_binario(int decimal) {
  int convertido = 0, base = 2;
  if (decimal > 255) {
    fprintf(stderr, "Falha na conversão: Overflow\n");
    return decimal;
  }
  if (decimal < 0) {
    fprintf(stderr, "Falha na conversão: Número negativo\n");
    return decimal;
  }
  for (int i = 0, casa = 1, expoente = 1; i < 8;
       casa *= 10, expoente *= base, ++i) {
    convertido += ((decimal % (expoente * base)) / expoente) * casa;
  }
  return convertido;
}

int main(void) {
  int numero;
  printf("Digite um número inteiro positivo para converter binário: ");
  scanf("%d", &numero);
  numero = converter_binario(numero);
  printf("%d", numero);
}

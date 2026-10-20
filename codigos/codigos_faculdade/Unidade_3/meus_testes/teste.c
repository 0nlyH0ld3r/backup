#include <stdio.h>
int main() {
  int primo, impar, numero, valido;

  do {
    printf("Digite um número maior que 0 para verificar se ele é primo ou "
           "ímpar: ");
    scanf("%d", &numero);
  } while (numero <= 0);

  printf("O número deve ser válido caso seja primo/impar '[1]', ou não? "
         "'[0]': ");
  scanf("%d", &valido);

  for (int divisor = 2; divisor <= numero / 2 && primo != 1; ++divisor) {
    primo = numero % divisor != 0;
  }
  impar = numero % 2 != 0;
  if (valido == (primo || impar)) {
    printf("O número é válido");
  } else if (valido != (primo || impar)) {
    printf("O número não é válido");
  }
}

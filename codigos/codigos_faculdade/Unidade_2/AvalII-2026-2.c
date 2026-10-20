#include <stdio.h>

// Questão dos primos de Chen.Tem exemplo pra checar número primo de aqui tbm

int main() {
  int eh_primo = 1, eh_produto = 0;
  int p, impar, primo_1 = 2, primo_2;

  printf("Digite um número para verificar se o mesmo é um primo de Chen: ");
  scanf("%d", &p);
  impar = p + 2;
  for (int divisor = 2; divisor <= p / 2 && eh_primo; ++divisor) {
    eh_primo = p % divisor != 0 && p > 1;
  }
  if (eh_primo == 1) {
    printf("%d é primo\n", p);
  }
  if (eh_primo == 1) {
    for (int divisor = 2; divisor <= impar / 2 && eh_primo; ++divisor) {
      eh_primo = impar % divisor != 0;
    }
    if (eh_primo == 1) {
      printf("O número %d é um primo de Chen", p);
    }
  } else {
    eh_primo = 1;
    for (; primo_1 <= impar / 2; ++primo_1) {
      for (int divisor = 2; divisor <= primo_1 / 2 && eh_primo; ++divisor) {
        eh_primo = primo_1 % divisor != 0;
      }
      if (eh_primo == 1) {
        primo_2 = impar / primo_1;
        for (int divisor = 2; divisor <= primo_2 / 2 && !eh_produto;
             ++divisor) {
          eh_produto = primo_2 % divisor != 0;
        }
        if (eh_produto)
          printf("O número %d é um primo de Chen", p);
        break;
      }
    }
    eh_primo = 0;
  }
}

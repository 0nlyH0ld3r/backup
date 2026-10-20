#include <math.h>
#include <stdio.h>

#define MAXIMO 100
// int main()
// {
//     int i = 0, soma = 0;
//     int vendas[MAXIMO];
//     while (i < 10)
//     {
//         printf("O loop tá rodando: ");
//         scanf("%d", &vendas[i]);
//         if (vendas[i] > 0)
//         {
//             ++i;
//         }
//         else if (vendas[i] == 0)
//         {
//             --i;
//         }
//         else if (vendas[i] < 0)
//         {
//             break;
//         }
//     }
//     i = 0;
//     while (vendas[i] >= 0)
//     {
//         soma += vendas[i];
//         ++i;
//     }
//     printf("%d", soma);
// }

int main() {
  int numeros_mersenne = 0;
  int numero = 2, divisor;
  int eh_Mersenne, eh_Primo;
  long long int mersenne;
  while (numeros_mersenne <= 20) {
    divisor = 2;
    eh_Primo = 1;
    eh_Mersenne = 1;
    while (divisor <= numero / 2) {
      if (numero % divisor == 0 && divisor != numero) {
        eh_Primo = 0;
        break;
      }
      ++divisor;
    }
    if (eh_Primo) {
      double base = 2, expoente = numero;
      mersenne = pow(base, expoente) - 1;
      divisor = 2;
      while (divisor <= mersenne / 2) {
        if (mersenne % divisor == 0 && divisor != numero) {
          eh_Mersenne = 0;
          break;
        }
        ++divisor;
      }
      if (eh_Mersenne) {
        ++numeros_mersenne;
        printf("O número é %d, ele é primo e seu mersenne é: %lld \n", numero,
               mersenne);
      }
    }
    ++numero;
  }
}

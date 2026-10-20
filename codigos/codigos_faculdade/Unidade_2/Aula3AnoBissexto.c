#include <stdio.h>

/* Ano é bissexto se for divisível por 4 ou 400. Se não for divisível por nenhum
 * desses, não é bissexto*/
int main() {
  int continuar = 1;
  int ano;
  while (continuar) {
    printf("\nDigite um ano para verificar se ele é bissexto ou não: ");
    scanf("%d", &ano);
    if (ano % 4 != 0) {
      printf("%d não é bissexto\n", ano);
    } else {
      printf("%d é bissexto\n", ano);
    }
    printf("\nDeseja verificar outro ano? (1 - Sim | 0 - Não: ): ");
    scanf("%d", &continuar);
  }
}

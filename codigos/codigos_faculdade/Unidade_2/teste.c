#include <stdio.h>

int main() {
  int verdade, mentira, resultado;
  verdade = 1;
  mentira = 2;

  resultado = 2;
  if (resultado == (mentira || verdade)) {
    printf("Deu certo");
  }
}

#include <stdio.h>

#define MAXIMO 10

int main() {
  int lista_presenca[MAXIMO], soma_presenca = 0;

  for (int i = 0; i < 10; ++i) {
    lista_presenca[i] = 0;
  }

  for (int aluno = 0, total_lista = 0; total_lista < 10; ++total_lista) {
    int registrado = 1;
    scanf("%d", &lista_presenca[aluno]);

    for (int i = 0; i < 10; ++i) {
      if (lista_presenca[aluno] == lista_presenca[i] && aluno != i) {
        registrado = 0;
      }
    }

    if (registrado) {
      ++aluno;
    }
  }
  for (int i = 0; i < 10; ++i) {
    if (lista_presenca[i] != 0) {
      ++soma_presenca;
    }
  }
  printf("Número de alunos presentes: %d\n", soma_presenca);
}

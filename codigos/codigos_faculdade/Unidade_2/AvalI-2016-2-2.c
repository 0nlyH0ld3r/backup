#include <stdio.h>

int main() {
  int numero_total_termos = 20;
  int termos[numero_total_termos];
  int valido_para_subtrair, termo_anterior;
  termos[0] = 0;
  for (int n = 1; n < numero_total_termos; ++n) {
    valido_para_subtrair = 1;
    termo_anterior = termos[n - 1];
    for (int a = 0; a < numero_total_termos && valido_para_subtrair; ++a) {
      if (termo_anterior - n == termos[a] || termo_anterior - n < 0) {
        valido_para_subtrair = 0;
      }
    }
    if (valido_para_subtrair) {
      termos[n] = termo_anterior - n;
    } else {
      termos[n] = termo_anterior + n;
    }
  }
  for (int i = 0; i < numero_total_termos; ++i) {
    printf("O termo %d é: %d\n", i, termos[i]);
  }
}

int main2() {
  int i, m, j;
  printf("Digite números 'i', 'm', 'j'  para verificar de 'i' é congruente "
         "módulo 'm' a 'j': ");
  scanf("%d%d%d", &i, &m, &j);
  for (; i >= 0;) {
    for (; j >= 0;) {
      if ((i % m) == (j % m)) {
        printf("'%d' é congruente módulo '%d' a '%d'", i, m, j);
      }
    }
  }
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void recebe_texto(char *arquivo, char *texto, int tamanho_texto) {
  printf("Digite o nome do arquivo a ser alterado: ");
  fgets(arquivo, 100, stdin);

  printf("Digite o texto a ser impresso no arquivo: ");
  fgets(texto, tamanho_texto, stdin);

  arquivo[strcspn(arquivo, "\n")] = '\0';
  texto[strcspn(texto, "\n")] = '\0';
}
void escrever_ler() {
  FILE *fw;
  char texto[1000];
  char arquivo[100];
  char linha[1000];
  recebe_texto(arquivo, texto, 1000);

  fw = fopen(arquivo, "w+");

  if (fw == NULL) {
    printf("Erro ao abrir o arquivo\n");
    exit(EXIT_FAILURE);
  }

  fprintf(fw, "%s", texto);
  rewind(fw);

  printf("\t\t\tDados gravados com sucesso:\n\n\n");
  while (fgets(linha, 100, fw) != NULL) {
    printf("%s", linha);
  }
  fclose(fw);
}

int main() { escrever_ler(); }

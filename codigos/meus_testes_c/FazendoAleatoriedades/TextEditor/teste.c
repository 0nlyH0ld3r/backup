#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *fp;
	if ((fp = fopen("teste.txt", "r+")) == NULL) {
		printf("Não foi possível abrir o arquivo!\n");
		exit(1);
	}

	char ch = getc(fp);

	while(ch != EOF) {
		putchar(ch);
		ch = getc(fp);
	}
}

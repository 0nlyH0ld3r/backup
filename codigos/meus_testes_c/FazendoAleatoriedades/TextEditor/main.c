#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>

int getch(void) {
	struct termios oldt, newt;
	int ch;
	tcgetattr(STDIN_FILENO, &oldt);          // Salva as configurações atuais do terminal
	newt = oldt;
	newt.c_lflag &= ~(ICANON | ECHO);        // Desativa o buffer de linha e o eco das teclas
	tcsetattr(STDIN_FILENO, TCSANOW, &newt); // Aplica as novas configurações
	ch = getchar();                          // Lê o caractere individualmente
	tcsetattr(STDIN_FILENO, TCSANOW, &oldt); // Restaura as configurações originais
	return ch;
}

int main() {
	char string[257] = {' '};
	FILE *fp;

	if((fp = fopen("teste.txt", "r+")) == NULL){
		printf("Não foi possível abrir o arquivo\n");
		exit(-1);
	}

	system("clear");

	for (int i = 0; i < 256;){
		string[i] = '|';
		puts(string);
		char tmp = getch();
		string[i] = '|';

		if ((tmp == 127 || tmp == '\b') && i > 0) {
			string[i] = '\0';
			--i;
			string[i] = '\0';
			system("clear");
			continue;
		}

		string[i] = tmp;
		++i;
		system("clear");
	}

	struct Aluno {
		char *nome;
		int matricula;
	};

	struct Disciplina {
		char *nome;
		int ID;
		char *Alunos[40]; // Limite arbitrário de 40 alunos por disciplina
	};

}


#include <stdio.h>

int main(){
	char cobol[] = {"cobol"};
	char string[100];
	int is_cobol = 1;
	printf("Digite uma string de no máximo 5 palavras separadas por '-':\n");
	fgets(string, 100, stdin);
	char inicio = string[0], fim = string[0];

	for(int i = 0; string[i] != '\0'; ++i){
		if (string[i] == '\n')	string[i] = '\0';
	}

	for(int i = 0, j = 0; string[i] != '\0'; ++i){
		if (string[i - 1] == '-'){
			inicio = string[i];
		}

		if (string[i + 1] == '-' || string[i + 1] == '\0'){
			fim = string[i];
		}

		if (string[i] == '-' || string[i + 1] == '\0'){
			if (inicio == cobol[j] || fim == cobol[j]){
				is_cobol = 1;
				++j;
			} else {
				is_cobol = 0;
				break;
			}
		}

	}
	if (is_cobol)		printf("COBOL\n");
	else if(!is_cobol)	printf("BUG\n");
}





/* int main(){
	int ALTURA = 1, LARGURA = 1;
	float imagem[100][100][3];
	for(int i = 0; i < ALTURA; ++i){
		for (int j = 0; j < LARGURA; ++j){
			for (int h = 0; h < 3; ++h){  
				scanf("%f", &imagem[i][j][h]);
			}
		}
	}
	for(int i = 0; i < ALTURA; ++i){
		for (int j = 0; j < LARGURA; ++j){
			for (int h = 0; h < 3; ++h){  
				scanf("%f", &imagem[i][j][h]);
			}
		}
	}
	for(int i = 0; i < ALTURA; ++i){
		for (int j = 0; j < LARGURA; ++j){
			float cinza = (imagem[i][j][0] * 0.299) +  (imagem[i][j][1] * 0.587) + (imagem[i][j][2] * 0.114);
				for (int h = 0; h < 3; ++h){  
					imagem[i][j][h] = cinza;
					printf("%.3f\n", cinza);
				}
		}
	}

} */

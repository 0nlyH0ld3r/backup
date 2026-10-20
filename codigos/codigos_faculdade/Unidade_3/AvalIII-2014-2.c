#include <stdio.h>

/* int main(){
	int matriz[10][10];
	for (int i = 0; i < 10; ++i){
		for (int j = 0; j < 10; ++j){
			scanf("%d", &matriz[i][j]);
		}
	}
	int permutavel = 1;
	for (int i = 0; i < 2; ++i){
		for (int j = 0; j < 2; ++j){
			for (int h = 0; h < 2; ++h){
				if (matriz[i][h] == matriz[i][j] && h != j){
					permutavel = 0;
					break;
				}
				if (matriz[i][h] == matriz[i][j] && h != j){
					permutavel = 0;
					break;
				}
			}
		}
	}
	if (permutavel){
		printf("A matriz é permutável\n");
	}
	else if (!permutavel){
		printf("A string não é permutável\n");
	}
} */

/* int main(){
	int encontros_consonantais = 0;
	char string[258];
	fgets(string, 256, stdin);
	char nao_consoante[12] = {'a', 'e', 'i', 'o', 'u',
		'a', 'e', 'i', 'o', 'u', '\0', ' '};

	for (int i = 0; string[i] != '\0'; ++i){
		if (string[i + 1] == '\n'){ string[i + 1] = '\0'; }

		int consoante = 1;
		for (int j = 0; j < 12 && consoante; ++j){
			if (string[i] == nao_consoante[j]){ consoante = 0; }
		}
			
		if (consoante){
			for (int j = 0; j < 12 && consoante; ++j){
				if (string[i + 1] == nao_consoante[j]){ consoante = 0; }
			}
			if (consoante){ ++encontros_consonantais; }
		}
	}

	printf("%d\n", encontros_consonantais);
} */

typedef struct {
	float preco;
	char* nome;
}Produto;
int main(){
	Produto produtos[100] = { 
	};
	Produto lapis = {4, "lápis"};
	printf("%s", lapis.nome);
	for (int i = 0; i < 1; ++i){
		printf("Digite o nome do produto:");
		char nome[100];
		fgets(nome, 100, stdin);
		printf("Digite o preco do produto: ");
		float preco;
		scanf("%f", &preco);

		for (int j = 0; nome[j] != '\0'; ++j)
			nome[j + 1] = nome[j + 1] == '\n' ? '\0' : nome[j + 1];

		produtos[i].preco = preco;
		produtos[i].nome = nome;
	}
	printf("%s:\tR$%.2f\n", produtos[0].nome, produtos[0].preco);
}

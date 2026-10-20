#include <stdio.h>

void desenhar_tabuleiro(int tabuleiro[3][3]){
	for (int i = 0; i < 3; ++i){
		for (int j = 0; j < 3; ++j){
			printf("%d\t", tabuleiro[i][j]);
		}
		printf("\n");
	}
}

void jogada(int tabuleiro[3][3]){
	desenhar_tabuleiro(tabuleiro);
	printf("Digite qual linha e coluna deseja preencher, além do numero utilizado pelo jogador");
	int x, y, numero;
	scanf("%d%d%d", &x, &y, &numero);
	tabuleiro[x - 1][y - 1] = numero;
}

void jogo_da_velha(){
	int tabuleiro[3][3] = {0};
	while (1){
		jogada(tabuleiro);
	}
} 
	

int main(){
	jogo_da_velha();
}

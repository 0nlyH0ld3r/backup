#include <stdio.h>
#include <stdlib.h>
#define TAM 4

static int jogada = 0;
static char vencedor = ' ';
static char tabuleiro[TAM][TAM] = {
	{'-', '1',  '2', '3',},
	{'1',  ' ', ' ', ' ',},
	{'2',  ' ', ' ', ' ',},
	{'3',  ' ', ' ', ' ',},
};
void draw_game();
void moving();
void check();
void game();

int main(void){
	game();
	return 0;
}


void check(){
	for(int i = 1; i < TAM; ++i){
		if(tabuleiro[i][1] == tabuleiro[i][2] 
		&& tabuleiro[i][2] == tabuleiro[i][3]
		&& tabuleiro[i][1] != ' '){
			vencedor = tabuleiro[i][1];
			return;
		}

		if(tabuleiro[1][i] == tabuleiro[2][i] 
		&& tabuleiro[2][i] == tabuleiro[3][i]
		&& tabuleiro[1][i] != ' '){
			vencedor = tabuleiro[1][i];
			return;
		}

		if(tabuleiro[1][1] == tabuleiro[2][2] 
		&& tabuleiro[2][2] == tabuleiro[3][3]
		&& tabuleiro[1][1] != ' '){
			vencedor = tabuleiro[1][1];
			return;
		}

		if(tabuleiro[1][3] == tabuleiro[2][2] 
		&& tabuleiro[2][2] == tabuleiro[3][1]
		&& tabuleiro[1][3] != ' '){
			vencedor = tabuleiro[1][3];
			return;
		}
	}
}

void draw_game(){
	for (int i = 0; i < TAM; ++i){
		for(int j = 0; j < TAM; ++j)
			printf("\t%c\t", tabuleiro[i][j]);
		printf("\n\n");
	}
}

void moving(){
	jogada % 2 == 0 ? printf("\n\nVez do Jogador 1\n")
			: printf("Vez do jogador 2\n");

	for (;;){
		printf("\n\nDigite as posições X (horizontal) e Y (vertical) onde deseja jogar: ");
		int x, y;
		scanf("%d%d", &x, &y);
		if(tabuleiro[y][x] == ' ' 
		&& x < TAM && x > 0 
		&& y < TAM && y > 0){
			tabuleiro[y][x] = jogada % 2 == 0 ? 'X' : 'O';
			break;
		}
		else printf("Digite um número válido!\n");
	}

	++jogada;
}

void game(){
	system("clear");
	for(;vencedor == ' ';){
		printf("\t\t\t**********************\n");
		printf("\t\t\t****JOGO DA VELHA!****\n");
		printf("\t\t\t**********************\n\n\n");
		draw_game();
		check();
		if(vencedor != ' '){
			printf("\n\n");
			printf("\t\t\t**********************\n");
			printf("\t\t\t***O VENCEDOR É O %c***\n", vencedor);
			printf("\t\t\t**********************\n\n\n");

		}
		else if(jogada == 9 && vencedor == ' '){
			printf("\n\n\t\t Não há vencedor !!!!!!!!!\n");
			break;
		}
		else{				
			moving();
			system("clear");
		}

	}
}

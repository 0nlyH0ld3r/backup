#include <stdio.h>
int main(){
	int A, B, C, D;
	int decimal = 0;
	printf("Digite um número binário menor ou igual a 9:\n");
	scanf("%d%d%d%d", &A, &B, &C, &D);

	int bits[4] = {A, B, C, D};
	for (int i = 0, base = 1; i < 4; ++i, base *= 2){
		decimal += (bits[i] * base);
	}
	if (decimal > 9){
		printf("Número maior que 9 não pode");
		return -1;
	}

	int display[10][8] = 
	{
		{0,   1, 1, 1, 1, 1, 1, 0,},
		{1,   0, 1, 1, 0, 0, 0, 0,},
		{2,   1, 1, 0, 1, 1, 0, 1,},
		{3,   1, 1, 1, 1, 0, 0, 1,},
		{4,   0, 1, 1, 0, 0, 1, 1,},
		{5,   1, 0, 1, 1, 0, 1, 1,},
		{6,   1, 0, 1, 1, 1, 1, 1,},
		{7,   1, 1, 1, 0, 0, 0, 0,},
		{8,   1, 1, 1, 1, 1, 1, 1,},
		{9,   1, 1, 1, 1, 0, 1, 1,},
	};

	for (int i = 0; i < 10; ++i){
		if (decimal == display[i][0]){
			for (int j = 1; j <= 7; ++j){
				char a = 96;
				printf("%c: %d\t", a + j, display[i][j]);
			}
		}
	}
}

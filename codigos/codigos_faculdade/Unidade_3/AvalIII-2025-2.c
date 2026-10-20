#include <stdio.h>

int main(){
	char aliens[100], string[100];
	int alien = 1;
	printf("Digite o Alfabeto Alienígena (Ex: ! 1 o b): ");
	fgets(aliens, sizeof(aliens), stdin);
	printf("Digite a mensagem interceptada: ");
	fgets(string, 100, stdin);

	for(int i = 0; string[i] != '\0' && alien != 0; ++i){
		for (int h = 0; aliens[h] != '\0'; ++h){
			alien = 0;
			if(string[i] == aliens[h]){
				alien = 1;
				break;
			}

		}
	}
	if (alien == 1){
		printf("A mensagem é alienígena!\n");
	} else {
		printf("A mensagem não é alienígena");
	}
}


/* int main(){
	int M = 4, venceu = 0;
	char matriz[M+2][M+2];
	for (int i = 0; i < M; ++i){
		printf("Digite a configuração da linha %d/%d da matriz\n", i, M-1);
		fgets(matriz[i], M + 2, stdin);
	}

	int posX, posY;
	printf("Digite uma posição Y e X menor que %d para cair"
			"(Ex 0 1): ", M);
	scanf("%d %d", &posY, &posX);

	for(int i = 0; i < 900 && !venceu; ++i){
		if (matriz[posY][posX] == 'S')
			++posY;
		else if (matriz[posY][posX] == 'N')
			--posY;
		else if (matriz[posY][posX] == 'O')
			--posX;
		else if (matriz[posY][posX] == 'L')
			++posX;

		if (matriz[posY][posX] == 'X'){
			printf("Venceu!\n");
			break;
		}
		if (posY > M - 1 || posY < 0 || posX >= M || posX < 0){
			printf("Saiu da área brother\n");
			break;
		}
	}
} */

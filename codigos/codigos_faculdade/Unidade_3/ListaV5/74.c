#include <stdio.h>

int main(){
	int vetor[30] = {0}, numero, maior_index = -1, index;
	int opcao;

	do{
		printf("Digite uma opção:\n"
				" 1 - Inserir elemento após o elemento de maior índice adicionado\n"
				" 2 - Inserir elemento em qualquer posição do vetor\n"
				" 3 - Remover um elemento de uma posição indicada\n"
				" 4 - Remover todos os elementos iguais a um valor indicado\n"
				"-1 - Parar\n"
				"Sua opção: ");
		scanf("%d", &opcao);


		switch (opcao){

			case 1:
				printf("Digite um número inteiro: ");
				scanf("%d", &vetor[maior_index + 1]);
				++maior_index;
				break;
			case 2:
				printf("Digite um número inteiro e em qual a posição"
						"(De 0 a 30) tal número deve ser posicionado: ");
				scanf("%d %d", &numero, &index);
				vetor[index] = numero;
				if (index > maior_index){
					maior_index = index;
				}
				break;
			case 3: // Remove um número
				printf("Digite um número para ser excluído do array");
				scanf("%d", &numero);
				for(int i = 0; i < 30; ++i){
					int verificado = 0;
					for (int j = 0; j < 30; ++j){
						if (vetor[j] == numero && verificado == 0){
							++j;
							--maior_index;
							verificado = 1;
						}
						vetor[i] = vetor[j];
					}
				}
				break;
			case 4: // Remove todos os números iguais ao digitado
				printf("Digite um número para excluir todos os iguais"
						"do array");
				scanf("%d", &numero);
				for(int i = 0; i < 30; ++i){
					for (int j = 0; j < 30; ++j){
						if (vetor[j] == numero){
							++j;
							--maior_index;
						}
						vetor[i] = vetor[j];
					}
				}
				break;
		}
		for (int i = 0; i < 30; ++i){
			printf("vetor[%d] = %d\n", i, vetor[i]);
		}
	} while (opcao != -1);
}

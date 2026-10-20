#include <stdio.h>
#include <stdlib.h>


double pot(double x, double expoente){
	double resultado = 1;
	if(expoente == 0){
		return resultado;
	}
	if(expoente != (int)expoente) return 0; 
	for (; expoente != 0; expoente > 0 ? --expoente : ++expoente){
		resultado = expoente > 0 ? (resultado * x) : (resultado / x);
	}
	return resultado;
}


int main(){
	int matriz[100][100] = {0}, tamanho;
	printf("Digite o tamanho da pirâmide: ");
	scanf("%d", &tamanho);
	int max = tamanho, min = 0;

	for(;; --max, ++min){
		if(max <= min)
			break;
		for(int i = min; i < max; ++i){
			for(int j = min; j < max; ++j){
				++matriz[i][j];
			}
		}
	}
	for(int i = 0; i < tamanho; ++i){
		for(int j = 0; j < tamanho; ++j)
			printf("%2d", matriz[i][j]);
		printf("\n");
	}
}

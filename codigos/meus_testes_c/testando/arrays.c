#include <stdio.h>

int main(){
	// Pra realizar aritmética de ponteiros com matrizes multidimensionais,
	// é necessário utilizar um ponteiro externo.
	// Entretanto, para matrizes unidimensionais, é possível utilizar
	// vetores multidimensionais.
	int array[10], array2[2][5];
	int *p;
	p = &array2[0][0];
	*(p + 5) = 6;
	printf("%d\n", array2[1][0]);
	p = array;
	*(p + 5) = 6;
	printf("%d\n", array[5]);

}

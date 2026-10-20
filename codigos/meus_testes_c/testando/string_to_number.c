#include <stdio.h>
#include <stdlib.h>
#define MIN_INT 2147483647

int *string_to_number(){
	// Receber uma string e retornar números
	char string[100];
	fgets(string, 100, stdin);
	int numeros[100], eh_numero = 0;
	int count = 0;
	for (int i = 0; string[i] != '\0'; ++i)
		string[i] = string[i] == '\n' ? '\0' : string[i];

	numeros[count] = 0;
	for (int i = 0; ; ++i){
		if (string[i] >= '0' && string[i] <= '9'){
			if(!eh_numero)
				numeros[count] = 0;
			eh_numero = 1;
			numeros[count] = (numeros[count] * 10) + (string[i] - '0');
		}
		else if(eh_numero == 1 && (string[i] < '0' || string[i] > '9')){
			++count;
			eh_numero = 0;
		}
		else if(string[i] == '\0'){
			if (eh_numero == 1) ++count;
			break;
		}
	}
	if(count > 0){
		numeros[count] = MIN_INT;
		int *ptr = malloc(sizeof(*ptr) * (count + 1));
		for (int i = 0;; ++i){
			ptr[i] = numeros[i];
			if(numeros[i] == MIN_INT) break;
		}
		return ptr;
	}
	return NULL;
}

int main(){
	int *ptr = string_to_number();
	if(ptr != NULL)
		for(int i = 0; ptr[i] != MIN_INT; ++i)
			printf("%d->%d\n", ptr[i], i);
	free(ptr);
}

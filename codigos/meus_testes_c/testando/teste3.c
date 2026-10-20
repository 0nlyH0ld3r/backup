#include <stdio.h>
#include <stdlib.h>

#define MIN_INT -999999

int *string_number(){
	char string[100];
	int numeros[100], eh_numero = 0, count = 0;

	fgets(string, 100, stdin);
	for(int i = 0;; ++i){
		string[i] == '\n' ? string[i] = '\0' : 0;
		if(string[i] >= '0' && string[i] <= '9'){
			if(!eh_numero){
				eh_numero = 1;
				numeros[count] = 0;
			}
			numeros[count] = (numeros[count] * 10) + (string[i] - '0');
		}
		else if((string[i] < '0' || string[i] > '9') && eh_numero){
			eh_numero = 0;
			++count;
		}
		else if(string[i] == '\0'){
			if(eh_numero)
				++count;
			break;
		}
	}
	numeros[count] = MIN_INT;

	int *ptr = malloc(sizeof(*ptr) * (count + 1));
	for(int i = 0;; ++i){
		ptr[i] = numeros[i];
		if (numeros[i] == MIN_INT) break;
	}
	return ptr;
}

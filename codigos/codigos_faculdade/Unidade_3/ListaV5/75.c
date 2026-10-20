#include <stdio.h>

int main(){
	char vogais[5] = {'a', 'e', 'i', 'o', 'u'};
	char string[100];
	int num_vogais;
	printf("Digite uma string: ");
	fgets(string, 100, stdin);

	for(int i = 0; string[i] != '\0'; ++i){
		if (string[i + 1] == '\n'){
			string[i + 1] = '\0';
		}
		for (int j = 0; j < 5; ++j){
			if (string[i] == vogais[j] || string[i] + 32 == vogais[j])
				++num_vogais;
		}
	}
	printf("O número de vogais é: %d", num_vogais);
}

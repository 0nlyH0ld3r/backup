#include <stdio.h>

int main(){
	char string[100]; int ultima_letra = 0;
	char nova_string[100];

	printf("Digite uma string: \n");
	fgets(string, 100, stdin);

	for (; string[ultima_letra] != '\0'; ++ultima_letra){ 
		if (string[ultima_letra + 1] == '\n')
			string[ultima_letra + 1] = '\0';
	}
	nova_string[ultima_letra] = '\0';
	for (int i = 0, j = ultima_letra - 1; i < ultima_letra; ++i, --j){
		nova_string[i] = string[j];
	}

	printf("%s", nova_string);
}

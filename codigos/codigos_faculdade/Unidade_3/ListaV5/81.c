#include <stdio.h>

int main(){
	char string[100], string_normalizada[100];

	fgets(string, 100, stdin);

	for (int i = 0, j = 0; string[i] != '\0'; ++i, ++j){
		while(string[j] == ' ' && string[j + 1] == ' '){
			++j;
		}
		if (string[j +1] == '\n')
			string[j + 1] = '\0';
		string_normalizada[i] = string[j];
	}
	printf("%s\n", string_normalizada);
}

#include <stdio.h>

int main(void){
	int count;
	char string[101];
	fgets(string, 100, stdin);
	for (int i = 0; string[i] != '\0'; ++i)
		string[i] == '\n' ? string[i] = '\0' : 0;

	printf("%s%n", string, &count);
	printf("\n%d\n", count);

	char *ptr = string;
	printf("%s", ptr);
}

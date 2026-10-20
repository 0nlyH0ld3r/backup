# include <stdio.h>
#include <stdlib.h>
#include <time.h>


int fatorial(const int n_numero) {
	int result = 1;

	for (int i = n_numero; i > 1; --i)
		result *= i;

	return result;
}

int eh_primo(const int numero) {
	for (int divisor = 2; divisor <= numero / 2; ++divisor)
		if (numero % divisor == 0)
			return 0;
	return 1;
}

int main() {
	srand(time(NULL));
	printf("%d\n", fatorial(rand() % 10));
	return 0;
}


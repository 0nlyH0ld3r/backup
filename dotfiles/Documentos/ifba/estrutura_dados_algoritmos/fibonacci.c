#include <stdio.h>

int fibonacci_re(int n)
{
	int result = 1;
	if (n <= 2) return 1;

	return fibonacci_re(n - 2) + fibonacci_re(n - 1);
}

int fibonacci_it(int n) 
{
	int f1 = 1, ant = 1, f2;
	for (int i = 3; i <= n; ++i) {
		f2 = f1;
		f1 = f1 + ant;
		ant = f2;
	}

	return f1;
}

int main() 
{
	printf("%d", fibonacci_it(6));
}

// 1 1 2 3 5 8 13 

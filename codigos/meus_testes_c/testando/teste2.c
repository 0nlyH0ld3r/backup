#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int multiply(int x, int y){
	return x * y;
}

typedef struct{
	char *NOME;
	int saldo; // Centavos
	int (*quadrado)(int saldo, int);
} Conta;

int main(void){
	Conta pessoa1 = { .NOME = "Bruno Vinicius", .saldo = 200000, .quadrado = multiply};
	pessoa1.saldo = pessoa1.quadrado(pessao1.saldo, 2);
}

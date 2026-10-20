#include <stdio.h>

/* int main(){
	char string1[100];
	char string2[100];
	int a;
	fgets(string1, 100, stdin);
	fgets(string2, 100, stdin);

	for(int i = 0; string1[i] != '\0'; ++i){
		if (string1[i] == 'a'){
			++a;
			string1[i] = 'b';
		}

	}
	for(int i = 0; string2[i] != '\0'; ++i){
		if (string2[i] == 'a'){
			++a;
			string2[i] = 'b';
		}
	}

	printf("\n\nVocê escreveu:\n");
	printf("%s", string1);
	printf("%s", string2);
	printf("\n\nA segunda letra de cada:\n%c\n%c\n", string1[1], string2[1]);
	printf("O número de letras 'a' nas suas strings é: %d", a);
} */

/* int main(){
	char funcionario[100]; float salario;
	char cargos[3][100] = {
		"TECNICO",
		"ENGENHEIRO",
		"GERENTE",
	};

	printf("GERENTE\nENGENHEIRO\nTECNICO\nDigite seu cargo: ");
	fgets(funcionario, 100, stdin);
	printf("Digite seu salário: ");
	scanf("%f", &salario);

	for(int i = 0; funcionario[i] != '\0'; ++i){
		funcionario[i] == '\n' ? funcionario[i] = '\0' : funcionario[i];
		if(funcionario[i] > 90)
		{
			funcionario[i] -= 32;
		}
	}

	for (int i = 0; i < 3; ++i){
		int iguais = 1;
		for (int j = 0; funcionario[j] != '\0' || cargos[i][j] != '\0'; ++j){
			if (funcionario[j] != cargos[i][j]){
				iguais = 0;
				break;
			}
			if (iguais == 1){
				salario *= 1 + ((i * 0.1) + 0.1); // Transformar i = 0 em 1 + (0 + 0.1) = 1.1
				break; 													  // Transforma i = 2 em 1 + (0.2 + 0.1) = 1.3
			}
		}
	}
	printf("Seu salário subiu para %.2f",salario);
} */

/* int main(){
	char nome[20]; int letras = 0;
	fgets(nome, 20, stdin);
	for (; nome[letras] != '\0'; ++letras){
		if (nome[letras] == '\n'){
			nome[letras] = '\0';
		}
	}
	printf("Seu nome é %s e ele possui %d letras\n", nome, letras - 1);
} */

/* int main(){
	char nome_fgets[100];
	fgets(nome_fgets, 100, stdin);
	for(int i = 0; nome_fgets[i] != '\0'; ++i){
		nome_fgets[i] == '\n' ? nome_fgets[i] = '\0' : nome_fgets[i];
	}
	puts(nome_fgets);
} */

/* int main(){
	char vetor[100], vetor2[100];
	fgets(vetor, 100, stdin);
	for (int i = 0; ; ++i){
		vetor[i] == '\n' ? vetor[i] = '\0' : vetor[i];
		if ((vetor[i] == 'a')(vetor[i] == 'e')(vetor[i] == 'i')(vetor[i] == 'o')(vetor[i] == 'u')(vetor[i] == 'A')(vetor[i] == 'E')(vetor[i] == 'I')(vetor[i] == 'O')(vetor[i] == 'U')){
		vetor2[i] = '*';
		}
		else {
		vetor2[i] = vetor[i];
		}
		}
		if (vetor[i] == '\0'){
			break;
		}
	}
	printf("%s\n%s", vetor, vetor2);
} */

/* int main(){
	char vetor[100];
	fgets(vetor, 100, stdin);
	for (int i = 0;vetor[i] != '\0'; ++i){
		vetor[i] = vetor[i] == '\n' ? '\0' : vetor[i];
		if (vetor[i] < 97 && vetor[i] != ' '){
			vetor[i] += 32;
		}
	}
	printf("%s", vetor);
} */

/* int main(){
	char palavra[100];
	fgets(palavra, 100, stdin);
	int fim_palavra, palindromo;
	for (int i = 0;; ++i, ++ fim_palavra){
		palavra[i] = palavra[i] == '\n' ? '\0' : palavra[i];
		if (palavra[i] == '\0'){
			break;
		}
	}
	for (int i = 0, j = fim_palavra -1; i <= j; ++i, --j){
		palindromo = (palavra[i] == palavra[j]);
		if (!palindromo){
			break;
		}
	}
	if (palindromo){
		printf("A palavra '%s' é um palíndromo", palavra);
	}
	else{
				printf("A palavra '%s' não é um palíndromo", palavra);
	}
} */

int main(){
	char string[100], maior_palavra[100];
	fgets(string, 100, stdin);
	int i = 0, maior = 0, endereco = 0, maior_endereco;
	for (; string[i] != '\0';){
		if (string[i] == '\n'){
			string[i] = '\0';
			break;
		}
		int palavra = 0;
		endereco = i;
		while (string[i] != ' '){
			++palavra;
			++i;
		}
		if (palavra > maior){
			maior_endereco = endereco;
			maior = palavra;
		}
		++i;
	}
	for (int j = maior_endereco; ; ++j){
		maior_palavra[j] = string[j];
		if (string[j] == ' '){
			maior_palavra[j] = '\0';
			break;
		}
	}
	printf("A maior palavra '%s' tem %d letras", maior_palavra, maior);
}

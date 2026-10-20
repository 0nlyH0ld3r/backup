#include <stdio.h>

#define quad(x) x * x
#define PI 3.14

void retangulo(){
	float base, altura;
	printf("Digite o valor da base e da altura do retângulo: ");
	scanf("%f %f", &base, &altura);
	if (base == altura) printf("Isso não é um retângulo\n");
	else {  
		float area = base * altura;
		float perimetro = (base + altura ) * 2;

		printf("Área do triângulo: %3.2f \nPerímetro do retãngulo: %3.2f\n", area, perimetro); 
	}
}

void quadrado(){
	float lado;
	printf("Digite o valor do lado do quadrado: ");
	scanf("%f", &lado);

	float area = quad(lado);
	float perimetro = 4 * lado;
	
	printf("A área do quadrado: %3.2f \nO perímetro do quadrado: %3.2f", area, perimetro);
}

void circunferencia(){
	float raio; 
	printf("Digite a medida do raio da circunferência: ");
	scanf("%f", &raio);

	float area = PI * quad(raio);
	float perimetro = 2 * PI * raio;
	printf("A área da circunferência é: %3.2f\nO perímetro é: %3.2f\n", area, perimetro);
}

void triangulo(){
	float a, b, c;
	printf("Digite a medida de três lados do triângulo: ");
	scanf("%f %f %f", &a, &b, &c);
	float perimetro = a + b + c;
	printf("O perímetro do triângulo é: %3.2f", perimetro);
}

void sucessor(){
	int numero;
	printf("Digite um número inteiro");
	scanf("%d", &numero);
	printf("O sucessor de %d é %d\n", numero, numero + 1);
}

void divisao(){
	int x, y;
	printf("Digite dois números inteiros: ");
	scanf("%d %d", &x, &y);
	int quoc = x/y;
	int resto = x % y;
	printf("O quociente de %d / %d é: %d \t e o resto %d\n", x, y, quoc, resto);
}

void Fahrenheit_Celsius(){
	float farenheit;
	printf("Digite um valor de temperatura em farenheit: ");
	scanf("%f", &farenheit);
	float celsius = (5 * (farenheit - 32))/9;

	printf("A temperatura em celsius é: %2.2f\n", celsius);
}


int main(){
}

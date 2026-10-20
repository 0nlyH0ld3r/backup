#include <stdio.h>

int main()
{
    float primeiro_numero, segundo_numero, media_aritmetica;
    do {
    printf("Digite dois números para calcular sua média aritmética: ");
    scanf("%f %f", &primeiro_numero, &segundo_numero);
    media_aritmetica = (primeiro_numero + segundo_numero) / 2;
    printf("A média aritmética dos seus dois números é: %.2f\n\n", media_aritmetica);
    }while (primeiro_numero != 0 && segundo_numero != 0);
}

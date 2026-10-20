#include <stdio.h>
#include <math.h>

/*
 *
 * Input: Conjunto de Valores
 * Output: Quadrado, Cubo e Raiz Quadrada de cada valor.
 * O conjunto é finalizado com o valor 0
 *
*/

int main()
{
    double valor, raiz, quadrado, cubo;
    do
    {
        printf("Digite um valor para calcular o Quadrado, o Cubo e a Raiz: ");
        scanf("%lf", &valor);
        raiz = sqrt(valor);
        quadrado = valor * valor;
        cubo = valor * valor * valor;
        printf("A raiz de %.2lf é: %.2lf \nO quadrado é: %.2lf\nO cubo é: %.2lf\n", valor, raiz, quadrado, cubo);
    } while (valor != 0);
}

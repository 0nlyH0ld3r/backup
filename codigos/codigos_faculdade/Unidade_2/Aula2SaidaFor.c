#include <stdio.h>

int main()
{
    int numeroExecucoes, asteriscos;
    printf("Digite um número de vezes para o programa ser executado: ");
    scanf("%d", &numeroExecucoes);

    for(asteriscos = numeroExecucoes * 1.4; asteriscos >= 0; asteriscos--)
    {
        printf("*");
    }
    printf("\n");
    for (int i = 0; i <= numeroExecucoes; i+=2) 
    {
        printf("%d ", i);
    } 
    printf("\n");
    for(asteriscos = numeroExecucoes * 1.4; asteriscos >= 0; asteriscos--)
    {
        printf("*");
    }
}

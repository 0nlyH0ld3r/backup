#include <stdio.h>

int main(){
    char asterisco = '*'; int num_linhas, num_asteriscos;
    printf("Digite o números de linhas desejadas: ");
    num_asteriscos = 1; 
    // Se num_asteriscos = num_linhas; Vira decrescente
        // num_asteriscos -- && i++;
    // Se num_linhas = 1; Vira crescente
        // num_asteriscos ++ && i--;
    for (scanf("%d", &num_linhas); num_linhas > 0; num_linhas--) 
    {
        for (int i = num_asteriscos; i > 0; i--)
        {
            printf("%c", asterisco);
        }
        printf("\n");
        num_asteriscos++;
    }
}

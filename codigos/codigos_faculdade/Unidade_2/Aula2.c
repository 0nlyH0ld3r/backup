#include <stdio.h>

int main()
{
    printf("Hello World!");
    for (/* Declaração de variável de controle */ int i = 0; /* Condição */ i < 10; /* Controle de execução */ i++) {
        printf("%d", i); // Bloco de comandos a ser repetido
        if (i % 5 == 0)
        {
            break; // break quebra a repetição
        }
        else if (i % 2 == 0)
        {
            continue;
        }
    }
    
    do {
        printf("Isso é um Do-While Loop"); // Bloco de comandos a ser executado ao menos uma vez
    }while (int verdadeiro = 1) // Condição para repetir o bloco acima;
}

#include <stdio.h>

int main()
{
    // Chico tem 1,50 e cresce 2cm pr ano
    // Zé tem 1,10 e cresce 3 cm por ano
    // Quantos anos pra zé ser maior que chico?
    float Chico = 1.50, Ze = 1.10, anos_passados = 0;
    while (Chico >= Ze)
    {
        Chico += 0.02;
        Ze += 0.03;
        anos_passados += 1;
    }
    printf("Foram necessários %.0f anos para Zé se tornar maior que Chico", anos_passados);
}

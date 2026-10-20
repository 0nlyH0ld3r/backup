/*Gerar um conversor de inteiro para binário e somar os números uns para dizer quantos possuem. De 0 a 32*/
#include <stdio.h>
int main()
{
    int decimal, bit1, bit2, bit3, bit4, bit5, bit6; // Números maiores são os bits mais do fundo
    int numeroUns;
    printf("Digite o número inteiro entre, César: ");
    scanf("%d", &decimal);

    if (decimal > 32)
    {
        printf("Tu disse que seria menor que até 32, bro\n");
    }
    else if (decimal < 0)
    {
        printf("Tu disse que seria até 0, bro\n");
    }
    else
    {
        // Calculando bit 1 = 32
        bit1 = decimal / 32;
        // bit 2 = 16
        bit2 = (decimal % 32) / 16;
        // bit 3 = 8
        bit3 = (decimal % 16) / 8;
        // bit 4 = 4
        bit4 = (decimal % 8) / 4;
        // bit 5 = 2
        bit5 = (decimal % 4) / 2;
        // bit 6 = 1
        bit6 = (decimal % 2) / 1;
        numeroUns = bit1 + bit2 + bit3 + bit4 + bit5 + bit6;
        printf("%d%d%d%d%d%d\n", bit1, bit2, bit3, bit4, bit5, bit6);
        printf("O número de bits 1 é: %d\n", numeroUns);
    }
}

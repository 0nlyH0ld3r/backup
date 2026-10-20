#include <stdio.h>

// int main()
// {
//     int habitantes_A = 5000000, habitantes_B = 7000000, anos_necessarios = 0;
//     int natalidade_anual_A, natalidade_anual_B;
//     while (habitantes_A <= habitantes_B)
//     {
//         natalidade_anual_A = habitantes_A * 0.03; // 3% por ano
//         natalidade_anual_B = habitantes_B * 0.02; // 2% por ano
//         habitantes_A += natalidade_anual_A;
//         habitantes_B += natalidade_anual_B;
//         anos_necessarios += 1;
//     }
//     printf("Foram necessários %d anos para a população de A superar a população de B em números\n", anos_necessarios);
// }

// int main()
// {
//     int divisor, EhTriangular;
//     int numero;
//     do {
//         EhTriangular = 0;
//         divisor = 1;
//         printf("Digite um número para verificar se ele é triângular ou não (0 irá parar o programa): ");
//         scanf("%d", &numero);
//         while (divisor + 2 <= numero / 2 && !EhTriangular) 
//         {
//             if (numero == (divisor * (divisor + 1) * (divisor +2)))
//             {
//                 EhTriangular = 1;
//                 break;
//             }
//             else
//             {
//                 EhTriangular = 0;
//                 divisor += 1;
//             }
//         }
//         if (EhTriangular)
//         {
//             printf("O número é triângular\n");
//         }
//         else 
//         {
//             printf("O número não é triângular\n");
//         }
//     } while (numero != 0);
// }

int main()
{
    int numero_A, numero_B, divisor = 1, numero_Amigo_A = 0, numero_Amigo_B;
    printf("Digite dois números para verificar se são números amigos: ");
    scanf("%d %d", &numero_A, &numero_B);
    while (divisor <= numero_A / 2 || divisor <= numero_B / 2)
    {
        if (numero_A % divisor == 0)
        {
            numero_Amigo_A += divisor;
        }
        if (numero_B % divisor == 0)
        {
            numero_Amigo_B += divisor;
        }
        divisor += 1;
    }
    if (numero_Amigo_A == numero_B && numero_Amigo_B == numero_A )
    {
        printf("%d é número amigo de %d\n", numero_B, numero_A);
    }
    else
    {
        printf("%d não é número amigo de %d\n", numero_B, numero_A);
    }
}

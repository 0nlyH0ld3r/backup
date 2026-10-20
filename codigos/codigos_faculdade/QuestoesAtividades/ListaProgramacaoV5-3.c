#include <stdio.h>
//
// /*
//  * Escolher tipo
//  * 1 - Ervas daninhas (R$50 por acre)
//  * 2 - Gafanhotos (R$100 por acre)
//  * 3 - Broca (R$150 por acre)
//  * 4 - TODOS (R$250 por acre)
//  *
//  *
//  * Se a área for maior que 1000 acres, tem desconto de 5% em todos os acres.
//  * Se o custo ultrapassar R$750, tudo acima recebe 10% de desconto.
//  *
//  * Ler o tipo de pulverização e a área a ser valorizada.
//  * Imprimir valor a ser pago.
//  * */
//
// int main()
// {
//     int ervas_daninhas = 50, gafanhotos = 100, broca = 150, todos = 250, preco_final = 0, preco_acre, desconto_750;
//     int metodo, acres;
//     printf("Qual método de pulverização da sua preferência? \n1) Ervas Daninhas\n2) Gafanhotos\n3) Broca\n4) Todos os métodos acima\nDigite o número desejado: ");
//     scanf("%d", &metodo);
//     printf("Digite a área a ser pulverizada (acres): ");
//     scanf("%d", &acres);
//
//     switch (metodo) 
//     {
//         case 1:
//             preco_acre = acres * ervas_daninhas;
//             break;
//         case 2:
//             preco_acre = acres * gafanhotos;
//             break;
//         case 3:
//             preco_acre = acres * broca;
//             break;
//         case 4:
//             preco_acre = acres * todos;
//             break;
//     }
//     if (acres > 1000)
//     {
//         preco_acre *= 0.95;
//     }
//     if (preco_acre > 750)
//     {
//         desconto_750 = ( preco_acre - 750 ) * 0.90;
//         preco_acre = 750;
//     }
//     preco_final += preco_acre + desconto_750;
//     printf("Preço final: %d\nPreço descontato: %d", preco_final, desconto_750);
// }

/*
 * Pegar um número de 4 dígitos
 * Multiplicar: 
 *  O primeiro por 5
 *  O segundo por 4
 *  O terceiro por 3
 *  O quarto por 2
 * Somar todos
 * Pegar o resto da soma dividida por 11
 * 11 - Resto.
 * */

// int main()
// {
//     int numero_agencia, primeiro_digito, segundo_digito, terceiro_digito, quarto_digito;
//     int numero_verificador;
//
//     printf("Digite os 4 primeiros dífitos da sua agência: ");
//         scanf("%d", &numero_agencia);
//
//     primeiro_digito = ( numero_agencia / 1000 ) * 5;
//     segundo_digito = ( numero_agencia % 1000 / 100 ) * 4;
//     terceiro_digito = ( numero_agencia % 100 / 10 ) * 3;
//     quarto_digito = ( numero_agencia % 10 ) * 2;
//
//     numero_verificador = 11 - ( ( primeiro_digito + segundo_digito + terceiro_digito + quarto_digito ) % 11 );
//     if (numero_verificador != 10)
//     {
//         printf("Sua agência é: %d-%d", numero_agencia, numero_verificador);
//     }
//     else
//     {
//         printf("Sua agência é: %d-X", numero_agencia);
//     }
// }

// /*
//  * 1 - Programa vai imprimir todos os números de interfalo fechado de 1 a 100
//  * 2 - Imprimir todos os números inteiros de 100 a 1
//  * 3 - Imprimir todos os pares do intervalo fechdo de 1 a 100
//  * 4 - Imprimir todos os números de 1 a 100 e a soma de todos eles;
//  * */
//
// int main()
// {
//     int numero = 1;
//     while (numero <= 100)
//     {
//         if (numero % 2 == 0)
//         {
//             printf("%d\n", numero);
//         }
//         ++numero;
//     }
// }

// /*
//  * Receber 5 números e calcular a média entre eles
//  * */
//
// int main ()
// {
//     int numero, media = 0;
//     for (int i = 0; i<5; ++i)
//     {
//         printf("Digite um número: ");
//         scanf("%d", &numero);
//         media += numero;
//     }
//     media /= 5;
//     printf("A média entre eles é: %d", media);
// }

// int main()
// {
//     int A, resto, B;
//     printf("Digite um número A e um número B para calcular seu quociente: ");
//     scanf("%d %d", &A, &B);
//     while (A >= 0)
//     {
//         A -= B;
//         if (A < 0)
//         {
//             resto = A+=B;
//             break;
//         }
//     }
//     printf("O resto da divisão é: %d\n", resto);
// }

/*
 * 
 * */

int main()
{
    int fibonacci = 1, numero_anterior = 0;
    int n;
    printf("Digite quantos termos da série fibonacci deseja imprimir: ");
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        printf("%d, ", fibonacci);
        fibonacci += numero_anterior;
        numero_anterior = fibonacci - numero_anterior;
    }
}

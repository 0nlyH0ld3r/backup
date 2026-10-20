#include <stdio.h>
// /*
//     Trit: Mesma coisa que o binário, mas:
//     2 Adiciona o número
//     1 Adiciona 0
//     0 Subtrai o número
//     2010 = +27 - 9 + 0 - 1
// */

// int main()
// {
//     int numero;
//     int Trit1, Trit2, Trit3, Trit4;
//     printf("Digite um Trit de até 4 dígitos (0000 até 2222): ");
//     scanf("%d", &numero);
//     Trit1 = numero / 1000;
//     Trit2 = numero % 1000 / 100;
//     Trit3 = numero % 100 / 10;
//     Trit4 = numero % 10;
//     if ((Trit1 > 2 || Trit1 < 0) || (Trit2 > 2 || Trit2 < 0) || (Trit3 > 2 || Trit3 < 0) || (Trit4 > 2 || Trit4 < 0))
//     {
//         printf("Não é um número válido, bobão\n");
//     }
//     else
//     {
//         numero = 0;
//         switch (Trit1)
//         {
//         case 0:
//             numero -= 3 * 3 * 3;
//             break;

//         case 2:
//             numero += 3 * 3 * 3;
//             break;
//         default:
//             break;
//         }
//         switch (Trit2)
//         {
//         case 0:
//             numero -= 3 * 3;
//             break;

//         case 2:
//             numero += 3 * 3;
//             break;
//         default:
//             break;
//         }
//         switch (Trit3)
//         {
//         case 0:
//             numero -= 3;
//             break;

//         case 2:
//             numero += 3;
//             break;
//         default:
//             break;
//         }
//         switch (Trit4)
//         {
//         case 0:
//             numero -= 1; // 3⁰
//             break;

//         case 2:
//             numero += 1; // 3⁰
//             break;
//         default:
//             break;
//         }
//         printf("Seu número Trit convertido para base Decimal é: %d\n", numero);
//     }
// }

// /*
//     Digitar os 4 últimos dígitos do cartão
//     Digitar horário (HHMM)
//     Gera 2 números utilizando os 8 dígitos (4 de cada)
//     Número1 = 2 maiores dígitos do cartão e 2 maiores dígitos do horário
//     Numero2 = 2 menores dígitos do cartão e 2 menores dígitos do horário
//     ex: 1234 (cartão) 12:34 (horas)
//         Número1 = 3434 //(O maior par do cartão 34 e o maior par das horas 34);
//         Número2 = 1212 //(O menor par do cartão 12 e o menor par das horas 12);
// */

// int main()
// {
//     int numero_cartao, horas, par_maior, par_menor, digito_1_cartao, digito_1_horas, digito_2_cartao, digito_2_horas, numero_maior, numero_menor, codigo_confirmacao;
//     par_maior, par_menor = 0;
//     printf("Digite os 4 últimos números do ser cartão e o horário sem ':' (Ex: 4980 e 1245): ");
//     scanf("%d%d", &numero_cartao, &horas);
//     digito_1_cartao = numero_cartao / 1000;
//     digito_1_horas = horas / 1000;
//     digito_2_cartao = (numero_cartao % 1000) / 100;
//     digito_2_horas = (horas % 1000) / 100;

//     if (digito_1_cartao > digito_1_horas)
//     {
//         par_maior += digito_1_cartao * 1000;
//         par_menor += digito_1_horas * 1000;
//     }
//     else
//     {
//         par_maior += (digito_1_horas * 1000);
//         par_menor += (digito_1_cartao * 1000);
//     }

//     if (digito_2_cartao > digito_2_horas)
//     {
//         par_maior += (digito_2_cartao * 100);
//         par_menor += (digito_2_horas * 100);
//     }
//     else
//     {
//         par_maior += (digito_2_horas * 100);
//         par_menor += (digito_2_cartao * 100);
//     }

//     digito_1_cartao = (numero_cartao % 100) / 10;
//     digito_1_horas = (horas % 100) / 10;
//     digito_2_cartao = (numero_cartao % 10);
//     digito_2_cartao = (horas % 10);
//     if (digito_1_cartao > digito_1_horas)
//     {
//         par_maior += (digito_1_cartao * 10);
//         par_menor += (digito_1_horas * 10);
//     }
//     else
//     {
//         par_maior += (digito_1_horas * 10);
//         par_menor += (digito_1_cartao * 10);
//     }

//     if (digito_2_cartao > digito_2_horas)
//     {
//         par_maior += (digito_2_cartao);
//         par_menor += (digito_2_horas);
//     }
//     else
//     {
//         par_maior += (digito_2_horas);
//         par_menor += (digito_2_cartao);
//     }
//     codigo_confirmacao = par_maior - par_menor;
//     printf("Seu código de confirmação é: %d", codigo_confirmacao);
// }
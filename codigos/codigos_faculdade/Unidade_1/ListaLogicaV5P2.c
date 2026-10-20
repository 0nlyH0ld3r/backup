#include <stdio.h>
#include <math.h>

/*
    11) Algoritmo para calcular a nota semestral de um aluno
    Nota semestral: Média entra a nota de 2 bimestres.
    Bimestre: Média entra a nota de 2 avaliações
*/

// int main(){
//     float nota_semestral, bimestre_1, bimestre_2, nota_1, nota_2;
//     printf("Digite, respectivamente, as suas notas das avaliações 1 e 2 do primeiro semestre: ");
//     scanf("%f %f", &nota_1, &nota_2);

//     if ((nota_1 > 10) || (nota_2 > 10) || (nota_2 < 0) || (nota_1 < 0)){
//         printf("\nNota inválida. Digite novamente\n");
//     }
//     else{
//         bimestre_1 = (nota_1 + nota_2) / 2;
//         printf("\nA sua nota do primeiro bimestre foi: %.2f\n", bimestre_1);

//         printf("Agora as notas 1 e 2 do segundo semestre: ");
//         scanf("%f %f", &nota_1, &nota_2);
//         bimestre_2 = (nota_1 + nota_2) / 2;
//         if ((nota_1 > 10) || (nota_2 > 10) || (nota_2 < 0) || (nota_1 < 0)){
//             printf("\nNota inválida. Digite novamente\n");
//         }
//         else{
//             bimestre_2 = (nota_1 + nota_2) / 2;
//             printf("A sua nota do segundo bimestre foi: %.2f\n", bimestre_2);

//             nota_semestral = (bimestre_1 + bimestre_2) / 2;
//             printf("Sua nota semestral é: %.2f", nota_semestral);
//         }
//     }
// }

// /* Faça um algoritmo que transforme a velocidade de um veículo de metros por segundo para km/h*/
// int main(){
//     float velocidade_ms, velocidade_kmh;
//     printf("Digite a velocidade do indivíduo em metros por segundo: ");
//     scanf("%f", &velocidade_ms);
//     if (velocidade_ms > 8000){
//         printf("\nÉ mais de oito mil!");
//     }
//     if (velocidade_ms < 0){
//         printf("\nVelocidade negativa paizão?");
//     }
//     else{
//         velocidade_kmh = velocidade_ms * 3.6;
//         printf("\nO indivíduo se move a uma velocidade média relativa de %.2fkm/h. Ele é brabo mesmo\n", velocidade_kmh);
//     }
// }

// /*
//     Resistência 1 e 2 em série. Ambas em paralelo com R3
//     R1 paralelo R2 = 1/R1 + 1/R2
//     R1R2 série R3 = (1/R1 + 1/R2) + R3
// */

// int main() {
//     float R1, R2, R3, Req /*Resistência equivalente. Seŕa utilizado duas vezes para printar o valor da resistência evilatente entre R1 e R2 e entre R3 e ambas*/;
//     printf("Digite os valores de 3 resistências (R1, R2 e R3, respectivamente) para que sejam calculados sua resistência equivalente de R1 em paralelo com R2 e R3 em série com ambas: ");
//     scanf("%f %f %f", &R1, &R2, &R3);

//     printf("\n R1: %.2f R2: %.2f R3: %.2f \nSerá feito então o cálculo da resistência equivalente em paralelo de R1 e R2 e a resistencia equivalente em série de R3 com ambas\n", R1,R2,R3);
//     if (R1 == R2) {
//         Req = R1 / 2; // Calcula a resistência em paralelo de R1 e R2 casa tenham valores iguais
//     }
//     else{
//     Req = (R1 * R2) / (R1 + R2); // Calcula a resistência em paralelo de R1 e R2 caso tenham valores diferentes
//     }
//     printf("A resistência equivalente de R1 e R2 em paralelo é: %.2f\n", Req);
//     Req += R3; // Calcula a resistência em série de R3 com a resistência em paralelo de R1 e R2
//     printf("A resistência em série das duas acima com R3 é: %.2f", Req);
// }

/*
  Crie um programa que inverte números de 3 algarismos: ex 013 = 310
*/

// int main()
// {
//     int numero, unidade, dezena, centena;
//     printf("Digite um número número de, obrigatoriamente, 3 algarismos (Ex: 013, 234): ");
//     scanf("%d", &numero);
//     unidade = numero % 100 % 10;
//     dezena = numero % 100 / 10;
//     centena = numero / 100;
//     numero = (unidade * 100) + (dezena * 10) + (centena * 1);
//     printf("%d\n", numero);
// }

// /*
//     Vai receber um valor e distribuir entre notas de dinheiro pra saque
//     Notas: 100, 50, 20, 10, 5
// */

// int main()
// {
//     int saque, nota_100, nota_50, nota_20, nota_10, nota_5, nota_2, moeda;
//     printf("Digite um valor para sacar (Não pode posuir centavos): ");
//     scanf("%d", &saque);
//     nota_100 = saque / 100;
//     saque = saque - (nota_100 * 100);

//     nota_50 = saque / 50;
//     saque = saque - (nota_50 * 50);

//     nota_20 = saque / 20;
//     saque = saque - (nota_20 * 20);

//     nota_10 = saque / 10;
//     saque = saque - (nota_10 * 10);

//     nota_5 = saque / 5;
//     saque = saque - (nota_5 * 5);

//     nota_2 = saque / 2;
//     saque = saque - (nota_2 * 2);

//     moeda = saque / 1;
//     saque = saque - (moeda * 1);

//     if (nota_100 != 0)
//     {
//         printf("Notas de cem: %d\n", nota_100);
//     }
//     if (nota_50 != 0)
//     {
//         printf("Notas de cinquenta: %d\n", nota_50);
//     }
//     if (nota_20 != 0)
//     {
//         printf("Notas de vinte: %d\n", nota_20);
//     }
//     if (nota_10 != 0)
//     {
//         printf("Notas de dez: %d\n", nota_10);
//     }
//     if (nota_5 != 0)
//     {
//         printf("Notas de cinco: %d\n", nota_5);
//     }
//     if (nota_2 != 0)
//     {
//         printf("Notas de dois: %d\n", nota_2);
//     }
//     if (moeda != 0)
//     {
//         printf("Moeda de um real: %d\n", moeda);
//     }
// }

// int main()
// {
//     int variavel_1, variavel_2, permutando;
//     printf("Digite o valor de duas variáveis do tipo inteiro: ");
//     scanf("%d %d", &variavel_1, &variavel_2);
//     printf("Os valores normais das variáveis são: \nVariável 1: %d, Variável 2: %d.\n\nApós a permutação se tornaram:", variavel_1, variavel_2);
//     permutando = variavel_1;
//     variavel_1 = variavel_2;
//     variavel_2 = permutando;
//     printf("Variável 1: %d, Variável 2: %d \n", variavel_1, variavel_2);
//     int teste = sqrtf(4);
//     printf("%f" teste);
// }

// int main()
// {
//     float salario, desconto;
//     printf("Digite seu salário: ");
//     scanf("%f", &salario);
//     desconto = (salario / 100) * 11;
//     if (desconto > 334.29)
//     {
//         desconto = 334.29;
//     }
//     printf("\nSeu desconto é de R$%.2f", desconto);
// }

// int main()
// {
//     // Preparando terreno com as variáveis
//     float A, G, Litros, desconto;
//     char Abastecendo;
//     A = 1.90;
//     G = 2.70;
//     printf("Qual o tipo de combustível a ser abastecido? (A - Álcool | G - Gasolina): ");
//     Abastecendo = getchar();
//     printf("Quantos litros deseja abastecer: ");
//     scanf("%f", &Litros);

//     if (Litros <= 24 && Litros > 0)
//     {
//         desconto = 0.04;
//     }
//     else if (Litros > 25)
//     {
//         desconto = 0.04;
//     }
//     A -= A * desconto;
//     G -= A * desconto;

//     // Determinando tipo de combustível e cálculo do preço
//     if (Abastecendo == 'A' || Abastecendo == 'a')
//     {
//         printf("\nÁlcool");
//         A *= Litros;
//         printf("\nO valor de álcool a ser pago por %.2f litros é: %.2f", Litros, A);
//     }
//     else if (Abastecendo == 'G' || Abastecendo == 'g')
//     {
//         printf("\nGasolina");
//         G *= Litros;
//         printf("\nO valor de álcool a ser pago por %.2f litros é: %.2f", Litros, G);
//     }
//     else
//     {
//         printf("\nVerifique se digitou o caracter correspondente a um tipo válido de combustível");
//     }
// }

/* Quarter back rating:
    ((passes acertados / passes tentados) - 0.3) / 0.2.
    Quarter back rating <= 2.375 && Quarter back rating >= 0
    ((Jardas passadas / passes tentados) -3) / 4
    Não pode ser maior que 2.375 nem menor que 0
    (Passes para touchdowns / passes tentados) / 0.05
    Não pode ser maior que 2.375 nem menor que 0
    ((Passes interceptados / passes tentados) - 0.095) / 0.04
    Não pode ser menos que 0 nem mais que 2.375
*/

// int main()
// {
//     float passes_tentados, passes_acertados, passes_interceptados, jardas_passadas, passes_touchdown, quarter_back_rating;
//     printf("Digite o número de passes tentados, passes acertados, passes interceptados, jardas passadas e passes touchdown do quarterback: ");
//     scanf("%f %f %f %f %f", &passes_tentados, &passes_acertados, &passes_interceptados, &jardas_passadas, &passes_touchdown);

//     passes_touchdown = (passes_touchdown / passes_tentados) / 0.05;
//     if (passes_touchdown > 2.375)
//     {
//         passes_touchdown = 2.375;
//     }
//     else if (passes_touchdown < 0)
//     {
//         passes_touchdown = 0;
//     }

//     jardas_passadas = ((jardas_passadas / passes_tentados) - 3) / 4;
//     if (jardas_passadas > 2.375)
//     {
//         jardas_passadas = 2.375;
//     }
//     else if (jardas_passadas < 0)
//     {
//         jardas_passadas = 0;
//     }

//     passes_acertados = ((passes_acertados / passes_tentados) - 0.3) / -0.2;
//     if (passes_acertados > 2.375)
//     {
//         passes_acertados = 2.375;
//     }
//     else if (passes_acertados < 0)
//     {
//         passes_acertados = 0;
//     }

//     passes_interceptados = ((passes_interceptados / passes_tentados) - 0.095) / 0.04;
//     if (passes_interceptados > 2.375)
//     {
//         passes_interceptados = 2.375;
//     }
//     else if (passes_interceptados < 0)
//     {
//         passes_interceptados = 0;
//     }

//     quarter_back_rating = ((passes_acertados + passes_interceptados + passes_touchdown + jardas_passadas) * 100) / 6;
//     printf("\nO quarter back rating foi: %.2f\n", quarter_back_rating);
// }

// /*
//     A = Passou em todos
//     B = Passou em todos mas não passou em III ou V
//     C = Passou em I e II, III ou IV, mas não em 5
//     D = Reprovado: Outras situações
// */
// int main()
// {
//     int I, II, III, IV, V;
//     printf("Digite 1 (Passado) ou 0 (Reprovado) para cada avaliação, respectivamente (Ex: 0 1 1 0 1)\n A, B, C, D, E: ");
//     scanf("%d%d%d%d%d", &I, &II, &III, &IV, &V);
//     if (I && II && III && IV && V)
//     {
//         printf("Parabéns, sua nota é A\n");
//     }
//     else if (I && II && (III || V) && IV)
//     {
//         printf("Parabéns, sua nota é B\n");
//     }
//     else if (I && II && (III || IV) && (!V))
//     {
//         printf("Parabéns, sua nota é C\n");
//     }
//     else
//     {
//         printf("Foi reprovado. Estude mais vagabundo");
//     }
// }

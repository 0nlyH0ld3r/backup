#include <stdio.h>








// /*
//     Receber valores dos lados de um retângulo
//     Calcular área e perímetro do retângulo
//     Área do retângulo = B * H
//     Perímetro do retângulo = 2B + 2H
// */

// int main(){
//     double h;
//     double b;
//     double area_retangulo;
//     double perimetro_retangulo;
//     printf("Insira a altura do retângulo\n");
//     scanf("%lf", &h);
//     printf("Insira a largura do retângulo\n");
//     scanf("%lf", &b);
//     area_retangulo = h * b;
//     perimetro_retangulo =(2 * h) + (2 * b);
//     printf("O seu retângulo de altura %.2lf e base %d tem área %.2lf e perímetro %.2lf\n", h, b, area_retangulo, perimetro_retangulo);
    
// }









// /*
//     Calcule o perímetro e a área de um quadrado recebendo como valor um de seus lados
// */
// int main(){
//     double a;
//     double area_quadrado;
//     double perimetro_quadrado;
//     printf("Digite o valor de um dos lados de um quadrado \n");
//     scanf("%lf", &a);
//     area_quadrado = a * a;
//     perimetro_quadrado = a * 4;  
//     printf("A área do seu quadrado de lado %.2lf é de %.2lf e seu perímetro %.2lf", a, area_quadrado, perimetro_quadrado);
// }










/*
    Dado o tamanho do raio de um circunferência, calcule o raio e o perímetro da mesma.
    Área = piR²
    Perímetro = 2piR
*/
// int main(){
//     double raio_circunferencia;
//     double perimetro_circunferencia;
//     double area_circunferencia;
//     double pi = 3.14;
//     printf("Qual o raio da sua circunferência?\n");
//     scanf("%lf", &raio_circunferencia);
//     perimetro_circunferencia = (2 * raio_circunferencia) * pi;
//     area_circunferencia = (raio_circunferencia * raio_circunferencia) * pi;
//     printf("O périmetro e a área da sua circunferência de raio %.2lf são, respectivamente:\n %.2lf \n %.2lf\n", raio_circunferencia, perimetro_circunferencia, area_circunferencia);
//     int pausing_the_code = getchar();
// }










// /* Dado os três lados de um triângulo, calcule seu perímetro
//     Perímetro do triângulo = lado a + lado b + lado c
// */
// // int main(){
// //     double lado_a_triangulo;
// //     double lado_b_triangulo;
// //     double lado_c_triangulo;
// //     double perimetro_triangulo;
// //     printf("Digite o valor do lado A do triângulo\n");
// //     scanf("%lf", &lado_a_triangulo);
// //     printf("Digite o valor do lado B do triângulo\n");
// //     scanf("%lf", &lado_b_triangulo);
// //     printf("Digite o valor do lado C do triângulo\n");
// //     scanf("%lf", &lado_c_triangulo);
// //     perimetro_triangulo = lado_a_triangulo + lado_b_triangulo + lado_c_triangulo;
// //     printf("O perímetro do seu triângulo de lados %.2lf, %.2lf e %.2lf, é:\n %.2lf\n", lado_a_triangulo, lado_b_triangulo, lado_c_triangulo, perimetro_triangulo); 
// // }










// /*
//     Exiba o sucessor de um numero inteiro
// */

// int main(){
//     int numero;
//     printf("Digite um número inteiro aleatório\n")
//     scanf("%d", &numero);
//     int sucessor_do_numero = numero + 1;
//     printf("O sucessor de %d é %d\n", numero, sucessor_do_numero);
// }







// /*
//     Leia dois números inteiros, e exiba o quociente e o resto da divisão inteira entre eles
//     '/' Calcula o quociente
//     '%' Calcula o resto
// */

// int main(){
//     int dividendo;
//     int divisor;
    
//     printf("Digite o dividendo (Um número inteiro)\n");
//     scanf("%d", &dividendo);
//     printf("Digite o divisor (Outro número inteiro)\n");
//     scanf("%d", &divisor);

//     int quociente = dividendo / divisor;
//     int resto     = dividendo % divisor;

//     printf("O quociente da divisão entre %d e %d é: \n %d \n E o resto da divisão é: \n %d\n", dividendo, divisor, quociente, resto);
// }







// /*
//     Solicitar a idade de uma pessoa em dias e informar na tela a idade em anos, meses e dias.
//     1 ano = 365 dias, 1 mês = 30 dias

//     Divide dias por 365 e pega o quociente em anos. O resto é dividido por 30 e pega o quociente em meses. O resto viram dias
//     */

// int main(){
//     int idade_em_dias;
//     int anos_de_idade;
//     int meses_de_idade;
//     int dias_de_idade;
//     int ano = 365;
//     int mes = 30;


//     printf("Digite sua idade em dias\n");
//     scanf("%d", &idade_em_dias);

//     anos_de_idade = idade_em_dias / ano;
//     meses_de_idade = (idade_em_dias % ano) / mes;
//     idade_em_dias = (idade_em_dias % ano) % mes;


//     printf("O indivíduo de %d dias de vida, possui idade de %d anos %d meses e %d dias\n", idade_em_dias, anos_de_idade, meses_de_idade);
// }










// /*
//     Dado que a fórmula para conversão de Fahrenheit para Celsius é C = 5/9 (F – 32), leu um
// valor de temperatura em Fahrenheit e exibi-lo em Celsius
// */

// int main(){
//     float input_Farenheit;
//     float output_Celsius;
//     printf("Digite um valor de temperatura em Farenheit\n");
//     scanf("%f", &input_Farenheit);
//     output_Celsius = (input_Farenheit - 32) * 5 / 9; 
//     printf("%.2f\n",output_Celsius);
// }












// /*
//     Faça um algoritmo que calcule e apresente o valor do volume de uma lata de óleo, dado seu raio e sua altura.
//     area_base_lata = pi * (raio * raio)
//     area_lado_lata = 2 * altura * raio * pi
//     volume_lata = area_base_lata * altura
//     pi = 3,14
// */

// int main(){
//     float pi = 3.14;
//     float raio_lata;
//     float altura_lata;
//     printf("Digite o raio da lata\n");
//     scanf("%f", &raio_lata);
//     printf("Digite a altura da lata\n");
//     scanf("%f", &altura_lata);
//     float area_base_lata = (raio_lata * raio_lata) * pi;
//     float volume_lata = area_base_lata * altura_lata;
//     printf("O volume da lata de altura %.2f e raio %.2f é: %.2f\n", altura_lata, raio_lata, volume_lata);
// }









// /*
//     Converter um número menor que 32 em um binário
//     (Método:  Divisão recursiva)
//     numero
//     binario_4 = numero % 2
//     binario_3 = numero / 4 % 2
//     binario_2 = numero / 8 % 2
//     binario_1 = numero / 16 % 2
// */


// int main(){
//     int  numero;
//     printf("Digite um número menor que 32 para ser convertido em um binário de 5 digitos\n");
//     scanf("%d", &numero);
//     int binario_5 = numero % 2;
//     int binario_4 = numero / 2 % 2;
//     int binario_3 = numero / 4  % 2;
//     int binario_2 = numero / 8 % 2;
//     int binario_1 = numero / 16 % 2;
//     printf("O seu binário é: %d%d%d%d%d \n", binario_1, binario_2, binario_3, binario_4, binario_5);
// }
















#include <stdio.h>

// int main(){
//     int valor1, valor2, valor3, somaMaiores;
//     printf("Digite três números inteiros diferentes:\n");
//     scanf("%d %d %d", &valor1, &valor2, &valor3);
//     if(valor1 > valor2 && valor2 > valor3){
//         somaMaiores = valor1 + valor2;
//         printf("Os maiores números são %d e %d.\nO valor da soma entre eles é: %d", valor1, valor2, somaMaiores );
//     }
//     else if(valor2 > valor1 && valor3 > 1){
//         somaMaiores = valor2 + valor3;
//         printf("Os maiores números são %d e %d.\nO valor da soma entre eles é: %d", valor2, valor3, somaMaiores );
//     }
//     else{  // (valor2 < valor1) (valor2 < valor3)
//         somaMaiores = valor3 + valor1;
//         printf("Os maiores números são %d e %d.\nO valor da soma entre eles é: %d", valor1, valor3, somaMaiores);
//     }
// }
// //    scanf("%d", valor2); 1 + 2; 1 + 3; 2 + 3

// // 2 + 3 (V)
// // 1 + 3 (V)
// // 1 + 2 (V)







/*
    Escrever um número de ATÉ 3 dígitos menor ou igual a 777 em base octal (Octal:  765  7*8²  6*8¹ 5*⁰)
*/
int main(){
    int numeroOctal, centenaOctal, dezenaOctal, unidadeOctal;
    int numeroDecimal;
    if (numeroOctal <= 777){
        printf("Digite um número de três algarismos menor que 777, para que ele seja convertido de base octal para base decimal: \n");
        scanf("%d", &numeroOctal);                            // Recebe o valor do número na base Octal
        centenaOctal = numeroOctal / 100;                     // 
        dezenaOctal = numeroOctal % 100 / 10;
        unidadeOctal = numeroOctal % 100 % 10;

        printf("%d, %d, %d\n", centenaOctal, dezenaOctal, unidadeOctal);
        
        numeroDecimal = (unidadeOctal * 1) + (dezenaOctal * 8) + (centenaOctal * (8 * 8));
        printf("Esse é o seu número de base octal convertido para base decimal: %d\n", numeroDecimal);
    }
    else{
        printf("Esse número não é suportado");
    }
}
#include <stdio.h>

int main(){
    int numero, dezena, unidade;
    printf("Digite um número de 1 a 100: ");
    scanf("%d", &numero);


    // Pra determinar se o número estiver fora da range determinada (De 1 a 100)
    if (numero == 0 || numero > 100){
        printf("%d não é um valor válido\n", numero);
    }

    // Se o número for 100, já tira de jogo
    else if (numero == 100){
        printf("CEM");
    }

    // Se o número for 10, também tira de jogo
    else if (numero == 10){
        printf("DEZ\n");
    }

    // Se o número estiver entre 1 e 9, então ele é só o algorismo da unidade.
    else if (numero >= 1 && numero < 10){
        unidade = numero;
    }

    // Se o número for maior que 10, pega os restos das divisões por 100 e por 10 pra determinar a unidade
    // O resto da divisão por 100 determina a centena
    else if (numero > 10 && numero < 100){
        unidade = (numero % 100) % 10;
        dezena = (numero % 100) / 10;
    }

    // Se a dezena for 10 e a unidade for maior que 1, então os nomes são diferentes. Não Dez e um, mas Onze
    if (dezena == 10 && unidade >= 1){

         switch(unidade){
            case 1:
                printf("ONZE\n");
            break;
            case 2:
                printf("DOZE\n");
            break;
            case 3:
                printf("TREZE\n");
            break;
            case 4:
                printf("QUATORZE\n");
            break;
            case 5:
                printf("QUINZE\n");
            break;
            case 6:
                printf("DEZESSEIS\n");
            break;
            case 7:
                printf("DEZESSETE\n");
            break;
            case 8:
                printf("DEZOITO\n");
            break;
            case 9:
                printf("DEZENOVE\n");
            break;
        }
    }
    // Mas se não for o caso, os outros números seguem um padrão: Vinte e, Trinta e, Quarenta e
    else if (dezena > 2 || unidade >= 1){
        switch(dezena){
            case 2:
                printf("VINTE");
            break;
            case 3:
                printf("TRINTA");
            break;
            case 4:
                printf("QUARENTA");
            break;
            case 5:
                printf("CINQUENTA");
            break;
            case 6:
                printf("SESSENTA");
            break;
            case 7:
                printf("SETENTA");
            break;
            case 8:
                printf("OITENTA");
            break;
            case 9:
                printf("NOVENTA");
            break;
            default:
                // O default vazio tá sendo utilizado pro caso de não haver dezena (ou unidade no switch das unidades), pra simplesmente não printar
                // nada, assim posso utilizar o mesmo código pra escrever os dois.
            break;
        }
        if (dezena > 1 && unidade >= 1){ // Se tiver dezena e unidade, vai printar um E pra não ficar VINTE UM. Assim fica VINTE E UM
            printf(" E ");
        }
        switch(unidade){
            case 1:
                printf("UM\n\n\n");
            break;
            case 2:
                printf("DOIS\n\n\n");
            break;
            case 3:
                printf("TRÊS\n");
            break;
            case 4:
                printf("QUATRO\n\n\n");
            break;
            case 5:
                printf("CINCO\n\n\n");
            break;
            case 6:
                printf("SEIS\n\n\n");
            break;
            case 7:
                printf("SETE\n\n\n");
            break;
            case 8:
                printf("OITO\n\n\n");
            break;
            case 9:
                printf("NOVE\n\n\n");
            break;
            default:
            break;
        }
    }
}

# include <stdio.h>
# include <stdlib.h>

int main(){
    int num, div, primo, numPrimos;
    numPrimos = 0; // Zerando o número de números primos
    num = 2; // Número começa em 2
    div = 2; // Menor divisor tirando o 1. Qualquer número dividido por 1 tem resto 0
    primo = 1; // Enquanto não se provar o contrário, é primo
    while (numPrimos < 50)
    {
        while (primo == 1 && div <= num / 2)
        {
            if (num % div == 0)
            {
                primo = 0;
            }
            div ++;
        }
        if (primo)
        {
            numPrimos ++; 
            printf("%d\n", num);
        }
        primo = 1;
        div = 2;
        num ++;
        
    }
}

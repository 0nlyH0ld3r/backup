#include <stdio.h>

// /*
//     numero (binário)
//     paridade_numero = soma dos bits % 2
//     Calcular paridade de um número entre 0 e 31 e gerar um com paridade 0 (formado pelo acréscimo de 0 ou 1 dependendo da paridade do número atual)
//     Para criar o novo número: adicionar um novo bit (0 ou 1) como último algarismo. 0100 (paridade 1)  -> 01001 (paridade 0)
// */
// int main()
// {
//     int numero, bit1, bit2, bit3, bit4, bit5, paridade, novo_numero;

//     printf("Digite um número binario de 0 a 31 (00000 até 11111): ");
//     scanf("%d", &numero);
//     bit1 = numero / 10000;                   // 10000
//     bit2 = numero % 10000 / 1000;            // 01000
//     bit3 = numero % 10000 % 1000 / 100;      // 00100
//     bit4 = numero % 10000 % 1000 % 100 / 10; // 00010
//     bit5 = numero % 10000 % 1000 % 100 % 10; // 00001
//     paridade = (bit1 + bit2 + bit3 + bit4 + bit5) % 2;
//     numero = ((bit1 * 16) + (bit2 * 8) + (bit3 * 4) + (bit4 * 2) + bit5);

//     printf("Seu número é: %d \nEle possui paridade: %d", numero, paridade);

//     if (paridade == 1)
//     {
//         novo_numero = (bit1 * 100000) + (bit2 * 10000) + (bit3 * 1000) + (bit4 * 100) + (bit5 * 10) + 1;
//         numero = (bit1 * 32) + (bit2 * 16) + (bit3 * 8) + (bit3 * 4) + (bit1 * 2) + 1;
//     }
//     else if (paridade == 0)
//     {
//         novo_numero = (bit1 * 100000) + (bit2 * 10000) + (bit3 * 1000) + (bit4 * 100) + (bit5 * 10) + 0;
//         numero = (bit1 * 32) + (bit2 * 16) + (bit3 * 8) + (bit3 * 4) + (bit1 * 2) + 0;
//     }
//     printf("\n\n\nO novo número em decimal é: %d \nEm binário é %d\n", numero, novo_numero);
// }

// int main()
// {
//     int ataque1, ataque2, ataque3;
//     printf("Um Ratatta selvagem apareceu!\n");
//     printf("Digite o valor de 3 ataques (Números inteiros) para seu Pokemon derrotar o Rattata selvagem: ");
//     scanf("%d%d%d", &ataque1, &ataque2, &ataque3);

//     if ((ataque1 > 10 || ataque2 > 10 || ataque3 > 10) && (ataque1 % 2 == 0 || ataque2 % 2 == 0 || ataque3 % 2 == 0))
//     {
//         printf("Rattata selvagem foi derrotado\n");
//     }
//     else
//     {
//         printf("Rattata selvagem utilizou Quick Attack! \nSeu Pokemon foi derrotado por Rattata selvagem\n");
//     }
// }

// /*
//     Formato: HH, MM, SS, CC
//     Hora, Minuto, Segundo, Milissegundo
//     0<= Hora <= 23
//     0<= Minuto <= 59
//     0<= Segundo <= 59
//     0<= Milissegundo<= 99

//     Decimal:
//     0 <= H <= 9
//     0 <= M <= 99
//     0 <= S <= 99
//     = <= MS <= 99
// */

// int main()
// {
//     int Hora, Minuto, Segundo, Milissegundo;
//     int Tempo;
//     float RazaoDecimal;
//     int MilissegundosDia24Horas = 24 * 60 * 60 * 100;
//     int MilissegundosDia10Horas = 10000000;
//     printf("Digite o horário no formato HHMMSSCC (Hora, Minuto, Segundo, Milissegundo): ");
//     scanf("%d", &Tempo);
//     Hora = Tempo / 1000000;
//     Minuto = (Tempo % 1000000) / 10000;
//     Segundo = (Tempo % 1000000 % 10000) / 100;
//     Milissegundo = (Tempo % 1000000 % 10000 % 100);
//     if (Segundo > 59)
//     {
//         Segundo -= 60;
//         Minuto += 1;

//         if (Minuto > 59)
//         {
//             Minuto -= 60;
//             Hora += 1;
//         }
//     }
//     else if (Minuto > 59)
//     {
//         Minuto -= 60;
//         Hora += 1;
//     }
//     if (Hora > 23)
//     {
//         Hora -= 24;
//     }
//     printf("%d Hora(s) %d Minuto(s) %d Segundo(s) e %d Milissegundo(s)\n", Hora, Minuto, Segundo, Milissegundo);
//     // Convertendo pra milissegundos
//     Tempo = Hora * 60;
//     Tempo = (Tempo + Minuto) * 60;
//     Tempo = (Tempo + Segundo) * 100;
//     Tempo = (Tempo + Milissegundo);

//     // Setando os milissegundos pro padrão decimal
//     RazaoDecimal = Tempo;
//     RazaoDecimal /= MilissegundosDia24Horas;
//     Tempo = RazaoDecimal * MilissegundosDia10Horas;

//     // Convertendo pras horas
//     Hora = Tempo / 1000000;
//     Minuto = (Tempo % 1000000) / 10000;
//     Segundo = (Tempo % 10000) / 100;
//     Milissegundo = Tempo % 100;

//     printf("Horário decimal: \n%d Hora(s), %d Minuto(s), %d Segundo(s) e %d Milissegundo(s)", Hora, Minuto, Segundo, Milissegundo);
// }
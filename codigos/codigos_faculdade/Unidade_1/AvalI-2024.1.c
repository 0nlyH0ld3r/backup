// #include <stdio.h>

// /*
//     Uma partícula em um acelerador de partículas
//     Recebe uma entrada = distância
//     Para sair do emissor até a base (km 0) da circunferência, anda 3 km.
//     Então faz distância - 3.
//     Depois ele faz um certo número de voltas no acelerador (cada volta 8km)
//     distância %= 8
//     A cada volta ele para na base. Depois faz a distância da base até o emissor.
//     base 1: 3km
//     base 2: 4km
//     base 3: 5km
//     if distância - baseN = 0
// */

// int main()
// {
//     int distancia_total;
//     int volta_acelerador = 8;
//     int emissor_ate_acelerador = 3;
//     int base_1 = 3;
//     int base_2 = 4;
//     int base_3 = 5;
//     printf("Qual foi a distância percorrida pela partícula?: ");
//     scanf("%d", &distancia_total);
//     distancia_total -= emissor_ate_acelerador;
//     distancia_total = distancia_total % volta_acelerador;
//     if (distancia_total == base_1)
//     {
//         printf("O acelerador alcançou a base 1!\n");
//     }
//     else if (distancia_total == base_2)
//     {
//         printf("O acelerador alcançou a base 2!\n");
//     }
//     else if (distancia_total == base_3)
//     {
//         printf("O acelerador alcançou a base 3!\n");
//     }
//     else
//     {
//         printf("O acelerador não alcançou nenhuma das bases\n");
//     }
// }

#include <stdio.h>
int main()
{
    int ca, cs, ra1, ra2, ra3, rs1, rs2, rs3, dif;
    int mov = 0;
    scanf("%d%d", &ca, &cs);
    ra1 = ca / 100;
    ra2 = (ca % 100) / 10;
    ra3 = ca % 10;
    rs1 = cs / 100;
    rs2 = (cs % 100) / 10;
    rs3 = cs % 10;

    dif = ra1 - rs1;
    if (dif < 0)
    {
        dif *= -1;
    }
    if (dif >= 5)
    {
        mov += 10 - dif;
    }
    else if (dif < 5)
    {
        mov += dif;
    }

    dif = ra2 - rs2;
    if (dif < 0)
    {
        dif *= -1;
    }
    if (dif >= 5)
    {
        mov += 10 - dif;
    }
    else if (dif < 5)
    {
        mov += dif;
    }

    dif = ra3 - rs3;
    if (dif < 0)
    {
        dif *= -1;
    }
    if (dif >= 5)
    {
        mov += 10 - dif;
    }
    else if (dif < 5)
    {
        mov += dif;
    }
    printf("\n\n%d Movimentos são o mínimo para desbloquear o cadeado\n", mov);
}

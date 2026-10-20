#include <stdio.h>
#include <stdlib.h>
/*
Calcular a quantidade de latas e o custo para pintar tanques cilíndricos
Variáveis fornecidas:
Cilindro{
  Altura e Raio}

Preço da lata de tinta (5 litros)
{
    Cada litro pinta 3 metros quadrados}
*/
int main(){
  // Área das variáveis
  double altura_cilindro;                                                    // CM  → M
  double raio_cilindro;                                                      // CM  → M
  double area_base_cilindro;                                                 // M²
  double area_lado_cilindro;                                                 // M²
  double area_total_cilindro;                                                // M³
  double capacidade_lata_tinta = 5;                                          // L
  double preco_lata_tinta = 20.0;                                            // R$
  double area_pintada_por_lata = capacidade_lata_tinta * 3;                  // M²
  int quantidade_tinta_necessaria;                                           // Latas
  //

  printf("Digite a altura do tanque cilíndrico (em Centímetros) \n");
  scanf("%lf", &altura_cilindro);
  printf("Digite o raio do tanque cilíndrico (em Centímetros) \n");
  scanf("%lf", &raio_cilindro);

  altura_cilindro /= 100;                                                    // Convertendo de CM pra Metros
  raio_cilindro /= 100;                                                      // Convertendo de CM pra Metros

  // Cálculo da área da base do Cilindro
  area_base_cilindro = (raio_cilindro * raio_cilindro) * 3.14;
  
  // Cálculo da área lateral do cilindro
  area_lado_cilindro = 2 * 3.14 * raio_cilindro * altura_cilindro;
  
  // Cálculo da área total do cilindro (Soma das 2 áreas anteriores)
  area_total_cilindro = (area_base_cilindro + area_lado_cilindro);

  printf("A área total do cilindro é de %.2lf metros² \a\n", area_total_cilindro);

  quantidade_tinta_necessaria = area_total_cilindro / area_pintada_por_lata;
  double custo_tinta = preco_lata_tinta * quantidade_tinta_necessaria;
  printf("E são necessárias %d latas para pintar todo o tanque, resultando em um gasto de R$%.2lf", quantidade_tinta_necessaria, custo_tinta);
  int p = getchar();
}
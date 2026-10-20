# Pipeline

Melhorar o throughput da máquina.

- Identificar características em instruções
- Criar estágios de processamento comuns a diversas instruções
para executar coisas simultaneamente.

- Sistemas computacionais modernos
    - Processadores buscam maior velocidade

- Aumenta a quantidade de fluxo dentro do processador
    - Ocasiona aquecimento

## Como obter maior desempenho computacional

- Tecnologias mais avançadas -> Circuitos mais rápidos
- Melhor organização da CPU -> O uso de mútiplos registradores
                                e memória cache

- Pipeline

## O que é o pipeline

- Também conhecido como "linha de montagem"

- O pipeline divide o processamento em vários estágios

- Linha de montagem :: Henry Ford

- Linha de montagem :: Nissan

- Uma técnica que permite que os processadores executem processos diferentes
ao mesmo tempo, **respeitando a ordem de execução das instruções que chegam ao processador.**

- Novas entradas são aceitas, antes que as entradas aceitas previamente tenham terminado.

- Esta técnica aumenta o desempenho do processador e reduz o tempo de execução global
de tarefas.

- Não melhora a latência de cada tarefa individualmente

- Melhora o throughput (vazão)

- Vários processos executam em uma janela menor de tempo

### Exemplo:

- Busca de instrução (BI)

- Decodificação da instrução (DI)

- Busca de operandos (BO)

- Execução da instrução (EI)

- Escrita de Operando (EO)

```
BI  DI  BO  EI  EO
    BI  DI  BO  EI  EO
        BI  DI  BO  EI  EO
            BI  DI  BO  EI  EO
```

### Compartilhamento de tempo

Janelas de tempo em que o processador cicla entre processos para os executar em "paralelo"
Faz várias coisas em um curto espaço de tempo, mas não necessáriamente finaliza elas
nesse tempo. Mais coisas são executadas em menos tempo, mas tempo de processamento
individual é incrementado.

## Escala de integração

- Quarta geração
    - SSI   | Short Scale Integration
    - MSI   | Medium Short Integration
    - LSI   | Large Scale Integration
    - VLSI  | Very Large Scale Integration


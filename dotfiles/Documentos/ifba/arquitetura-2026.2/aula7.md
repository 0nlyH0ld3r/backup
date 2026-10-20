# PROCESSADORES

## O que é o processador

Componente de hardware responsável pelas atividades de processamento do computador.

- Executa e lê linguagem de máquina (bits).
- RISC e CISC

## Componentes do processador

- Unidade de controle
    - Controla dispositivos do sistema
    - Controla o BARRAMENTO


- Registrador
    - Armazena uma quantidade mínima de dados e instruções.
    - A memória principal (RAM) é muito mais lenta do que o processador, logo se faz necessário
    o uso de registradores para garantir que o processador possa utilizar e ler as instruções
    mais recorrentes / dados e instruções que chegaram da memória serem armazenadas em blocos.

### Unidade Lógica Aritmética

### Registradores

Registradores da ULA são registradores de uso específico, que possuem algum uso específico.

Os registradores de fora da ULA (Registradores da UC, geralmente) são de uso geral e armazenam 
diversos dados e instruções

- Flags de estado
    - Variáveis de controle

- Descolador
- Complemento (Complemento de 1)

- Contador de programa
    - Armazena a instrução atual
    - Aponta para a instrução a ser executada. Quando a instrução é executada, aponta pra instrução
    que for apontada pelo RI.

- Registrador de instrução
    - Armazena a próxima instrução
    - Armazena a próxima instrução a ser executada. Quando o Contador de programa aponta pra instrução dele,
    aponta pra nova próxima instrução

- Acumulador
    - Incremento e soma.
    - Acumula um valor junto com o outro. Ex: Guarda A e junta com B (A = 2, B = 5)

- Deslocador
    - Desloca bits.
    - Bit shift (Multiplicação / Divisão por dois)

### Barramento

## Linguagens

### Natural

- Linguagem humana

### Programação

- Auto nível: Python
- Intermerdiário: C
- Baixo nível: Linguagem de montagem (Assembly)

### De máquina

- Bits

## Compilação

- Análise Léxica
    - Verificar se há algum erro de digitação (Não digitar ; ou digitar IF ao invés de if em C)

- Análise Sintática
    - Verificar quais palavras fazem ou não fazem parte do dicionário da linguagem

- Análise Semântica
    - A lógica de código (Por exemplo fazer um if (if ()) )

- Geração de código intermediário
    - Código de montate e, às vezes, código objeto

- Código objeto
    - Código em linguagem de máquina
    - Código de cada arquivo em linguagem de programação compilado, pronto
    para ser ligado pelo linker a outros arquivos (ou nenhum) e gerar o
    binário final.

- BINÁRIO
    - Passo final.

Código objeto pode diferir para cada arquitetura de processador.
O código pode ser compatível com ambos os sitemas, mas, da mesma forma, será necessário recompilar o
programa para as diferentes máquinas, pois, mesmo que as arquiteturas sejam compatíveis, elas não
são as mesmas. E há também a compatibilidade de sistema operacional.

## Crise dos semicondutores



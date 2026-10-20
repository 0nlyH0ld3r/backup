# Modelo físico

## Harvard

Possui um barramento de controle e um de endereço entre ambas 
as memórias, tanto a de dados quanto a de instruções.

Total de 6 barramentos
* 1 de Dados
* 1 de Instruções
* 2 de Controle (Um pra cada memória)
* 2 de Endereço (Um pra cada memória)

### Barramento de dados

### Barramento de instrução

### Barramento de controle

### Barramento de endereço

## Von Neumann

Possui um barramento de controle e um de endereço ntre a memóra e a CPU

### Barramento de dados / instrução

### Barramento de controle

Passa instruções da Unidade de Controle para a memória

### Barramento de endereço

--------------------------------------------------------------------------------

# Modelo de execução de instrução

## CISC -| Von Neumann -> Complex Instruction Set Computer -> Instruções que requerem mais
## ciclos

Prevê como elemento principal para armazenar as instruções a memória RAM
    * Maior enfase no uso da RAM
    * Mais lento
    * Dispositivos que não requisitam tempo de resposta mínimo

Processador que executa instruções complexas:
    * Instruções longas;
    * Muitas operações matemáticas;
    * Diferentes operaçes matemáticas

Instruções não pssuem tamanho padrão;

Instruções requerem que o processador acesse a memória antes de sua execução

### Principais exemplares

- Processadores x86 -> Intel e AMD, por exemplo.

## RISC -| Harvard -> Reduced Instruction Set Computer

Prevê como elemento principal para armazenar as instruções os registradores (CACHE)
    * Maior enfase no uso de registradores
    * Mais rápido
    * Dispositivos que requisitam tempo de resposta mínimo

Processador executa instruções reduzidas
    * Uma instrução é subdividida em várias instruções menores e mais simples;
    * Instruções assumem um tamanho padrão;
    * Instruções executadas em apenas um ciclo (clock)

Algumas máquinas com arquitetura RISC são a Power da IBM e Sparc da Oracle

Comum em sistemas embarcados

Instruções padronizadas são executadas de forma mais rápida, mais eficiente

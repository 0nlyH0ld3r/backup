# CISC

- Buscacompletar uma tarefa com o menor número possível de instruções. Para isso,
o hardware do processador é capaz de compreender e executar uma série de
instruções "menores".

- Neste caso, um processador CISC viria preparado com uma instrução específica
    - MULT

- Opera diretamente na memória do computador.

- Instruções orientadas à **arquitetura** da máquina.

- Instruções simples -> Mais linhas de código

- 1 Instrução por ciclo

- Fácil de executar o pipeline

- Ex:

``````
CISC -> 4 x 5 (MULT)        <- Mais rápido
RISC -> 4 + 4 + 4 + 4 + 4   <- Mais lento
``````


- MULT é uma "instrução complexa".

- Não exige que o programador utilize explicitamente nenhuma função de LOAD
ou STORE

- Note que a multiplicação de dois números pdoe ser concluída com uma instrução.

- Instruções executadas dentro da memória RAM.

- Precisa trafegar entre CPU e RAM constantemente por meio de um barramento.

# RISC

- Usa apenas instruções simples que podem ser executadas em um ciclo de clock.

- Assim, o comando MULT pode ser dividido em três comandos separados:
    - LOAD  : Carrega os endereços da memória
    - PROD  : Calcula o produto dos dados nos endereços.
    - STORE : Armazena o resultado em um endereço da memória.

- Perde por gargalo de Von Neumann, ganha pode executar operações em velocidade
única do registrador (dentro da CPU).

- Instruções são orientadas ao programador (**software**)

- Instruções complexas -> menos linhas de código

- 1 instrução pode levar vários ciclos de clock

- Difícil de implementar o pipeline.


# Pipeline

Vias que otimizam / maximizam o processamento de dados.

- Magia :O

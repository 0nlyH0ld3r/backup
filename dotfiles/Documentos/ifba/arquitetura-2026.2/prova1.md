# Assuntos das avaliações

## MODELO VON NEUMANN

- Dados e instruções juntos em uma única memória
- Processador interage com a memória única de dados de instruções

## MODELO HARVARD

- Dados e instruções separados em duas memórias diferentes.
- Processador interage com as memórias de dados e instruções

## COMPONENTES

- Processador
    - Arquitetura física (Multiprocessada)

    - Arquitetura de instrução (CISC / RISC)

    - Arquitetura de execução (PIPELINE / ISA)

- Barramento

- Disco (?)

- Memória

- So

- Data: 20/10

## THREAD

- Thread

- Hyprthread
    - Um hardware que "cria" um núcleo virtual.
    - Núcleo físico cria uma unidade virtual (núcleo virtual)
    - Núcleo físico executa as próprias instruções e as instruções do
    núcleo virtual.
    - O núcleo físico alterna entre as próprias instruções e as instruções 
    do núcleo virtual.
    - Diminui o tempo de troca de contexto.
    - A não depende de B, não há necessidade de esperar A ser executado pra
    executar B, é possível deixar a execução de ambos em aberto e alternar entre
    elas.

- Multithread

# ASSUNTOS

- Von Neumann
- Harvard
- Risk
- Cisc
- Processador
- Barramento
- Ciclo de execução
- Pipeline

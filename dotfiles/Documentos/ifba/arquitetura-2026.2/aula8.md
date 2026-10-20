-- TODO: Adicionar a imagem do fluxo de fetch de instruções da CPU (slide de Flávia)
## Contador de programa (PC)

Um registrador que armazena a próxima instrução da CPU

Quando chegar a hora de executar a próxima instrução, a UC, lendo do barramento
de controle, ordena ao PC para enviar para o MAR (Memory Adress Register) o
endereço da próxima instrução para o barramento de endereços, por onde a memória
o lerá e enviará a instrução de tal endereço para o barramento de dados,
onde o IR lerá e enviará para a ULA.

## Registrador de instruções (IR)

Um registrador que armazena a instrução atual da CPU
Envia instruções para ULA

# Processador

# Unidade de Controle

Geral dois tipos de sinal:
- Controle interno
- Controle externo

As entradas para a unidade de controle são:
- Registrador de instrução
- Sinais de controle gerados por fontes eternas (uma interrupção, por exemplo)

Funções da Unidade de Controle
- Transferir dados:
    * Entre registradores
    * De um registrador para fora da CPU
    * De fora da CPU para os registradores

- Coordenar a execução das operações lógicas e aritméticas

-- TODO: Buscar a descrição das entradas e saída da UC no slide de Flávia

## Registradores

Em termos de componente de hardware, a memória é fundamental para a execução
dos programas;

Este componente seapresenta numa estrutura hierárquica
- No nível mais alto da hierarquia, a memória temalta velocidade e pouca 
capacidade de armazenamento.

- Rápido pra k7, mas n guarda quase nada

Os registradores podem ser:
- Visíveis para o usuário: Permite ao programador fazer acesso;
- De controle de estaduo: Usados pela UC (para controlara operação da CPU) e por
programas privilegiados do sistema operacional.

### Registradores visíveis:

Registradores de dados
- Não gravam instruções, apenas dados
-- Continuar isso com o slide de Flávia

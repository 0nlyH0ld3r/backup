# Uma escola.

## Entidades: 

- **alunos**

- **professores**

- **série**

- **disciplinas**

- **tabela alunos - disciplinas**
    - Tabela associativa para alunos e disciplinas

- **tabela professores - disciplinas**
    - Tabela associativa para professores e disciplinas

## Relacionamentos:

- **alunos**
    - Todo aluno deve cursar uma série.

- **série**
    - Toda série pode possuir um ou mais alunos. 
    - Toda série deve conter uma ou mais disciplinas.

- **disciplinas**
    - Toda disciplina pode ser lecionada por um ou mais professores.
    - Toda disciplina pode ser cursada por um ou mais alunos.

- **professores**
    - Todo professor deve lecionar uma ou mais disciplinas.
        - Pode existir professor sem disciplina?

## Atributos:

### alunos

- **id** | INTEIRO CHAVE PRIMÁRIA

- **nome** | TEXTO

- **nascimento** | DATE

- **cpf** | TEXTO UNICO

- **matrícula**

- **cod_serie** | UNICO CHAVE ESTRANGEIRA de série

### série

- **id** | INTEIRO CHAVE PRIMÁRIA

- **nome**? (Possívelmente mudará) | TEXTO UNICO

### disciplinas

- **id** | INTEIRO CHAVE PRIMÁRIA

- **nome** |

- **codigo** | TEXTO UNICO (Ex: INF029)

- **cod_serie** | UNICO CHAVE ESTRANGEIRA o código da série à qual pertence

### professores

- **id** | INTEIRO CHAVE PRIMÁRIA

- **nome** | TEXTO

- **nascimento** | DATE

- **cpf** | TEXTO UNICO

### Tabela associativa: alunos - disciplinas

- **cod_aluno** | CHAVE ESTRANGEIRA -> ID aluno
    - Poderia guardar a matrícula ao invés do ID?
        - Talvez seria melhor armazenar o ID, poderia tornar
        mais rápido a busca creio eu

- **cod_disciplina** | CHAVE ESTRANGEIRA -> ID disciplina

- **nota_aluno** | INTEIRO -> Nota do aluno em determinada disciplina (0 - 100)

- **faltas_aluno** | INTEIRO -> Faltas do aluno em determinada disciplina

- **data_vinculo** | DATE -> Data do vínvulo entre disciplina e aluno
    - Controla matrículas do aluno em anos diferentes.

### Tabela associativa: professores - disciplinas

- **cod_professor** | CHAVE ESTRANGEIRA -> ID professor

- **cod_disciplina** | CHAVE ESTRANGEIRA -> ID disciplina

- **data_vinculo** | DATE -> Data do vínvulo entre disciplina e professor

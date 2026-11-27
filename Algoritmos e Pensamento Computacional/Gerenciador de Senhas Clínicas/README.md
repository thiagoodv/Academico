# Gerenciador de Senhas Clínicas

## Identificação

- **Aluno:** Thiago Oliveira do Vale
- **Disciplina:** Algoritmos e Pensamento Computacional
- **Projeto:** Sistema de Gerenciamento de Senhas de Atendimento Clínico

## 1. Objetivo

O projeto tem como objetivo desenvolver um sistema em linguagem C para organizar as senhas de atendimento de uma clínica. O programa realiza o cadastro dos pacientes, identifica suas categorias e organiza as filas de acordo com as prioridades estabelecidas.

## 2. Funcionalidades

- Cadastro de pacientes com nome, gênero e idade.
- Registro de gestação, amamentação, necessidades especiais e obesidade.
- Classificação automática dos pacientes.
- Geração de senhas individuais por categoria.
- Organização das filas por prioridade.
- Consulta do próximo paciente.
- Chamada e finalização do atendimento.
- Exibição do painel de atendimento.
- Contagem de pacientes aguardando.
- Validação de informações digitadas.

## 3. Classificação dos pacientes

| Categoria | Senha | Critério |
|---|---|---|
| Normal | N001, N002... | Pacientes que não se enquadram nas demais categorias. |
| Preferencial | P001, P002... | Gestantes, lactantes, pessoas com necessidades especiais ou obesidade, mulheres a partir de 60 anos e homens a partir de 65 anos. |
| Urgente | U001, U002... | Pacientes com idade superior a 80 anos. |

A prioridade de atendimento segue a ordem: urgente, preferencial e normal. Dentro de cada categoria, é respeitada a ordem de chegada.

## 4. Organização dos arquivos

| Arquivo | Responsabilidade |
|---|---|
| `main.c` | Menu principal e inicialização do sistema. |
| `sistema.h` | Estruturas, constantes e declarações das funções. |
| `paciente.c` | Cadastro, classificação e geração de senhas. |
| `fila.c` | Inicialização, inserção e retirada de pacientes das filas. |
| `atendimento.c` | Consulta, chamada e finalização dos atendimentos. |
| `painel.c` | Exibição do painel e quantidade de pacientes aguardando. |

## 5. Principais funções

- `iniciarSistema()`: inicializa as filas e os contadores.
- `iniciarFila()`: prepara uma fila.
- `inserirFila()`: adiciona um paciente à fila.
- `retirarFila()`: retira o próximo paciente.
- `escolherFila()`: identifica a fila da categoria.
- `classificarPaciente()`: determina a categoria do paciente.
- `gerarSenha()`: gera a senha de atendimento.
- `cadastrarPaciente()`: realiza o cadastro.
- `consultarProximo()`: mostra quem será atendido em seguida.
- `chamarPaciente()`: chama o próximo paciente.
- `finalizarAtendimento()`: encerra o atendimento atual.
- `mostrarPainel()`: exibe as filas e o atendimento atual.
- `menu()`: apresenta as opções do sistema.

## 6. Como compilar e executar

O projeto utiliza a linguagem C e pode ser compilado com GCC.

Todos os arquivos `.c` devem ser compilados juntos:

```bash
gcc main.c paciente.c fila.c atendimento.c painel.c -o sistema
```

No Linux, execute:

```bash
./sistema
```

No Windows, execute:

```bash
sistema.exe
```

## 7. Exemplo de funcionamento

Exemplo de senhas geradas:

```text
Paciente cadastrado!
Senha: N001
Categoria: Normal

Paciente cadastrado!
Senha: P001
Categoria: Preferencial

Paciente cadastrado!
Senha: U001
Categoria: Urgente
```

O sistema chama primeiro os pacientes urgentes, depois os preferenciais e, por último, os normais.

## 8. Conceitos utilizados

- Linguagem C.
- Estruturas (`struct`).
- Funções e modularização.
- Estruturas condicionais.
- Estruturas de repetição.
- Vetores.
- Ponteiros.
- Manipulação de strings.
- Filas.
- Entrada e saída de dados.

## 9. Considerações finais

O desenvolvimento deste projeto permitiu praticar os conceitos estudados na disciplina, principalmente a criação de funções, a utilização de estruturas, a organização de filas e a divisão do programa em diferentes arquivos.

O sistema busca facilitar a organização dos atendimentos de uma clínica, respeitando as categorias e prioridades definidas na proposta da atividade.

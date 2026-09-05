<h1># 🧮 Calculadora em C</h1>

[👉 Clique aqui para abrir a Calculadora em C](./calculadora.c/)

## 📋 Descrição do projeto

Este projeto consiste no desenvolvimento de uma calculadora utilizando a linguagem de programação C.

A calculadora foi desenvolvida como atividade prática da disciplina de **Desenvolvimento de Algoritmos e Pensamento Computacional**, com o objetivo de aplicar na prática conceitos fundamentais de programação, como variáveis, tipos de dados, entrada e saída de informações, funções, estruturas condicionais, estruturas de repetição e utilização de bibliotecas.

O programa permite que o usuário escolha diferentes operações matemáticas, informe os valores necessários e visualize o resultado. Após realizar uma operação, o usuário pode continuar utilizando a calculadora ou escolher a opção de saída.

---

## 🎯 Objetivo

O objetivo do projeto é desenvolver uma calculadora com **20 operações matemáticas diferentes**, utilizando funções para organizar as operações e colocando em prática os principais conceitos estudados na disciplina.

Além dos cálculos, o projeto busca demonstrar:

- Utilização de variáveis e tipos de dados;
- Entrada de dados pelo teclado;
- Saída de informações no terminal;
- Estruturas condicionais;
- Estruturas de repetição;
- Criação e utilização de funções;
- Utilização da biblioteca `math.h`;
- Tratamento de erros;
- Organização e documentação de um projeto em C.

---

## ⚙️ Funcionalidades implementadas

A calculadora possui as seguintes 20 operações:

| Nº | Operação | Descrição |
|---|---|---|
| 1 | Soma | Soma dois números |
| 2 | Subtração | Subtrai o segundo número do primeiro |
| 3 | Multiplicação | Multiplica dois números |
| 4 | Divisão | Divide o primeiro número pelo segundo |
| 5 | Potência | Calcula um número elevado a outro |
| 6 | Raiz quadrada | Calcula a raiz quadrada de um número |
| 7 | Raiz cúbica | Calcula a raiz cúbica de um número |
| 8 | Seno | Calcula o seno de um ângulo |
| 9 | Cosseno | Calcula o cosseno de um ângulo |
| 10 | Tangente | Calcula a tangente de um ângulo |
| 11 | Logaritmo natural | Calcula o logaritmo natural de um número |
| 12 | Logaritmo base 10 | Calcula o logaritmo na base 10 |
| 13 | Valor absoluto | Retorna o valor absoluto de um número |
| 14 | Porcentagem | Calcula uma porcentagem de um valor |
| 15 | Média aritmética | Calcula a média de dois números |
| 16 | Graus para radianos | Converte um valor de graus para radianos |
| 17 | Radianos para graus | Converte um valor de radianos para graus |
| 18 | Área do círculo | Calcula a área de um círculo |
| 19 | Área do retângulo | Calcula a área de um retângulo |
| 20 | Hipotenusa | Calcula a hipotenusa de um triângulo retângulo |

---

## 🧩 Relação das 20 funções desenvolvidas

Cada operação matemática foi organizada em uma função própria.

### 1. `somar()`

Realiza a soma de dois números.

```c
double somar(double a, double b) {
    return a + b;
}
````

### 2. `subtrair()`

Realiza a subtração de dois números.

```c
double subtrair(double a, double b) {
    return a - b;
}
```

### 3. `multiplicar()`

Realiza a multiplicação de dois números.

```c
double multiplicar(double a, double b) {
    return a * b;
}
```

### 4. `dividir()`

Realiza a divisão de dois números.

A divisão por zero é verificada antes da função ser utilizada.

### 5. `potencia()`

Calcula uma potência utilizando a função `pow()` da biblioteca `math.h`.

### 6. `raizQuadrada()`

Calcula a raiz quadrada utilizando `sqrt()`.

### 7. `raizCubica()`

Calcula a raiz cúbica utilizando `cbrt()`.

### 8. `seno()`

Calcula o seno de um ângulo.

O ângulo informado pelo usuário é convertido de graus para radianos antes do cálculo.

### 9. `cosseno()`

Calcula o cosseno de um ângulo.

### 10. `tangente()`

Calcula a tangente de um ângulo.

### 11. `logNatural()`

Calcula o logaritmo natural utilizando `log()`.

### 12. `logBase10()`

Calcula o logaritmo na base 10 utilizando `log10()`.

### 13. `valorAbsoluto()`

Calcula o valor absoluto de um número utilizando `fabs()`.

### 14. `porcentagem()`

Calcula uma determinada porcentagem de um valor.

### 15. `media()`

Calcula a média aritmética de dois números.

### 16. `grausParaRadianos()`

Converte um valor informado em graus para radianos.

### 17. `radianosParaGraus()`

Converte um valor informado em radianos para graus.

### 18. `areaCirculo()`

Calcula a área de um círculo utilizando a fórmula:

```text
Área = π × raio²
```

### 19. `areaRetangulo()`

Calcula a área de um retângulo utilizando:

```text
Área = base × altura
```

### 20. `hipotenusa()`

Calcula a hipotenusa utilizando o Teorema de Pitágoras:

```text
hipotenusa = √(cateto1² + cateto2²)
```

---

## 📚 Bibliotecas utilizadas

O projeto utiliza duas bibliotecas:

### `stdio.h`

Utilizada para realizar a entrada e saída de dados.

As principais funções utilizadas são:

```c
printf()
scanf()
```

O `printf()` apresenta mensagens e resultados no terminal, enquanto o `scanf()` permite receber informações digitadas pelo usuário.

### `string.h`

Utilizada para comparar o texto informado pelo usuário com as opções da calculadora.

A função utilizada é:

```c
strcmp()
```

### `math.h`

Utilizada para realizar operações matemáticas que não são realizadas diretamente pelos operadores básicos da linguagem C.

Entre as funções utilizadas estão:

```c
pow()
sqrt()
cbrt()
sin()
cos()
tan()
log()
log10()
fabs()
```

Também é utilizada uma constante `PI` para realizar cálculos envolvendo radianos e a área do círculo.

---

## 🏗️ Organização do código

O código foi organizado de forma que cada operação matemática tenha sua própria função.

A estrutura básica do programa é:

```text
calculadora.c
│
├── Bibliotecas
│
├── Constante PI
│
├── Função de soma
├── Função de subtração
├── Função de multiplicação
├── Função de divisão
├── Função de potência
├── Função de raiz quadrada
├── Função de raiz cúbica
├── Função de seno
├── Função de cosseno
├── Função de tangente
├── Função de log natural
├── Função de log base 10
├── Função de valor absoluto
├── Função de porcentagem
├── Função de média
├── Função de graus para radianos
├── Função de radianos para graus
├── Função de área do círculo
├── Função de área do retângulo
├── Função de hipotenusa
│
└── main()
    ├── Menu
    ├── Entrada da operação
    ├── Estruturas condicionais
    ├── Chamada das funções
    ├── Exibição dos resultados
    └── Repetição do programa
```

A separação das operações em funções facilita a organização e a compreensão do código, além de evitar que todos os cálculos fiquem concentrados em um único trecho do programa.

---

## 🧠 Conceitos de programação utilizados

### 🔹 Funções

Foram utilizadas funções para separar cada operação matemática.

Por exemplo:

```c
double somar(double a, double b) {
    return a + b;
}
```

A função recebe dois valores, realiza o cálculo e retorna o resultado.

Isso permite que cada função tenha uma responsabilidade específica.

---

### 🔹 Estruturas condicionais

O programa utiliza estruturas `if` e `else if` para verificar qual operação foi escolhida pelo usuário.

Exemplo:

```c
if (strcmp(operacao, "+") == 0) {
    ...
}
else if (strcmp(operacao, "-") == 0) {
    ...
}
```

As estruturas condicionais também são utilizadas para verificar situações de erro.

Por exemplo, antes de realizar uma divisão, o programa verifica se o segundo número é diferente de zero.

---

### 🔹 Estruturas de repetição

Foi utilizada a estrutura `do...while`.

Ela permite que o programa continue executando novas operações sem precisar ser iniciado novamente.

A calculadora continua funcionando enquanto o usuário não escolher a opção:

```text
sair
```

---

### 🔹 Entrada de dados

A entrada de dados é realizada utilizando `scanf()`.

Exemplo:

```c
scanf("%lf", &a);
```

Dessa forma, o usuário pode informar os valores necessários para realizar cada operação.

---

### 🔹 Saída de dados

A saída de dados é realizada utilizando `printf()`.

Exemplo:

```c
printf("Resultado: %.2lf\n", resultado);
```

O resultado da operação é apresentado no terminal para o usuário.

---

### 🔹 Biblioteca `math.h`

A biblioteca `math.h` foi utilizada para realizar cálculos matemáticos mais avançados.

Por exemplo, para calcular uma potência:

```c
pow(a, b);
```

Para calcular uma raiz quadrada:

```c
sqrt(a);
```

Para calcular o seno:

```c
sin(valor);
```

A biblioteca facilita a realização dessas operações sem precisar implementar todas as fórmulas matemáticas manualmente.

---

## 🚨 Tratamento de erros

O programa possui verificações para evitar resultados inválidos em algumas operações.

Entre os casos tratados estão:

* Divisão por zero;
* Raiz quadrada de número negativo;
* Logaritmo de número menor ou igual a zero;
* Raio negativo no cálculo da área do círculo;
* Valores negativos para a área do retângulo;
* Valores inválidos para o cálculo da hipotenusa;
* Operação não encontrada.

Quando uma situação inválida é identificada, o programa informa o erro ao usuário em vez de realizar o cálculo.

---

## ▶️ Compilação

Para compilar o programa utilizando o GCC, abra o terminal na pasta onde está o arquivo `calculadora.c` e execute:

```bash
gcc calculadora.c -o calculadora -lm
```

A opção `-lm` é utilizada para fazer a ligação com a biblioteca matemática `math.h`.

---

## ▶️ Execução

Depois da compilação, execute o programa.

No Windows:

```bash
calculadora
```

No Linux:

```bash
./calculadora
```

---

## 💻 Exemplos de uso

### Exemplo 1 — Soma

```text
Escolha uma das 20 operacoes:

Digite a operacao: +
Digite a: 10
Digite b: 5

Resultado: 15.00
```

### Exemplo 2 — Potência

```text
Digite a operacao: potencia
Digite a: 2
Digite b: 3

Resultado: 8.00
```

### Exemplo 3 — Raiz quadrada

```text
Digite a operacao: raiz_quadrada
Digite o numero: 25

Resultado: 5.00
```

### Exemplo 4 — Área do círculo

```text
Digite a operacao: area_circulo
Digite o raio: 5

Area do circulo: 78.54
```

### Exemplo 5 — Encerrando a calculadora

```text
Digite a operacao: sair

Calculadora encerrada.
```
---

## 👨‍🎓 Identificação do estudante

**Aluno:** Thiago Oliveira

**Disciplina:** Algoritmos e Pensamento Computacional

---

## 📌 Considerações finais

O desenvolvimento desta calculadora permitiu aplicar conceitos fundamentais da linguagem C em um único projeto.

Durante a implementação foram utilizados **funções, estruturas condicionais, estruturas de repetição, entrada e saída de dados e a biblioteca `math.h`**, além de tratamento de erros e organização do código.

O projeto também possibilitou praticar a criação de um programa interativo, no qual o usuário pode realizar diferentes operações e continuar utilizando a calculadora até escolher encerrá-la.

```


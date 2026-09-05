

# 🌡️ Conversor de Temperaturas em C

[👉 Clique aqui para acessar o Conversor de Temperaturas]

## 📌 Descrição da atividade

Este projeto consiste no desenvolvimento de um programa em linguagem C que funciona como um conversor de temperaturas.

O programa apresenta um menu com seis opções de conversão entre as escalas Celsius, Fahrenheit e Kelvin. O usuário escolhe uma das opções, informa a temperatura e o programa realiza o cálculo correspondente.

A seleção da operação é realizada utilizando obrigatoriamente a estrutura `switch...case`.

---

## 🎯 Objetivo

O objetivo da atividade é desenvolver um programa capaz de realizar conversões entre diferentes escalas de temperatura utilizando a linguagem C.

Além de obter o valor convertido, a atividade tem como objetivo compreender como uma decisão feita pelo usuário pode direcionar diferentes operações dentro de um algoritmo utilizando a estrutura `switch...case`.

Como desafio, o programa foi organizado utilizando funções, sendo criada uma função específica para cada conversão.

---

## 🔢 Opções de conversão

O programa possui seis opções:

1. Celsius → Fahrenheit
2. Celsius → Kelvin
3. Fahrenheit → Celsius
4. Fahrenheit → Kelvin
5. Kelvin → Celsius
6. Kelvin → Fahrenheit

---

## 🧮 Fórmulas utilizadas

### Celsius → Fahrenheit

```text
F = (9/5) × C + 32
````

### Celsius → Kelvin

```text
K = C + 273.15
```

### Fahrenheit → Celsius

```text
C = (5/9) × (F - 32)
```

### Fahrenheit → Kelvin

A expressão foi determinada a partir das relações apresentadas na atividade:

```text
K = (5/9) × (F - 32) + 273.15
```

### Kelvin → Celsius

```text
C = K - 273.15
```

### Kelvin → Fahrenheit

A expressão foi determinada a partir das relações apresentadas na atividade:

```text
F = (9/5) × (K - 273.15) + 32
```

---

## ⚙️ Funcionamento do programa

Ao iniciar o programa, um menu com as seis opções de conversão é apresentado ao usuário.

O usuário deve escolher uma opção informando um número de 1 a 6.

Depois da escolha, o programa solicita a temperatura que será convertida.

A estrutura `switch...case` verifica a opção escolhida e direciona o programa para a conversão correspondente.

Cada conversão é realizada por uma função específica.

Após o cálculo, o resultado é apresentado na tela acompanhado da sua respectiva unidade.

Caso o usuário informe uma opção que não esteja entre 1 e 6, o programa utiliza o `default` para informar que a opção escolhida é inválida.

---

## 🧩 Funções utilizadas

O programa foi organizado utilizando uma função específica para cada conversão.

### `celsiusParaFahrenheit()`

Realiza a conversão de Celsius para Fahrenheit.

### `celsiusParaKelvin()`

Realiza a conversão de Celsius para Kelvin.

### `fahrenheitParaCelsius()`

Realiza a conversão de Fahrenheit para Celsius.

### `fahrenheitParaKelvin()`

Realiza a conversão de Fahrenheit para Kelvin.

### `kelvinParaCelsius()`

Realiza a conversão de Kelvin para Celsius.

### `kelvinParaFahrenheit()`

Realiza a conversão de Kelvin para Fahrenheit.

---

## 🔀 Estrutura `switch...case`

A estrutura `switch...case` é utilizada para direcionar o programa de acordo com a opção escolhida pelo usuário.

Exemplo:

```c
switch (opcao) {

    case 1:
        // Celsius para Fahrenheit
        break;

    case 2:
        // Celsius para Kelvin
        break;

    case 3:
        // Fahrenheit para Celsius
        break;

    case 4:
        // Fahrenheit para Kelvin
        break;

    case 5:
        // Kelvin para Celsius
        break;

    case 6:
        // Kelvin para Fahrenheit
        break;

    default:
        printf("Opcao invalida!\n");
        break;
}
```

O `default` é utilizado para tratar uma opção que não esteja disponível no menu.

---

## ⌨️ Entrada de dados

A leitura da opção escolhida pelo usuário é realizada utilizando a função `scanf()`:

```c
scanf("%d", &opcao);
```

A temperatura também é informada pelo usuário utilizando `scanf()`:

```c
scanf("%lf", &temperatura);
```

---

## 🖥️ Saída de dados

A apresentação das informações e do resultado é realizada utilizando a função `printf()`.

Exemplo:

```c
printf("Resultado: %.2f Fahrenheit\n", resultado);
```

O programa apresenta o resultado com duas casas decimais e informa a unidade correspondente à conversão realizada.

---

## 📝 Exemplo de execução

```text
=== CONVERSOR DE TEMPERATURAS ===

1 - Celsius -> Fahrenheit
2 - Celsius -> Kelvin
3 - Fahrenheit -> Celsius
4 - Fahrenheit -> Kelvin
5 - Kelvin -> Celsius
6 - Kelvin -> Fahrenheit

Escolha uma opcao: 1

Digite a temperatura em Celsius: 30

Resultado: 86.00 Fahrenheit
```

### Exemplo de opção inválida

```text
Escolha uma opcao: 8

Opcao invalida!
```

---

## ▶️ Instruções para execução

### 1. Compilação

Para compilar o programa utilizando o GCC, abra o terminal na pasta onde está o arquivo `conversor_temperaturas.c` e execute:

```bash
gcc conversor_temperaturas.c -o conversor_temperaturas
```

### 2. Execução

No Windows:

```bash
conversor_temperaturas.exe
```

No Linux:

```bash
./conversor_temperaturas
```

---

## 👨‍🎓 Identificação do estudante

**Aluno:** Thiago Oliveira
**Disciplina:** Algoritmos e Pensamento Computacional

```

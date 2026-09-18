# 📊 Análise do Código em C

## 📚 Sobre a atividade

Nesta atividade foi realizada a análise de um código em C que utiliza vetor, estruturas de repetição e condições para realizar diferentes verificações e cálculos.

O programa trabalha com um vetor de 20 números inteiros e realiza análises como identificação de números pares, positivos, negativos e múltiplos de 3, além de calcular a média dos números pares e encontrar o maior e o menor valor.

---

## 🎯 Objetivo

Compreender a lógica utilizada no código, observando como os dados são recebidos, armazenados no vetor, processados e apresentados ao final do programa.

---

## 📝 Análise do código

### 1. Qual é o objetivo geral do programa?

O programa recebe 20 números inteiros, armazena esses números em um vetor e depois realiza algumas análises. Ele verifica os números pares, positivos, negativos e múltiplos de 3, além de calcular a média dos pares e encontrar o maior e o menor valor.

### 2. Para que serve o vetor `vet[20]`?

O vetor `vet[20]` serve para armazenar os 20 números digitados pelo usuário. As posições do vetor vão de `0` até `19`.

### 3. Quantos laços `for` aparecem no programa e qual é a função de cada um?

O programa possui 3 laços `for`.

- O primeiro recebe e armazena os 20 números no vetor.
- O segundo percorre o vetor para realizar as verificações e os cálculos.
- O terceiro percorre o vetor novamente para mostrar os números armazenados.

### 4. O que acontece com os dados no primeiro `for`?

No primeiro `for`, o programa solicita 20 números inteiros ao usuário. Cada número digitado é armazenado em uma posição do vetor usando `vet[i]`.

### 5. O que o segundo `for` verifica e calcula?

O segundo `for` percorre os números armazenados no vetor e realiza as verificações e cálculos. Ele soma os múltiplos de 3, soma e conta os números pares, conta os números positivos e negativos e procura o maior e o menor valor.

### 6. Qual é a função dos comandos `if` dentro do segundo `for`?

Os comandos `if` servem para verificar cada número do vetor. Eles identificam se o número é par, positivo, negativo ou múltiplo de 3 e também fazem as comparações usadas para encontrar o maior e o menor valor.

### 7. Como o programa identifica números pares, positivos, negativos e múltiplos de 3?

O programa utiliza o operador `%` para verificar o resto da divisão.

- `vet[i] % 2 == 0` → número par
- `vet[i] % 3 == 0` → múltiplo de 3
- `vet[i] < 0` → número negativo
- `vet[i] > 0` → número positivo

### 8. Como são encontrados o maior e o menor valor?

O programa começa usando o primeiro número do vetor como referência para o maior e o menor valor. Depois, compara os outros números com essas referências. Quando encontra um valor maior ou menor, atualiza a variável correspondente.

### 9. Por que existe a condição `if (contPares > 0)` antes do cálculo da média?

Essa condição verifica se existe pelo menos um número par. Como a média é calculada dividindo a soma dos pares pela quantidade de pares, essa verificação evita uma divisão por zero.

### 10. Qual é a finalidade do último `for`?

O último `for` percorre novamente o vetor e mostra na tela os 20 números que foram armazenados.

---

## 🔄 Caminho dos dados

O programa segue o seguinte caminho:

**Entrada → armazenamento no vetor → processamento → cálculos → saída dos resultados**

Primeiro, o usuário digita os 20 números. Depois, os valores são armazenados no vetor `vet[20]`. Em seguida, o programa percorre o vetor para fazer as verificações e os cálculos. Por fim, os resultados são apresentados na tela e os números armazenados no vetor são mostrados novamente.

---

## 💡 Conclusão

A atividade mostrou como um vetor pode ser usado para armazenar vários valores e depois facilitar o processamento desses dados. O programa percorre o vetor algumas vezes para realizar diferentes tarefas, usando `for`, `if` e o operador `%` para fazer as verificações necessárias.

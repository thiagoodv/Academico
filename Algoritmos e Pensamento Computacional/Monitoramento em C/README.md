# 🌡️ Monitoramento em C

## 1. Identificação

**Nome do aluno:** Thiago Oliveira

**Disciplina:** Algoritmo e Pensamento Computacional

**Professora:** Profa. Karla Sartin

**Título do projeto:** Monitoramento em C

---

# 2. Objetivo

O objetivo deste projeto é desenvolver um programa em linguagem C para realizar o monitoramento de temperaturas a partir de um limite definido pelo usuário.

O programa recebe várias temperaturas, verifica quais estão acima do limite e conta quantas temperaturas acima do limite aparecem de forma consecutiva.

O monitoramento é encerrado automaticamente quando são registradas três temperaturas consecutivas acima do limite.

Ao final, o programa apresenta um resumo com os dados das temperaturas registradas.

---

# 3. Funcionamento do programa

## 3.1 Definição do limite de temperatura

O programa começa solicitando ao usuário um limite de temperatura.

A entrada é validada para garantir que seja informado um valor numérico.

Foi utilizado `do...while` nessa etapa, pois o limite precisa ser solicitado pelo menos uma vez. Caso o usuário informe um valor inválido, o programa solicita uma nova entrada.

---

## 3.2 Realização das leituras

Depois que o limite é definido, o programa começa a solicitar as temperaturas.

Cada temperatura válida é registrada e utilizada nos cálculos do relatório final.

Durante o monitoramento, o programa calcula:

- quantidade de leituras;
- temperatura média;
- maior temperatura;
- menor temperatura;
- quantidade de temperaturas acima do limite;
- porcentagem de temperaturas acima do limite.

---

## 3.3 Tratamento de valores inválidos

O programa verifica se o valor digitado é numérico.

Quando uma entrada inválida é informada, o programa apresenta uma mensagem e solicita uma nova temperatura.

A função `limparBuffer()` é utilizada para limpar os caracteres que permanecem no buffer do teclado.

---

## 3.4 Identificação de temperaturas acima do limite

Após cada leitura válida, a temperatura é comparada com o limite definido.

Quando a temperatura está acima do limite, o programa apresenta uma mensagem de alerta e aumenta a quantidade de temperaturas acima do limite.

---

## 3.5 Contagem de temperaturas consecutivas

O programa possui uma variável chamada `consecutivas`, que controla a quantidade de temperaturas acima do limite em sequência.

Quando a temperatura está acima do limite, essa contagem aumenta.

Quando a temperatura está dentro do limite, a contagem é reiniciada.

Dessa forma, o programa consegue identificar quando três temperaturas acima do limite acontecem consecutivamente.

---

## 3.6 Condição de encerramento

O monitoramento continua enquanto a quantidade de temperaturas consecutivas acima do limite for menor que três.

Quando três temperaturas consecutivas acima do limite são registradas, o programa encerra automaticamente o monitoramento e apresenta o resumo final.

---

# 4. Estruturas de repetição utilizadas

## 4.1 do...while

O `do...while` foi utilizado na definição do limite de temperatura.

Essa estrutura foi escolhida porque o limite precisa ser solicitado pelo menos uma vez.

Caso o usuário informe um valor inválido, a entrada é solicitada novamente.

---

## 4.2 while

O `while` foi utilizado para controlar o monitoramento das temperaturas.

Enquanto não forem registradas três temperaturas consecutivas acima do limite, o programa continua solicitando novas temperaturas.

Também foi utilizado `while` na função `limparBuffer()` para remover os caracteres restantes da entrada.

---

# 5. Execução

O programa foi desenvolvido e testado em linguagem C utilizando o OnlineGDB.

Para executar o programa, basta selecionar a linguagem C, inserir o código do arquivo `monitoramento.c` e clicar em **Run**.

Durante a execução, o programa solicita o limite de temperatura e, em seguida, as temperaturas que serão monitoradas.

---

# 6. Testes realizados

Foram realizados três testes para verificar o funcionamento do programa.

## 6.1 Teste 1 - Entradas inválidas

Neste teste foram inseridos valores que não eram numéricos.

O objetivo foi verificar se o programa identifica entradas inválidas e continua funcionando normalmente.

### Resultado

O programa identificou as entradas inválidas, apresentou uma mensagem e solicitou uma nova temperatura.

📷 [Evidência do Teste 1](./evidencias/teste01.png)

---

## 6.2 Teste 2 - Temperaturas acima do limite, mas não consecutivas

Neste teste foram inseridas temperaturas acima do limite intercaladas com temperaturas dentro do limite.

O objetivo foi verificar se a contagem de temperaturas consecutivas é reiniciada corretamente.

### Resultado

Quando uma temperatura ficou dentro do limite, a contagem de temperaturas consecutivas foi reiniciada.

📷 [Evidência do Teste 2](./evidencias/teste02.png)

---

## 6.3 Teste 3 - Três temperaturas consecutivas acima do limite

Neste teste foram inseridas três temperaturas consecutivas acima do limite.

O objetivo foi verificar a condição de encerramento automático.

### Resultado

Ao atingir três temperaturas consecutivas acima do limite, o programa encerrou o monitoramento e apresentou o resumo final.

📷 [Evidência do Teste 3](./evidencias/teste03.png)

---

# 7. Estrutura do projeto

A estrutura do projeto está organizada da seguinte forma:

- `monitoramento.c` → código do programa
- `README.md` → documentação do projeto
- `evidencias/` → imagens dos testes
- `teste01.png` → evidência do Teste 1
- `teste02.png` → evidência do Teste 2
- `teste03.png` → evidência do Teste 3

---

# 8. Conclusão

O projeto permitiu praticar conceitos de programação em C, principalmente estruturas de repetição, condicionais, entrada de dados, validação e cálculos.

Também foi possível trabalhar com o controle de temperaturas consecutivas e com a apresentação dos resultados do monitoramento.

---

# 9. Justificativa sobre a escolha das estruturas de repetição

Foi utilizado `do...while` para definir o limite porque o programa precisa solicitar essa informação pelo menos uma vez. A condição é verificada depois da execução.

O `while` foi utilizado no monitoramento porque a repetição depende da condição de encerramento. Enquanto não forem registradas três temperaturas consecutivas acima do limite, novas leituras são realizadas.

A combinação das duas estruturas permitiu utilizar cada uma de acordo com a necessidade de cada parte do programa.

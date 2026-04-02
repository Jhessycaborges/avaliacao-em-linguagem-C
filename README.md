# Avaliação 1 – Introdução à Programação

Este repositório contém a resolução de 4 questões em linguagem C, desenvolvidas para praticar conceitos básicos de programação, como:

- Entrada e saída de dados
- Estruturas condicionais
- Estruturas de repetição
- Vetores
- Organização lógica do código

---

# Conteúdo das Questões

## Questão 1 – Cálculo de Média e Situação do Aluno

O programa lê três notas de um aluno, calcula a média aritmética e informa sua situação final.

### Regras de classificação

- **Aprovado:** média = 7,0  
- **Recuperação:** 5,0 = média < 7,0  
- **Reprovado:** média < 5,0  

### O que o programa faz

- Recebe 3 notas do tipo `float`
- Calcula a média
- Exibe a média com 2 casas decimais
- Mostra a situação do aluno

### Conceitos utilizados

- Variáveis `float`
- `scanf` e `printf`
- `if`, `else if`, `else`

### Arquivo:

media_situacao_aluno.c

---

## Questão 2 – Números Pares em um Intervalo

O programa lê dois números inteiros (início e fim) e exibe todos os números pares dentro do intervalo.

### O que o programa faz

- Lê valor inicial
- Lê valor final
- Percorre os números do intervalo
- Identifica números pares
- Conta quantos pares existem

### Conceitos utilizados

- Variáveis inteiras
- Estrutura `for`
- Operador `%`
- Contador

### Arquivo:

numeros_pares_intervalo.c

---

## Questão 3 – Análise de Lista de Valores

O programa lê 10 números inteiros e armazena em um vetor.

Depois calcula:

- Maior valor
- Menor valor
- Média
- Valores acima da média

### O que o programa faz

- Lê 10 números
- Armazena em vetor
- Calcula soma
- Calcula média
- Identifica maior e menor
- Mostra valores acima da média

### Conceitos utilizados

- Vetores
- `for`
- Comparações condicionais
- Acumulador

### Arquivo:

analise_lista_valores.c

---

## Questão 4 – Simulação de Caixa Eletrônico

O programa simula um caixa eletrônico com menu interativo.

### Funcionalidades

1 - Consultar saldo  
2 - Sacar valor  
3 - Depositar valor  
4 - Sair  

### Regras

- O usuário informa saldo inicial
- O menu repete até escolher sair
- Não permite saque maior que saldo
- O saldo nunca fica negativo

### Conceitos utilizados

- `do...while`
- Menu interativo
- Condicionais
- Operações matemáticas

### Arquivo:

simulacao_caixa_eletronico.c

---

# Tecnologias utilizadas

- Linguagem: **C**
- Biblioteca: **stdio.h**

---

# Como compilar e executar

Compile usando **gcc**:

```bash
gcc media_situacao_aluno.c -o media
gcc numeros_pares_intervalo.c -o pares
gcc analise_lista_valores.c -o analise
gcc simulacao_caixa_eletronico.c -o caixa

# Avaliação 1 – Introdução à Programação

Este repositório contém a resolução de 4 questões em linguagem C, desenvolvidas para praticar conceitos básicos de programação, como entrada e saída de dados, estruturas condicionais, estruturas de repetição, vetores e organização lógica do código. As atividades seguem os objetivos da avaliação proposta. :contentReference[oaicite:0]{index=0}

## Conteúdo das questões

### Questão 1 – Cálculo de Média e Situação do Aluno

O programa lê três notas de um aluno, calcula a média aritmética e informa sua situação final de acordo com o resultado.

#### Regras de classificação
- **Aprovado:** média maior ou igual a 7,0
- **Recuperação:** média entre 5,0 e 6,9
- **Reprovado:** média menor que 5,0

#### O que o programa faz
- Recebe 3 notas do tipo real
- Calcula a média
- Exibe a média formatada com 2 casas decimais
- Informa a situação do aluno

#### Conceitos utilizados
- Variáveis do tipo `float`
- Entrada de dados com `scanf`
- Saída de dados com `printf`
- Estruturas condicionais `if`, `else if` e `else`

---

### Questão 2 – Números Pares em um Intervalo

O programa lê dois números inteiros, correspondentes ao início e ao fim de um intervalo, e exibe todos os números pares encontrados nesse intervalo, incluindo os limites. Ao final, também mostra a quantidade total de números pares encontrados. :contentReference[oaicite:1]{index=1}

#### O que o programa faz
- Lê o valor inicial e o valor final
- Percorre todos os números do intervalo
- Verifica quais são pares
- Exibe os números pares encontrados
- Conta quantos pares existem no intervalo

#### Conceitos utilizados
- Variáveis inteiras
- Estrutura de repetição `for`
- Operador módulo `%` para verificar paridade
- Contador de ocorrências

---

### Questão 3 – Análise de Lista de Valores

O programa lê 10 números inteiros e os armazena em um vetor. Em seguida, identifica o maior valor, o menor valor, calcula a média e mostra apenas os números que estão acima dessa média. :contentReference[oaicite:2]{index=2}

#### O que o programa faz
- Lê 10 números inteiros
- Armazena os valores em um vetor
- Calcula a soma total dos elementos
- Identifica o maior e o menor valor digitado
- Calcula a média dos valores
- Exibe somente os números maiores que a média

#### Conceitos utilizados
- Vetores
- Estrutura de repetição `for`
- Comparações condicionais
- Acumulador e cálculo de média
- Processamento de dados armazenados

---

### Questão 4 – Simulação de Caixa Eletrônico

O programa simula um caixa eletrônico simples, permitindo consultar saldo, sacar valores, depositar valores e encerrar a execução. O menu é exibido repetidamente até que o usuário escolha a opção de sair. O saque só é permitido se houver saldo suficiente, e o saldo nunca pode ficar negativo. :contentReference[oaicite:3]{index=3}

#### Funcionalidades disponíveis
- Consultar saldo
- Sacar valor
- Depositar valor
- Sair do sistema

#### Regras implementadas
- O usuário informa um saldo inicial
- O menu continua aparecendo até a opção `4 - Sair`
- Saques maiores que o saldo são bloqueados
- O saldo é atualizado após saque ou depósito

#### Conceitos utilizados
- Estrutura de repetição `do...while`
- Menu interativo
- Estruturas condicionais
- Operações matemáticas com saldo
- Validação de regras de negócio

---

## Tecnologias utilizadas

- **Linguagem:** C
- **Biblioteca padrão:** `stdio.h`

---

## Como compilar e executar

Para compilar os programas, utilize um compilador C, como o `gcc`.

### Exemplo de compilação
```bash
gcc questao1.c -o questao1
gcc questao2.c -o questao2
gcc questao3.c -o questao3
gcc questao4.c -o questao4

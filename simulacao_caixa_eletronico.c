// Questão 4 – Simulacao de Caixa Eletronico
// Autor: Jhessyca Borges
// Disciplina: Logica de Programacao

#include <stdio.h>

int main() {
	float saldo, valor;
	int opcao;
	
	printf("Digite o saldo inicial: ");
	scanf("%f", &saldo);
	
	do {
		printf("\n--- MENU CAIXA ELETRONICO ---\n");
		printf("1 - Consultar saldo\n");
		printf("2 - Sacar valor\n");
		printf("3 - Depositar valor\n");
		printf("4 - Sair\n");
		printf("Escolha uma opcao: ");
		scanf("%d", &opcao);
		
		if (opcao == 1) {
			printf("Saldo atual: %.2f\n", saldo);
		} else if (opcao == 2) {
			printf("Digite o valor do saque: ");
			scanf("%f", &valor);
			if(valor > saldo) {
				printf("Saldo insuficiente.\n");
			} else {
				saldo = saldo - valor;
				printf("Saque realizado!\n");
			}
		} else if (opcao == 3) {
			printf("Digite o valor do deposito: ");
			scanf("%f", &valor);
			saldo = saldo + valor;
			printf("Deposito realizado!\n");
		} else if (opcao == 4) {
			printf("Saindo... Ate logo!\n");
		} else {
			printf("Opcao invalida!\n");
		}
	} while (opcao != 4);
	
	return 0;
}

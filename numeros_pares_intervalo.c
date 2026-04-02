// Questão 2 – Numeros Pares em um Intervalo
// Autor: Jhessyca Borges
// Disciplina: Logica de Programacao

#include <stdio.h>

int main() {
	int inicio, fim, i;
	int contador = 0;
	
	printf("Digite o inicio: ");
	scanf("%d", &inicio);
	printf("Digite o fim: ");
	scanf("%d", &fim);
	
	printf("Pares encontrados: ");
	
	for(i = inicio; i <= fim; i++) {
		if(i % 2 == 0) {
			printf("%d ", i);
			contador++;
		}
	}
	
	printf("\nTotal de pares: %d", contador);
	
	return 0;
}

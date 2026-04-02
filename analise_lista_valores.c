// Questão 3 - Análise de Lista de Valores

#include <stdio.h>

int main() {
	int i, maior, menor, numeros[10];
	float soma = 0, media;
	
	for(i = 0; i < 10; i++) {
		printf("Digite o %do numero: ", i + 1);
		scanf("%d", &numeros[i]);
		
		soma = soma + numeros[i];
		
		if(i == 0) {
			maior = numeros[i];
			menor = numeros[i];
		} else {
			if (numeros[i] > maior) {
				maior = numeros[i];
			}
			if (numeros[i] < menor) {
				menor = numeros[i];
			}
		}
	}
	
	media = soma / 10;
	printf("\nMaior valor: %d", maior);
	printf("\nMenor valor: %d", menor);
	printf("\nMedia: %.2f", media);
	
	printf("\nValores acima da media: ");
	
	for(i = 0; i < 10; i++) {
		if(numeros[i] > media) {
			printf("%d ", numeros[i]);
		}
	}
	return 0;
	
}

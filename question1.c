// Questão 1: Cálculo de Média e Situação do Aluno

#include <stdio.h>

int main() {
	float nota1, nota2, nota3, media;
	printf("Digite a nota 1: ");
	scanf("%f", &nota1);
	printf("Digite a nota 2: ");
	scanf("%f", &nota2);
	printf("Digite a nota 3: ");
	scanf("%f", &nota3);
	
	media = (nota1 + nota2 + nota3) / 3;
	printf("Media: %.2f \n", media);
	
	if(media >= 7.0) {
		printf("Situacao: Aprovado!");
	} else if (media >= 5.0 && media < 7.0) {
		printf("Situacao: Recuperacao!");
	} else {
		printf("Situacao: Reprovado!");
	}
	
	return 0;
}

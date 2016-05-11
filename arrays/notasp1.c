#include <stdio.h>
#define SIZE 10

int main(void) {
	float notasP1[SIZE];
	int contador;
	float snotas=0;
	float mnotas;
	
	for (contador=0;contador<SIZE;contador++) {
		printf("Digite a nota do aluno %d: \t", contador+1);
		scanf("%f", &notasP1[contador]);
		printf("\n");
		snotas += notasP1[contador];
	}
	
	mnotas = snotas / 10;

	printf("%s%13s\n", "Aluno", "Nota");

	for (contador=0;contador<SIZE;contador++) {
		printf("%4d%13.1f\n", contador+1, notasP1[contador]);
	}

	printf("\n");
	printf("Soma das notas: %.1f\n", snotas);	
	printf("Média das notas: %.2f\n", mnotas);

	return 0;
}

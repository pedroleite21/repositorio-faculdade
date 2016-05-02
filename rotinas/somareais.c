/*
* pedro.leite.001@acad.pucrs.br
*/

#include <stdio.h>
#include "s.h"

/*
extern float somar(float, float);

float somar(float x, float y)
{
	return x + y;
}
*/
int main(void) {
	float num1, num2, result;

	printf("Digite um número: \n");
	scanf("%f", &num1);
	
	printf("Digite outro número: \n");
	scanf("%f", &num2);

	result = somar(num1, num2);

	printf("Soma = %.4f\n", result);

	return 0;
}

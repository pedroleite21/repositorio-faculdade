/*
* pedro.leite.001@acad.pucrs.br
*/

#include <stdio.h>

double fatorial(double);

double fatorial(double n) {
	double r = 1L;
	double f;


	for (f = 1; f <= n; f = f + 1L)
		r = r * f;
	return r;

	
}

int main() {
	double n;
	scanf("%lf", &n);
	double f = fatorial(n);
	printf("N=%f\nF=%f\n", n, f);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

double* somaPolinomios(double* p, double* q, int n) {
	double* soma = (double*) malloc(sizeof(double)*(n+1));
	
	for (int i = 0; i <= n; i++) {
		soma[i] = p[i] + q[i];
	}
	
	return soma;
}

int main() {
	double* p;
	double* q;
	double* soma;
	int n;
	
	printf("Considere dois polinômios p(x) = a0 + a1x + a2x² + ... + anx^n e q(x) = b0 + b1x + b2x² + ... + bnx^n, sendo n um número natural.\n");
	
	printf("Qual o tamanho n dos polinômios que você deseja?\n");
	scanf("%d", &n);
	
	p = (double*) malloc(sizeof(double)*(n+1));
	q = (double*) malloc(sizeof(double)*(n+1));
	
	printf("Digite, em sequência, os valores de ");
	for (int i = 0; i <= n - 2; i++) {
		printf("a%d, ", i);
	}
	printf("a%d e a%d\n", n - 1, n);
	
	for (int i = 0; i <= n; i++) {
		scanf("%lf", &p[i]);
	}
	
	printf("Digite, em sequência, os valores de ");
	for (int i = 0; i <= n - 2; i++) {
		printf("b%d, ", i);
	}
	printf("b%d e b%d\n", n - 1, n);
	
	for (int i = 0; i <= n; i++) {
		scanf("%lf", &q[i]);
	}
	
	printf("A soma dos polinômios:\np(x) = ");
	for (int i = 0; i <= n - 1; i++) {
		printf("%.1fx^%d + ", p[i], i);
	}
	printf("%.1fx^%d,\nq(x) = ", p[n], n);
	for (int i = 0; i <= n - 1; i++) {
		printf("%.1fx^%d + ", q[i], i);
	}
	printf("%.1fx^%d é\ns(x) = ", q[n], n);
	
	soma = somaPolinomios(p, q, n);
	
	for (int i = 0; i <= n - 1; i++) {
		printf("%.1fx^%d + ", soma[i], i);
	}
	printf("%.1fx^%d.", soma[n], n);
	
	return 0;
}

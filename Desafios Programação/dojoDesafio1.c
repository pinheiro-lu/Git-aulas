#include <stdio.h>

int main() {
	int n1, n2, n3;
	int qtdImpares = 0;

	printf("=====QUANTOS ÍMPARES=====\n");
	printf("Digite três números:\n");
	scanf("%d %d %d", &n1, &n2, &n3);

	if (n1 % 2 != 0) qtdImpares++;
	if (n2 % 2 != 0) qtdImpares++;
	if (n3 % 2 != 0) qtdImpares++;

	printf("A quantidade de números ímpares é %d", qtdImpares);
	return 0; 
}

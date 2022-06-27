#include <stdio.h>

int main() {
	int troco, valor, notas50 = 0, notas20 = 0, notas5 = 0, notas1 = 0;

	printf("Digite o valor do troco:\n");
	scanf("%d", &valor);
	
	troco = valor;
	
	while (troco > 0) {
		if (troco >= 50) {
			notas50++;
			troco = troco - 50;
			}
			else if (troco >= 20) {
				notas20++;
				troco = troco - 20;
				}
				else if (troco >= 5) {
					notas5++;
					troco = troco - 5;
					}
					else {
						notas1++;
						troco = troco - 1;
						}
	}
	
	if (troco < 0) {
		notas50 = -1;
		notas20 = -1;
		notas5 = -1;
		notas1 = -1;
	}
	
	printf("Valor: %d\n", valor);
	printf("Notas de 50: %d\n", notas50);
	printf("Notas de 20: %d\n", notas20);
	printf("Notas de 5: %d\n", notas5);
	printf("Notas de 1: %d\n", notas1);
	
	return 0;
}

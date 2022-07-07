#include <stdio.h>

int main() {
	int qtdMultiplos = 0, a, b, c;
	
	printf("Digite três números a, b e c respectivamente.\n");
	
	scanf("%d %d %d", &a, &b, &c);
	
	// coloca o menor em a e o maior em b
	if (a > b) {
		a = a + b;
		b = a - b;
		a = a - b;
	}
	
	for (int i = a; i <= b; i++) {
		if (i % c == 0)
			qtdMultiplos++;
	}
	
	printf("A quantidade de múltiplos de %d entre %d e %d eh %d\n", c, a, b, qtdMultiplos);
	
	return 0;
}

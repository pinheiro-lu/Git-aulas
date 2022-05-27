#include <stdio.h>

/*
Programa que imprime o valor inicial e final de dois números que trocam 
de posição entre si.
*/

int main() {
	int a, b;

	printf("=====INVERSÃO DE VARIÁVEIS=====\n");
	printf("Digite dois números:\n");
	scanf("%d %d", &a, &b);
	
	a = a + b;
	b = a - b;
	a = a - b; // a = a+b - a 

	printf("O valor inicial de A era %d, o valor final de A eh %d. O valor inicial de B era %d, o valor final de B eh %d.\n", b, a, a, b);
	
	return 0;
}

#include <stdio.h>

/*
Programa que imprime o valor inicial e final de dois números que trocam 
de posição entre si.
*/

int antn1(int n1) {
	const int num = n1;
	return num;
}

int main() {
	int n1, n2;

	printf("=====INVERSÃO DE VARIÁVEIS=====\n");
	printf("Digite dois números:\n");
	scanf("%d %d", &n1, &n2);
	
	antn1(n1);
	antn1(n2);
	n1 = n2;
	n2 = n1;

	printf("O valor inicial de A era %d, o valor final de A eh %d. O valor inicial de B era %d, o valor final de B eh %d.\n", antn1(n1), n1, antn1(n2), n2);
	
	return 0;
}

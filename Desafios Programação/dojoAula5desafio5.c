#include <stdio.h>

int main() {
	int n, a;
	
	printf("Digite o valor do qual você quer saber os múltiplos e a quantidade de múltipllos que você deseja que apareçam na saída.\n");
	scanf("%d %d", &a, &n);
	
	for (int i = 0; i < n; i++) {
		printf("%d ", a * (i + 2));
	}
	
	return 0;
}

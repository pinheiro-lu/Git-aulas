#include <stdio.h>

int main() {
	int n[5];
	int temp, i;
	
	printf("Digite 5 números inteiros:\n");
	
	for (i = 0; i < 5; i++) {
		scanf("%d", &n[i]);
	}
	
	i = 0;
	
	while (i < 5) {
		if (n[i] > n[i+1]) {
			temp = n[i];
			n[i] = n[i+1];
			n[i+1] = temp;
			if (i > 0)
				i -= 2;;			
		}
		i++;
	}
	
	printf("Os números ordenados são:\n");
	for (i = 0; i < 5; i++) {
		printf("%d ", n[i]);
	}

	return 0;
}

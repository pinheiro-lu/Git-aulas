#include <stdio.h>

int main() {
	int codigo, qtd;
	float total = 0;
	
	printf("Digite o código e a quantidade comprada do produto:\n");
	
	do {
		scanf("%d", &codigo);
		switch (codigo) {
			case 0:
			break;
			case 1:
			scanf("%d", &qtd);
			total += qtd * 0.5;
			break;
			case 2:
			scanf("%d", &qtd);
			total += qtd;
			break;
			case 3:
			scanf("%d", &qtd);
			total += qtd * 4;
			break;
			case 5:
			scanf("%d", &qtd);
			total += qtd * 7;
			break;
			case 9:
			scanf("%d", &qtd);
			total += qtd * 8;
			break;
			default:
			printf("Código inválido\n");
			break;
		}
	} while (codigo != 0);
	
	printf("Valor total: %.2f", total);
	
	return 0;
}

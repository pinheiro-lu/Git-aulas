#include <stdio.h>

/*
Programa para realizar as quatro operações matemáticas.
*/

// Definição de constantes para as operações
#define ADICAO 1
#define SUBTRACAO 2
#define MULTIPLICACAO 3
#define DIVISAO 4
#define SAIR 0

double adicao () {
	return 0;
}

double subtracao () {
	return 0;
}

double multiplicacao () {
	return 0;
}

double divisao () {
	return 0;
}

int main () {
	int operacao;
	double resultado;

	do {
		printf("===== MENU PRINCIPAL =====\n");
		printf("01 - Adição\n");
		printf("02 - Subtração\n");
		printf("03 - Multiplicação\n");
		printf("04 - Divisão\n");
		printf("00 - Sair\n");
		printf("Escolha uma operação: ");
		scanf("%d", &operacao);
		
		switch (operacao) {
			case ADICAO:
			resultado = adicao();
			break;

			case SUBTRACAO:
			resultado = subtracao();
			break;

			case MULTIPLICACAO:
			resultado = multiplicacao();
			break;

			case DIVISAO:
			resultado = divisao();
			break;

			case SAIR:
			break;

			default:
			printf("Código inválido!\n");
			break;
		} 
	} while (operacao != 0);
}

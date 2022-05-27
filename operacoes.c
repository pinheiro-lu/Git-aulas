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
	double par1, par2;
	
	printf ("Digite as parcelas que você deseja somar com um espaço de distância:\n");
	scanf("%lf %lf", &par1, &par2);
	return par1 + par2;
}

double subtracao () {
	double minuendo, subtraendo;

	printf ("Digite o minuendo:\n");
	scanf("%lf", &minuendo);
	printf("Digite o subtraendo:\n");
	scanf("%lf", &subtraendo);
	return minuendo - subtraendo;
}

double multiplicacao () {
	double fat1, fat2;
	
	printf("Escreva os números que você quer multiplicar com um espaço de distância:\n");
	scanf("%lf %lf", &fat1, &fat2);
	return fat1 * fat2;
}

double divisao () {
	double dividendo, divisor;

	printf("Digite o dividendo:\n");
	scanf("%lf", &dividendo);
	printf("Digite o divisor:\n");
	scanf("%lf", &divisor);
	return dividendo / divisor;
}

int main () {
	int operacao, valResult = 0;
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
			valResult = 1;
			resultado = adicao();
			break;

			case SUBTRACAO:
			valResult = 1;
			resultado = subtracao();
			break;

			case MULTIPLICACAO:
			valResult = 1;
			resultado = multiplicacao();
			break;

			case DIVISAO:
			valResult = 1;
			resultado = divisao();
			break;

			case SAIR:
			break;

			default:
			printf("Código inválido!\n");
			break;
		} 
		if (valResult) {
			printf ("O resultado do cálculo é %.2f.\n", resultado);
			valResult = 0;
		}
	} while (operacao != 0);
}

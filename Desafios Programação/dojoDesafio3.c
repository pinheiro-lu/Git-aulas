#include <stdio.h>

/*
Programa para cálculo da média aritmética das notas de Joãozinho 
ao final de um semestre
*/

int main() {
	float geografia, historia, portugues; // variáveis para média ponderada por matéria
	float p1geo, p2geo, p1his, p2his, p1por, p2por; // variáveis para cada prova
	float media; // variável para a média aritmética das médias de todas as matérias

	printf("=====MÉDIA ARITMÉTICA DE NOTAS=====\n"); 
	printf("Digite, respectivamente, as notas da primeira e segunda prova de geografia, P1 e P2 de história e P1 e P2 de português:\n");
	scanf("%f %f %f %f %f %f", &p1geo, &p2geo, &p1his, &p2his, &p1por, &p2por);

	geografia = (p1geo + p2geo)/2;
	historia = (2 * p1his + p2his)/3;
	portugues = (5 * p1por + 3 * p2por)/8;

	media = (geografia + historia + portugues) / 3;

	printf("A média final é %.2f\n", media);

	return 0;
}

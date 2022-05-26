#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main() {
	float raio;
	double area;

	printf("=====ÁREA DO CÍRCULO=====\n");
	printf("Digite o raio do círculo:\n");
	scanf("%f", &raio);

	area = pow(raio, 2) * PI;

	printf("A área do círculo é %.4f\n", area);

	return 0;
}

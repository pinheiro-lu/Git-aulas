#include <stdio.h>

/* 
Programa que converte segundos para horas, 
minutos e segundos.
*/

int main() {
    int n;
    int hor, min, seg;

    scanf("%d", &n);

    hor = n / 3600;
    min = (n % 3600) / 60;
    seg = (n % 3600) % 60;

    printf("%d:%d:%d\n", hor, min, seg);

    return 0;
}
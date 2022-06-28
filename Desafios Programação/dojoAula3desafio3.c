#include <stdio.h>

int maior(int n1, int n2, int n3, int n4, int n5) {
    int maior = n1;

    if (n2 > maior) {
        maior = n2;
    }
    if (n3 > maior) {
        maior = n3;
    }
    if (n4 > maior) {
        maior = n4;
    }
    if (n5 > maior) {
        maior = n5;
    }
    return maior;
}

int menor(int n1, int n2, int n3, int n4, int n5) {
    int menor = n1;

    if (n2 < menor) {
        menor = n2;
    }
    if (n3 < menor) {
        menor = n3;
    }
    if (n4 < menor) {
        menor = n4;
    }
    if (n5 < menor) {
        menor = n5;
    }
    return menor;
}

int notaSalto(int n1, int n2, int n3, int n4, int n5){
    int soma = 0;
    int max, min;
    int travaMin = 0, travaMax = 0;

    max = maior(n1, n2, n3, n4, n5);
    min = menor(n1, n2, n3, n4, n5);

    if (n1 == max && !travaMax) {
        travaMax = 1;
    } else if (n1 == min && !travaMin) {
        travaMin = 1;
    } else soma += n1;
    
    if (n2 == max && !travaMax) {
        travaMax = 1;
    } else if (n2 == min && !travaMin) {
        travaMin = 1;
    } else soma += n2;

    if (n3 == max && !travaMax) {
        travaMax = 1;
    } else if (n3 == min && !travaMin) {
        travaMin = 1;
    } else soma += n3;

    if (n4 == max && !travaMax) {
        travaMax = 1;
    } else if (n4 == min && !travaMin) {
        travaMin = 1;
    } else soma += n4;

    if (n5 == max && !travaMax) {
        travaMax = 1;
    } else if (n5 == min && !travaMin) {
        travaMin = 1;
    } else soma += n5;

    return soma;
}

int main(){
    int n1, n2, n3, n4, n5;

    printf("Digite as notas dos saltos: ");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    printf("A nota final do atleta eh %d", notaSalto(n1, n2, n3, n4, n5));

}
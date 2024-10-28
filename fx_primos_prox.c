// Escreva um programa que mostre os dois números primos mais próximos de um dado número n.

#include <stdio.h>

int primo_menor(int n) {
    int x1 = 0;

    for (int i = n - 1; i > 1; i--) {
        int divisores = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                divisores++;
            }
        }
        if (divisores == 2) { 
            x1 = i;
            break;
        }
    }

    return x1;
}

int primo_maior(int n) {
    int x2 = 0;

    for (int i = n + 1;; i++) {
        int divisores = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                divisores++;
            }
        }
        if (divisores == 2) {
            x2 = i;
            break;
        }
    }

    return x2;
}

int main() {
    int n;
    printf("Digite um numero para buscarmos os primos proximos desse valor: \n");
    scanf("%d", &n);

    printf("O valor do primo menor e: %d\n", primo_menor(n));
    printf("O valor do primo maior e: %d\n", primo_maior(n));

    return 0;
}

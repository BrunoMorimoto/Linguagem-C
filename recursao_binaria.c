// Escreva uma função recursiva que, dado um numero inteiro positivo n, imprima a representação binaria de n

#include <stdio.h>

int rep_binaria(int n) {
    if (n==0) {
        return 0;
    } 
    else 
        return (n%2) + 10 * rep_binaria(n/2);
}

int main() {
    int n;
    printf("Digite um numero inteiro positivo: \n");
    scanf("%d",&n);

    printf("O valor de %d em binario e: %d\n",n,rep_binaria(n));

    return 0;
}

// Escreva um programa que ler um inteiro positivo n, em seguida ler n números do teclado e apresenta a soma destes. 

#include <stdio.h>

int main() {
    int n,valor,soma = 0;

    printf("Digite um numero inteiro positivo: \n");
    scanf("%d",&n);

    for (int i = 0; i < n; i++){
        scanf("%d",&valor);
        soma = soma + valor;
    }
    printf("O resultado da soma e: %d",soma);

    return 0;
}
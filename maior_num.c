// Fazer um programa que lê n números do teclado e informa qual foi o maior número lido.

#include <stdio.h>

int main (){
    int n,maior=0,valor;

    printf("Digite a quantidade de numeros que devem ser lidos: ");
    scanf("%d",&n);

    for (int i=0;i<n;i++){
        printf("Digite o %d elemento: ",i+1);
        scanf("%d",&valor);

        if(valor > maior){
            maior = valor;
        }
    }
    printf("O maior valor digitado e: %d",maior);
    return 0;
}
// Escreva uma função que computa o fatorial de um número n passado por parâmetro. 

#include <stdio.h>

long int fat(int n){
    long int fat = 1;

    for (int i=1;i<=n;i++){
        fat = i*fat;
    }
    return fat;

}

int main (){
    int n;
    printf("Digite o valor de entrada para calculo do fatorial: \n");
    scanf("%d",&n);

    if(n > 0){
        printf("O valor do fatorial e: %ld",fat(n));
    }
    else
        printf("O valor do fatorial nao existe para numeros negativos");
    return 0;
}
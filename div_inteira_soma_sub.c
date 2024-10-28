// Calcular a divisão inteira de dois números usando apenas soma e subtração

#include <stdio.h>

int main () {
int dividendo,divisor,n=0,resto=0,div=0;

    printf("Digite o dividendo: \n");
    scanf("%d",&dividendo);
    printf("Digite o divisor: \n");
    scanf("%d",&divisor);

    n = divisor;

    while (dividendo > n){
        n = divisor + n;
        div++;
    }
    
    n = n - divisor;

    resto = dividendo - n;
    printf("O valor da divisao inteira e: %d e o resto e %d",div,resto);

    return 0;
}



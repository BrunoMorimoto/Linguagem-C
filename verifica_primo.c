// Determinar se um número n é primo ou não. 

#include <stdio.h>

int main (){
    int n,aux = 0;
    printf("Digite um numero: \n");
    scanf("%d",&n);

    for (int i=1; i<=n;i++){
        if(i!= 1 && i!=n && n%i == 0){
            aux = 1;
        }
    }
    if(aux == 1){
        printf("O numero %d nao e primo",n);
    }
    else
        printf("O numero %d e primo",n);
    return 0;
}

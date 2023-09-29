#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int i;
    int soma = 0;

    printf("Digite um numero:\n");
    scanf("%i", &n);

    for ( i=1; i < n; i++){
        if (n % i == 0){
            soma = soma + i;
        }
    }
    printf("Soma dos divisores: %i \n", soma);

    if (soma == n){
        printf("%i eh um numero perfeito!", n);
    } else{
        printf("%i nao eh um numero perfeito :(", n);
    }
}
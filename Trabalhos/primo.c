#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;
    int achouprimo = 1;

    scanf("%i", &numero);

    for (int i = (numero-1); i > 0; i--){
        if(i == 1){
            printf("Nao tem primo anterior");
            break;
        }
        for (int j = (i-1); j > 0; j--){
            if (j == 1){
                printf("%i", i);
                achouprimo = 0;
            }
            if (i % j == 0){
                break;
            }
        }
        if (achouprimo == 0){
            break;
        }
    }
}
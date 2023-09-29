#include <stdio.h>
#include <stdlib.h>

int main(){
    int N;
    int i;

    printf("Digite um valor positivo inteiro:\n");
    scanf("%i", &N); //N = input()

    for (i = 2; i < N; i++){
        if ((N % i) == 0){
            printf("Nao eh primo!");
            break;
        }
        else if (N == i+1){
            printf("Eh primo");
        }
    }

    return 0;
}
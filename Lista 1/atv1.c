#include <stdio.h>
#include <stdlib.h>

int main(){
    int N;
    int i;

    printf("Digite um valor positivo inteiro:\n");
    scanf("%i", &N); //N = input()
    printf("\n");

    for (i = 1; i <= N; i++){
        if ((N % i) == 0){
            printf("%i\n", i);
        }
    }

    return 0;
}
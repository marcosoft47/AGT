#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int i;
    int fat = 1;

    printf("Informe um valor: ");
    scanf("%i", &n);

    for (i = 1; i <= n; i++){
        fat = fat*i;
    }

    printf("Fatorial: %i", fat);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int i;
    int fib = 0;
    int fib1 = 1; // Fib n-1
    int fib2 = 0; // Fib n-2

    printf("Informe a quantidade de repeticoes desejadas: ");
    scanf("%i", &n);

    for (i = 0; i < n; i++){
        fib = fib1 + fib2;
        fib2 = fib1;
        fib1 = fib;
    }
    printf("Resultado: %i", fib);
}
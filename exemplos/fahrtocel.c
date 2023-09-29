#include <stdio.h>
#include <stdlib.h>
#define EURO 5.12
#define USDOLAR 5.35

int main ()
{
    int F;
    float C;
    F = 50;
    while (F <= 150){
        C = ((5.* (F - 32.))/9.); // cast -> tradução entre tipos
        printf("\n");
        printf("%i fahr = %.2f celsius", F, C);
        F = F + 1;
    }
}
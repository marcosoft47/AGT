#include <stdio.h>
#include <stdlib.h>
#define S 10

int main (){
    int v[S];
    int temp;

    for (int i = 0; i < S; i++){
        scanf("%i", &v[i]);
    }
    for (int i = 0; i < S-1; i++){
        if (v[i] > v[i+1]){
            temp = v[i];
            v[i] = v[i+1];
            v[i+1] = temp;
        }
    }

    for (int i = 0; i < S; i++){
        printf("%i ", v[i]);
    }
}
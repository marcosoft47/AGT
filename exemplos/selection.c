#include <stdio.h>
#include <stdlib.h>
#define S 10

int main (){
    int v[S] = {2,6,8,3,10,9,1,21,33,14};

    int menor = v[0];
    int pmenor = 0;
    int temp = 0;

    for (int j = 0; j < S; j++){
        for (int i = j; i < S; i++){
            if (menor > v[i]){
                menor = v[i];
                pmenor = i;

                temp = v[j];
                v[j] = v[pmenor];
                v[i] = temp;
            }
        }
        menor = v[j+1];
    }

    for (int i = 0; i < S; i++){
        printf("%i ", v[i]);
    }

    return 0;
}
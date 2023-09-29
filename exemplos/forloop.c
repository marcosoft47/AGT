#include <stdio.h>
#include <stdlib.h>
#define S 10

int printsorted(int v[S]){
    int temp;
    int contagem = 1;
    int v2[S];

    for (int i = 0; i < S; i++){
        v2[i] = v[i];
    }

    for (int i = 0; i < S-1; i++){
        if (v[i] > v[i+1]){
            temp = v[i];
            v[i] = v[i+1];
            v[i+1] = temp;

            printf("%i: ", contagem);
            for (int i = 0; i < S; i++){
                printf("%i ", v[i]);
            }
            printf("\n");

            contagem++;
            i = -1;
        }
    }
    contagem = 1;
    printf("\n");
    
    for(int j = 0; j < S-1; j++){
        for(int i = 0; i< S-1; i++){
            if (v2[i] > v2[i+1]){
                temp = v2[i];
                v2[i] = v2[i+1];
                v2[i+1] = temp;

                printf("%i: ", contagem);
                for (int i = 0; i < S; i++){
                    printf("%i ", v2[i]);
                }
                printf("\n");
                contagem++;
            }
        }
    }
    printf("\n");    
}

int main(){
    int v[S] = {5,4,80,2,9,4,6,7,8,50};
    int v2[S] = {9,4,8,3,2,4,7,6,8,4};
    int v3[S] = {95,73,82,46,83,91,26,13,6,75};
    int v4[S] = {61,82,73,94,61,2,8,12,39,48};

    printsorted(v);
    printsorted(v2);
    printsorted(v3);
    printsorted(v4);
    
}
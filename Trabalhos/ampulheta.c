#include <stdio.h>
#include <stdlib.h>

int main(){
    int tamanho, soma = 0, quant = 0;
    float media;

    printf("Informe o tamanho da matriz:\n");

    scanf("%i", &tamanho);

    int matriz[tamanho][tamanho];

    for (int i = 0; i < tamanho; i++){
        for (int j = 0; j < tamanho; j++){
            scanf("%i", &matriz[i][j]);
        }
    }

    for (int i = 0; i < tamanho; i++){
        for(int j = 1; j < tamanho; j++){
            //A regra só se aplica na primeira metade da matriz
            //Na segunda metade, ela se inverte (< vira >)
            if (i <= tamanho/2){
                if ((i < j) && (i + j < tamanho-1)){
                    soma += matriz[i][j];
                    quant++;
                }
            } else{
                if ((i > j) && (i + j > tamanho-1)){
                soma += matriz[i][j];
                quant++;
                }
            }
        }
    }
    media = soma / quant;
    printf("%.2f", media);
}
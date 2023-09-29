#include<stdio.h>
#include<stdlib.h>
#define L 6

int main() {
    int mapa[L][L]={{0, 63, 210,190,0,190},
                    {63,0,160,150,95,0},
                    {210,160,0,10,0,0},
                    {190,150,10,0,0,0},
                    {0,95,0,0,0,80},
                    {190,0,0,0,80,0}};
    
    int quant, distancia;
    int caminhovalido = 1;

    printf("Informe quantas cidades voce quer passar:\n");
    scanf("%i", &quant);

    int caminho[quant];
    printf("Informe quais cidades voce quer passsar:\n");
    for (int i = 0; i < quant; i++)
    {
        scanf("%i", &caminho[i]);
    }
    
    for (int i = 1; i < (quant); i++){
        if (mapa[caminho[i-1]][caminho[i]] == 0){
            printf("Sem caminho entre as cidades %i e %i", caminho[i-1], caminho[i]);
            caminhovalido = 0;
            break;
        }
        distancia += mapa[caminho[i-1]][caminho[i]];
    }

    if (caminhovalido == 1){
        printf("Distancia a percorrer: %i", distancia);
    }
}
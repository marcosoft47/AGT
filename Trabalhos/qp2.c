#include <stdio.h>
#include <stdlib.h>
#define S 10

//Não sei se é para mandar de novo mas ok
int main(){
    int vout[S] = {200, 500, 50, 30, 1000, 200, 600, 350, 1000, 2000};

    int vnov1[S] = {150,490,50,3,900,180,550,300,750,1800};
    int vnov2[S] = {100,290,25,10,1000,280,500,200,550,2100};

    int diferenca, porcentagem;

    for (int i = 0; i < S; i++){
        printf("Produto %i", i);
        printf("\n");
        //Loja 1
        // Poderia usar uma função
        diferenca = vout[i] - vnov1[i];
        if (diferenca != 0){
            printf("Loja 1: ");
            porcentagem = 100 - ((vnov1[i]*100)/vout[i]);
            if (porcentagem > 0){
                printf("Abaixou %i%%", porcentagem);
            } else{
                porcentagem = porcentagem * (-1);
                printf("Aumentou %i%%", porcentagem);
            }
            printf("\n");
        }

        //Loja 2
        diferenca = vout[i] - vnov2[i];
        if (diferenca != 0){
            printf("Loja 2: ");
            porcentagem = 100 - ((vnov2[i]*100)/vout[i]);
            if (porcentagem > 0){
                printf("Abaixou %i%%", porcentagem);
            } else{
                porcentagem = porcentagem * (-1);
                printf("Aumentou %i%%", porcentagem);
            }
            printf("\n");
        }
        printf("\n");
    }
}
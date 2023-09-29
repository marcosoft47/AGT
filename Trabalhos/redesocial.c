#include <stdio.h>
#include <stdlib.h>
#define S 10

int main(){
    int v[S][S]={
    {0,1,1,0,0,0,0,0,0,0},
    {1,0,1,1,0,0,0,0,0,0},
    {1,1,0,1,0,0,0,0,0,0},
    {0,1,1,0,1,0,1,0,0,0},
    {0,0,0,1,0,1,0,0,0,0},
    {0,0,0,0,1,0,1,1,0,0},
    {0,0,0,1,0,1,0,0,1,0},
    {0,0,0,0,0,1,0,0,1,0},
    {0,0,0,0,0,0,1,1,0,1},
    {0,0,0,0,0,0,0,0,1,0}};
    int quant[S];
    int maisAmigos = 0, amigosComum = 0;

    for (int lin = 0; lin < S; lin++){
        quant[lin] = 0;
        for (int col = 0; col < S; col++){
            if (v[lin][col] == 1){
                quant[lin]++;
            }
        }
        printf("Pessoa %i tem %i amigo(s)\n", lin, quant[lin]);
    }

    printf("\n");
    for (int i = 0; i < S; i++){
        if (quant[maisAmigos] < quant[i]){
            maisAmigos = i;
        }
    }
    printf("A pessoa com mais amigos eh a pessoa %i\n", maisAmigos);
    printf("\n");

    for (int lin = 0; lin < S; lin++){
        amigosComum = 0;

        //Não quero mostrar quantos amigos em comum ele mesmo tem
        //Eu poderia ocultar pessoas com 0 amigos em comum... Não vou. Poderia! Mas não vou.
        if(!(maisAmigos == lin)){
            for (int col = 0; col < S; col++){
                if ((v[maisAmigos][col] == 1) && (v[lin][col] == 1)){
                    amigosComum++;
                }
            }
        } else{continue;}
        printf("A pessoa %i tem %i amigo(s) em comum com a pessoa %i\n", lin, amigosComum, maisAmigos);
    }
}
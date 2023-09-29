#include <stdio.h>
#include <stdlib.h>
#define Vsize 10

int main (){
    int n, achouExato, maior, menor, posmaior, posmenor = 0;

    scanf("%i", &n);
    
    //Preenche o vetor e o vetor que será organizado simultaneamente
    int vetor[Vsize];
    int v[Vsize];
    for (int i = 0; i < Vsize; i++){
        scanf("%i", &vetor[i]);
        v[i] = vetor[i];
    }

    //Se o número estiver no vetor, printa a posição e marca que achou o número exato
    for (int i = 0; i < Vsize; i++){
        if (n==vetor[i]){
            printf("%i está na posicao %i do vetor", n, i);
            achouExato = 1;
            break;
        }
    }

    //Se não achar o número exato..
    if (achouExato!=1){
        int temp;
        //Organizar o vetor
        for (int i = 0; i < Vsize-1; i++){
            if (v[i] > v[i+1]){
                temp = v[i];
                v[i] = v[i+1];
                v[i+1] = temp;
            }
        }

        //Descobrir se n está entre dois números do vetor
        for (int i = 0; i < Vsize; i++){
            if (n > v[i-1] && n < v[i]){
                maior = v[i];
                menor = v[i-1];
            }
        }

        //Marcar onde os dois números estão no vetor original (Não organizado)
        for (int i = 0; i < Vsize; i++){
            if (maior == vetor[i]){
                posmaior = i;
            }
            if (menor == vetor[i]){
                posmenor = i;
            }
        }

        //Printar os dois números encontrados
        if (menor != 0){
            printf("Mais proximo %i posicao %i", menor, posmenor);
        }
        if (menor != 0 && maior != 0){printf("\n");}
        if (maior != 0){
            printf("Mais proximo %i posicao %i", maior, posmaior);
        }
    }
}
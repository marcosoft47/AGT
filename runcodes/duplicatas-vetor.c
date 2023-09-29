#include <stdlib.h>
#include <stdio.h>

int main (){
    int vetor[10];
    // conta o quanto o número na mesma posição de vetor[] aparece no vetor
    // se não iniciar dá ruim lá para frente
    int duplicatas[10] = {0,0,0,0,0,0,0,0,0,0};

    for (int i=0; i < 10; i++){
        scanf("%i", &vetor[i]);
    }

    for (int i=0; i <10; i++){
        for (int n = 0; n < 10; n++){
            if (vetor[i] == vetor[n]){
                duplicatas[i]++;
            } 
        }
    }

    
    // Anota qual número já apareceu no output
    // Assim evita repetição de outputs
    int jafoi[10] = {0,0,0,0,0,0,0,0,0,0};

    for (int i = 0; i < 10; i++){
        //Reinicia a cada loop
        int repetida = 0;

        if (duplicatas[i] > 1){

            //Ver se vetor[i] já apareceu no output
            for (int n = 0; n < 10; n++){
                if (vetor[i] == jafoi[n]){
                    repetida = 1;
                }
            }
            if (repetida == 0){
                printf("%i: %i vezes\n", vetor[i], duplicatas[i]);
                jafoi[i] = vetor[i];
            }
        }
    }
}

/*
0
1
2
3
3
4
4
5
6
4
*/
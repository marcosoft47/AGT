#include <stdio.h>
#include <stdlib.h>

int main(){
    int tamanho;

    printf("Informe o tamanho da matriz:\n");
    scanf("%i", &tamanho);

    int matriz[tamanho][tamanho];
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            scanf("%i", &matriz[i][j]);
        }
    }

    //Nós podemos usar a mesma lógica da ampulheta, mas zerar todos os valores ao invés de somar
    //Zerando os valores, podemos facilmente comparar TODOS os elementos sem se preocupar com os que não queremos
    for (int i = 0; i < tamanho; i++){
        for(int j = 1; j < tamanho; j++){
            if (i <= tamanho/2){
                if ((i < j) && (i + j < tamanho-1)){
                    matriz[i][j] = 0;
                }
            } else{
                if ((i > j) && (i + j > tamanho-1)){
                    matriz[i][j] = 0;
                }
            }
        }
    }

    //Verificação simples de maior número numa matriz
    int maior = 0;
    for (int i = 0; i < tamanho; i++){
        for (int j = 0; j < tamanho; j++){
            if (maior < matriz[i][j]){
                maior = matriz[i][j];
            }
        }
    }
    printf("%i", maior);
    
}
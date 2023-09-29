#include <stdio.h>
#define L 5
#define C 5

int main(){
    int m[L][C]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25},lin, col;

    printf("\nEntre com 6 valores:\n");
    /*for ( lin=0; lin < L; lin++)
    for ( col = 0 ; col < C; col++)
    scanf("%i" , &m[lin][col]) ;*/

    printf("\n Saida\n");
    for ( lin=0; lin < L; lin++){
        printf("\n");
        for ( col=0; col < C; col++)
            printf("%i\t" , m[lin][col]);
    }

    printf("\n");
    printf("\nDiagonal Principal\n");
    for ( lin=0; lin < L; lin++){
        for (col=0; col < C; col++)
            if (lin == col)
                printf("%i\t" , m[lin][col]);
    }

    printf("\n");
    printf("\nDiagonal Secundaria\n");
    for ( lin=0; lin < L; lin++){
        for ( col = 0; col < C; col++)
            if (lin + col== L - 1)
                printf("%i\t" , m[lin][col]);
    }
    return 0;
}
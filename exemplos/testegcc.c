#include <stdio.h>
#include <stdlib.h>
// cd c:/.../exemplos
// gcc -o testando testegcc.c
int main(int argc, char * argv[]){
    //argv[0] "soma" 
    //argv[1] "3" 
    //argv[2] "4" 

    int a, b, res;

    if (argc > 2){
        a = atoi(argv[1]);
        b = atoi(argv[2]);
        res = a + b;

        res = a + b;
        printf("Soma = %i", res);
    }
    return 0;
}
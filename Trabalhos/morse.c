#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define latimS 36
#define SI 250
#define SO 1000

int main(){
    char* morse[latimS] = {".-", "-..", "-.-.", "-..", ".", "..-.", "--.", "....",
                        "..", ".---", ".-..", "--", "-.", "---", ".--.", "--.-",
                        ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..",
                        ".----", "..---","...--", "....-", ".....", "-....", "--...",
                        "---..", "----.", "-----"};
    char* latim[latimS]={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                        'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
                        '1', '2', '3', '4', '5', '6', '8', '9', '0'};
    char input[SI] = "";
    char output[SO] = "";
    char codigo[10];
    int contador = 0;

    fgets(input, SI, stdin);

    for (int i = 0; input[i] != '\0'; i++){
        input[i] = toupper(input[i]);
    }

    // TODO: Terminar de morse para latim
    if (input[0]=='.' || input[0]=='-'){
        for (int i = 0; i < (strlen(input) - 1); i++){
            if (isspace(input[i])){
                if (strlen(codigo) == 0){
                    continue;
                } else{
                    for (int j = 0; j < latimS; j++){
                        if (strcmp(codigo, morse[j]) == 0){
                            printf("%c", latim[j]);
                        }
                    }
                }
                memset(codigo,0,strlen(codigo));
                contador = 0;
            } else{
                codigo[contador] = input[i];
                contador++;
            }
        }
        
    } else{
        for (int i = 0; i < (strlen(input) - 1); i++){
            if (isspace(input[i])){
                printf("   ");
                continue;
            }
            for (int j = 0; j < latimS; j++){
                if (input[i] == latim[j]){
                    printf("%s ", morse[j]);
                    continue;
                }   
            }
        }
    }
}
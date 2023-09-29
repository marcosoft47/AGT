#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define S 250

//Transformar o nome na forma de citação da ABNT
void printAbnt (char nome[S]){
    char sobrenome[S] = "";
    char iniciais[S] = "";
    int contador = 0;
    
    //Pegar o sobrenome, tentando pegar o último espaço em branco.
    //O sobrenome sempre é o texto que ver depois do último espaço em branco
    //Se o caracter NÃO for espaço em branco, vetor sobrenome começa a se preencher
    //Se o caracter for um espaço em branco, o vetor sobrenome é limpado
    for (int i = 0; nome[i] !='\0'; i++){
        if (!isspace(nome[i])){
            sobrenome[contador] = toupper(nome[i]);
            contador++;
        }
        else {
            //Segundo as universidades universitárias de Massachusetts:
            //Sobrenomes com duas letras não entram na citação ABNT
            //Sim, eu inventei essa regra para tirar do/da e similares da citação
            //Maldito seja Cesar Augusto Pereira da Nobrega
            if (strlen(sobrenome) > 2){
                strncat(iniciais, sobrenome, 1);
            }
            memset(sobrenome,0,strlen(sobrenome));
            contador = 0; 
        }
    }
    
    //Agora sim imprimir de verdade:
    printf("%s, ", sobrenome);
    for (int i = 0; iniciais[i] != '\0'; i++){
        printf("%c.", iniciais[i]);
    }
}

int main(){
    char nome[S];

    scanf("%[^\n]s", &nome);
    printAbnt(nome);
    
}
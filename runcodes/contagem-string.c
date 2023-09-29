#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char vetor[1000] = "De acordo com a sede da ONU no Brasil, uma serie de tratados internacionais e outros instrumentos adotados desde 1945 expandiram o corpo do direito internacional sobre os direitos humanos. entre eles, a Convencao para a Prevencao e a Repressao do Crime de Genocidio (1948), a Convencao internacional sobre a eliminacao de Todas as Formas de Discriminacao Racial (1965), a Convencao sobre a eliminacao de Todas as Formas de Discriminacao contra as Mulheres (1979), a Convencao sobre os Direitos da Crianca (1989) e a Convencao sobre os Direitos das Pessoas com Deficiencia (2006).";
    int vsize = strlen(vetor);
    int vogais = 0;
    int letra = 0;
    int pontuacao = 0;
    int branco = 0;
    char aeiou[5] = "aeiou";

    for (int i = 0; i < vsize; i++){
        if(isalpha(vetor[i])){
            letra++;
            for (int j = 0; j < sizeof(aeiou); j++){
                if (tolower(vetor[i]) == aeiou[j]){
                    vogais++;
                }
            }
        }

        if(ispunct(vetor[i])){
            pontuacao++;
        }
        if(isblank(vetor[i])){
            branco++;
        }
    }

    printf("vogais %i\n", vogais);
    printf("letras %i\n", letra);
    printf("pontuacao %i\n", pontuacao);
    printf("brancos %i\n", branco);
}
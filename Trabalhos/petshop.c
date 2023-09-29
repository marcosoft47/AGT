#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define S 100

int main(){
    //Assumindo que a entrada será idêntica ao que foi usado de exemplo
    char nome[S], servico[S], data[S];
    float custo = 0, consulta = 100;

    printf("Informe o nome do cliente:\n");
    fgets(nome, S, stdin);
    printf("Informe o tipo de servico:\n");
    fgets(servico, S, stdin);

    //Deixar servico num padrão
    for (int i = 0; servico[i] != '\0'; i++){
        servico[i] = tolower(servico[i]);
    }

    //Switch de strings, versão C
    //Não, não vou usar regex.
    //Vacina
    if(strcmp(servico, "vacina\n") == 0){
        //Valor da vacina sempre é fixo: 90 de vacina + 100 de consulta
        //Não tem necessidade atribuir valor a custo.
        printf("Informe a data da vacina:\n");
        fgets(data, S, stdin);
        
        printf("\n");
        printf("Cliente: %s", nome);
        printf("Vacina: R$90.00\n");
        printf("Consulta: R$100.00\n");
        printf("%s", data);
        printf("Total: R$190.00");

    }
    //Castração
    else if (strcmp(servico, "castracao\n") == 0){
        char raca[S];
        custo += consulta;
        printf("Informe a raca do animal (Felino/Cachorro):\n");
        fgets(raca, S, stdin);
        raca[0] = toupper(raca[0]);

        printf("\n");
        printf("Cliente: %s", nome);
        printf("Consulta: %.2f\n", custo);
        if (raca[0] == 'F'){
            custo += 120;
        } else if(raca[0] == 'C'){
            custo += 180;
        } else{return 1;}
        printf("Castracao: %.2f\n", (custo-consulta));
        printf("%s", raca);
        printf("Total: R$%.2f", custo);

    }
    //Ração
    else if(strcmp(servico, "venda de racao\n") == 0){
        char racao[S];
        char tamanho[1];
        int quantidade;

        printf("Informe quantas racoes e qual tamanho:\n");
        fgets(racao, S, stdin);

        //3 racoes tamanho P.
        //O único número é a quantidade.
        //O final é sempre o tamanho.
        //Se mexer com string não fosse tão complicado em C, até faria algo para comprar outros tamanhos junto
        quantidade = atoi(racao);

        //fgets() pega o \n do enter. Então o último elemento é \n, o penúltimo elemento é a letra
        tamanho[0] = racao[(strlen(racao)-2)];
        tamanho[0] = toupper(tamanho[0]);

        //Adicionar o tamanho da ração ao custo
        if (tamanho[0] == 'P'){
            custo += 30;
        } else if (tamanho[0] == 'M'){
            custo += 70;
        } else if (tamanho[0] == 'G'){
            custo += 120;
        }
        custo = quantidade*custo;

        printf("\n");
        printf("Cliente: %s", nome);
        printf("Servico: Venda de Racao\n");
        printf("%i unidade racao tamanho %c ...%.2f\n", quantidade, tamanho[0], custo);
        printf("%.2f\n", custo);

        printf("Desconto: ");
        if (quantidade >=2){
            printf("10%%\n");
            custo = custo - custo*0.1;
        }else{
            printf("0%%\n");
        }
        printf("Total: %.2f", custo);
    }
    //Medicamentos
    else if(strcmp(servico, "medicamento\n") == 0){
        char medicamento[S];
        char telefone[S];

        printf("Informe o tipo de medicamento:\n");
        fgets(medicamento, S, stdin);
        printf("Informe o telefone de contato:\n");
        fgets(telefone, S, stdin);

        printf("\n");
        printf("Cliente: %s", nome);
        printf("Servico: Encomenda de medicamentos\n");
        printf("%s", medicamento);
        printf("%s", telefone);

    }
}

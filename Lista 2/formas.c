#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int escolha, raio, a, b, c, p, a_cir, a_tri, a_ret, a_qua = 0;

    while (1) {
        printf("Escolha:\n");
        printf("(1) Circulo\n");
        printf("(2) Triangulo\n");
        printf("(3) Retangulo\n");
        printf("(4) Quadrado\n");
        printf("(-1) Sair\n");

        scanf("%i", &escolha);
        printf("\n");
        if (escolha == -1){break;}

        switch (escolha){
        case (1):
            printf("Informe o raio: ");
            scanf("%i", &raio);
            a_cir = 3.14 * pow(raio, 2);
            printf("Area do circulo: %i\n", a_cir);

            break;
        case (2):
            printf("Informe o lado A: ");
            scanf("%i", &a);
            printf("\n");
            printf("Informe o lado B: ");
            scanf("%i", &b);
            printf("\n");
            printf("Informe o lado C: ");
            scanf("%i", &c);
            printf("\n");

            p = (a + b + c)/2;
            a_tri = sqrt(p * (p-a) * (p-b) * (p-c));
            printf("Area do triangulo: %i\n", a_tri);

            break;
        case (3):
            printf("Informe o comprimento: ");
            scanf("%i", &a);
            printf("\n");
            printf("Informe a largura: ");
            scanf("%i", &b);
            printf("\n");

            a_ret = a * b;
            printf("Area do retangulo: %i\n", a_ret);

            break;
        case (4):
            printf("Informe o lado do quadrado: ");
            scanf("%i", &a);
            printf("\n");

            a_qua = pow(a, 2);
            printf("Area do quadrado: %i\n", a_qua);

            break;
        }

        printf("\n");
    }
}
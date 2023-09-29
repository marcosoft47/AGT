#include <stdio.h>
#include <math.h>

int main (){
    float a, b, c, ma, mg, mh, mp;

    printf("Digite a, b, c\n");

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    //scanf("%f %f %f", &a, &b, &c);

    ma = (a + b + c)/3;
    mg = cbrt(a*b*c);
    mp = (1*a+2*b+3*c)/(1+2+3);

    if (a!=0 && b!=0 && c!=0) {
        mh = 3/(1/a + 1/b + 1/c);
        printf("\nMedia h = %i", mh);
    }
    else {
        printf("\nNao vou calcular mh");
    }

    printf("\nMedia a= %f", ma);
    printf("\nMedia geom= %f", mg);
    printf("\nMedia pond= %f", mp);

    return 0;
}
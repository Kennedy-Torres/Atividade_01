#include <stdio.h>

int main(){

    float base, altura;

    printf("iremos calcular a area de um retangulo\n\n");
    printf("Digite o valor para a base:\n");
    scanf("%f",&base);
    printf("Digite o valor para a altura:\n");
    scanf("%f",&altura);

    printf("Area do retangulo = %.2f", base*altura);


    return 0;
}
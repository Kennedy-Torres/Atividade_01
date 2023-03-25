#include <stdio.h>

int main(){

    float inicial, taxa;

    printf("iremos calcular o percentual de reajuste do salario\n\n");
    printf("Informe o valor do salario inicial:\n");
    scanf("%f",&inicial);

    printf("Agora informe o valor da taxa de reajuste:\n");
    scanf("%f",&taxa);

    printf("O salario final sera : R$ %.2f\n",inicial*(1+0.01*taxa));
    


    return 0;
}
#include <stdio.h> 

int main (){

    float raio, area, pi=3.14; 

    printf("Iremos encontrar a area de um circulo\n\n");
    printf("Digite o tamanho do raio, no conjunto dos reais, que deseja:\n");
    scanf("%f",&raio);
    printf("\nDado o valor de pi = 3,14\n");
    printf("Valor da area desse circulo:\n\narea = %.3f ",raio*raio*pi );

    return 0;
}
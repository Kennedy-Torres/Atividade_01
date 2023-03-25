#include <stdio.h>

int main(){

    float largura, altura, area=0, consumo=0, litragem=0;
    int qtd_latas=0, latas=0;
    

    printf("iremos calcular a quantidade de tintas necessaria para pintar a parede\n\n");
    printf("Defina as medidas, em metros, da largura da parede:\n");
    scanf("%f",&largura);
    printf("Defina as medidas, em metros, da altura da parede:\n");
    scanf("%f",&altura);
    
    area = largura*altura;
    consumo = 300*area; //1m² = 300ml 
    qtd_latas = consumo/2000; // capacidade de 1 lata = 2000ml 
    litragem = (300*(largura*altura))/2000; // mesma formula que a qtd_latas

    latas = qtd_latas ;

if(litragem > qtd_latas){ // outra forma -> latas = ceil(tinta / 2000); eh feito o arredondamento da quantidade de latas.
    qtd_latas++;
}
    printf("%d",latas);
    printf("\nSerao necessarias %d latas de tinta para pintar toda a parede", latas+qtd_latas);
    return 0;
}
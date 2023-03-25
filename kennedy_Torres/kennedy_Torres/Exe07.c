#include <stdio.h>

int main(){

    float cust_fab=0, custoconsumidor=0, Perdistribuidor= 28, Perimposto= 45 , valordistruibuidor, valorimposto;

    printf("Informe o valor do custo de fabrica do carro:\n");
    scanf("%f",&cust_fab);
  
    valordistruibuidor = cust_fab + ( cust_fab + Perdistribuidor/100);
    valorimposto = cust_fab + ( cust_fab*Perimposto/100);

    custoconsumidor = cust_fab + valordistruibuidor + valorimposto;

    printf("O custo final do carro parra o consumidor sera:\nR$ %.2f", custoconsumidor);

    return 0;
}
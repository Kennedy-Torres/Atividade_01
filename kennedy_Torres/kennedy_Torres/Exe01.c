#include <stdio.h>

int main(){

    float custo, frete, despesas, venda, lucro; 

    printf("Digite o custo da mercadoria:\n");
    scanf("%f",&custo);

    printf("Digite o custo do frete e eventuais despesas, respectivamente:\n");
    scanf("%f%f",&frete,&despesas);

    custo = custo + frete + despesas; 

    printf("Qual eh o valor de venda da mercadoria?\n ");
    scanf("%f",&venda);

    //lucro = venda - custo;

    printf("O seu lucro serah de:\n");
    printf("%.2f%%", ((venda-custo)/venda)*100 ); // lucro em porcentagem = (lucro liquido/receita)*100 ... receita eh o dinheiro arrecadado pela venda da mercadoria

    return 0;
}
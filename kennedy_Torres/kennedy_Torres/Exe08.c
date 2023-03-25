#include <stdio.h>

int main(){

    float salario_total, salario_base, comissao, comissao_base, total_vendas;
    int qtdcarroV;

    printf("Digite o salario fixo ganho por mes:\n");
    scanf("%f",&salario_base);

    printf("Digite a comissao fixa ganha por mes:\n");
    scanf("%f",&comissao_base);

    printf("qual foi o numero total de carros vendidos:\n");
    scanf("%d",&qtdcarroV);

    printf("Digite o valor total de vendas:\n");
    scanf("%f",&total_vendas);

    comissao = qtdcarroV*comissao_base; // valor total dado a variavel comissao
    comissao = comissao + (total_vendas*5/100); // 5% do valor total das vendas sao aplicados juntamente com a comissao

    salario_total = comissao + salario_base;
    printf("O salario final do vendedor serah:\nR$ %.2f",salario_total);
    return 0;
}
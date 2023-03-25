#include <stdio.h>

int main(){

    int anos=0, meses=0, dias=0;

    printf("Digite sua idade em anos, meses e dias, respectivamente.\n");
    scanf("%d%d%d",&anos,&meses,&dias);

    anos = anos*365; // novo valor adotado da variavel anos representando a conversao em apenas dias
    meses = meses*30; // novo valor adotado da variavel meses representando a conversao em apenas dias


    printf("Ao todo voce tem %d dias de idade.", dias+anos+meses);



    return 0;
}
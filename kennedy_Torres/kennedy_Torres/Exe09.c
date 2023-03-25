#include <stdio.h>

int main(){

    float nA, nB, nC; 

    printf("Digite, respectivamente, as suas notas tiradas nas provas A , B e C:\n");
    scanf("%f%f%f",&nA,&nB,&nC);

    printf("\nA media final desse aluno eh:\n %f  ", ((2*nA)+(3*nB)+(5*nC))/10);

    return 0;
}
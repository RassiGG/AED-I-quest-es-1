#include <stdio.h>

int main(){
    float salario, tempodeservico, ano;
    printf("Digite seu salário: \n");
    scanf("%f", &salario);
    printf("Digite o tempo de serviço em anos: \n");
    scanf("%f", &tempodeservico);

    if(tempodeservico >= 5){
        salario += 0.25*100;
    }else{
       salario += 0.10*100;

    }
    printf("Salário com bonus de 25 porcento: %.2f", salario);
    return 0;
}
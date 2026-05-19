#include <stdio.h>

int main(){
    float num1, num2;
    int opcao;
    printf("Digite um numero: \n");
    scanf("%f", &num1);
    printf("Digite o segundo numero: \n");
    scanf("%f", &num2);
    printf("Selecione 1- para Soma\n Selecione 2- para Subtração\n  Selecione 3- para Multiplicação \n  Selecione 4- para Divisão\n");
    scanf("%i", &opcao);
    switch(opcao){
        case 1:
        printf("Resultado: %.2f", num1+num2);
        break;
        case 2: 
        printf("Resultado: %.2f", num1-num2);
        break;
        case 3:
        printf("Resultado: %.2f", num1*num2);
        break;
        case 4:
    printf("Resultado %.2f", num1/num2);
    break;
    default:
    printf("Erro");
    break;
    }
    return 0;
}
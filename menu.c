#include <stdio.h>
//Faça um algoritmo que vá receber dois números 
//do tipo float digitado pelo usuário. Após isso, faça um menu que
//que mostre as opções para o usuário: 
//1 - Soma, 2 - Subtração, 3 - Divisão, 4 - Multiplicação.
//Faça esse algoritmo utilizando if-else.
int main(){
    float num1, num2, resultado;
    int opcao;
        printf("Digite um numero: \n");
        scanf("%f", &num1);
        printf("Digite segundo numero: \n");
        scanf("%f", &num2);
        printf("Escolhe 1 para Soma, 2 para Subtração, 3 para Multiplicação e 4 para Divisão: \n");
        scanf("%i", &opcao);
        if(opcao == 1){
           printf("Resultado: %f", num1+ num2);
        }else if(opcao == 2){
             printf("Resultado: %f",num1 - num2);

        } else if(opcao == 3){
             printf("Resultado: %f",num1 * num2);
        } else if(opcao == 4){
             printf("Resultado: %f ",num1 / num2);
        }else{
            printf("Erro");
        }
      
    return 0;
}
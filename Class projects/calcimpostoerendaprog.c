#include <stdio.h>
//Desenvolva um programa em C que calcule 
//o desconto progressivo do
// Imposto de Renda de um funcionário. O sistema deve ler o salário bruto do usuário e aplicar a 
//alíquota correspondente:

//Até R$ 2.000,00: Isento (0%)
//De R$ 2.000,01 a R$ 3.000,00: 8%
//De R$ 3.000,01 a R$ 4.500,00: 18%
//Acima de R$ 4.500,00: 28%
//Saída esperada: O programa deve calcular e exibir o valor 
//exato do imposto descontado e o salário líquido final do funcionário.
int main(){
    float salario;
    
    printf("Digite o seu salário: \n");
    scanf("%f", &salario);
    if(salario >=0000.00 && salario <= 2000.00){
      salario -= salario *0.00;
       printf("Valor do desconto: %f\n", salario *0.00);
    }else if(salario >= 2000.01 && salario <= 3000.00){
        salario -= salario* 0.08;
        printf("Valor do desconto: %f\n", salario *0.08);
    }else if(salario >= 3000.01 && salario <=4500.00){
        salario -= salario*0.18; 
        printf("Valor do desconto: %f\n", salario *0.18);

    }else if(salario >=4500.01){
        salario -= salario* 0.28;
        printf("Valor do desconto: %f\n", salario *0.28);
    }
    printf("Salário do usuario: %f\n", salario);
   
    return 0;
}
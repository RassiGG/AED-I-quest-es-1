//Utilize scanf() para receber o input de dois números aleatórios do 
//tipo int, utilize uma variável do tipo float para armazenar o resultado dessa divisão,
// convertando os números int para
//tipo float, após isso faça o quadrado do número resultante da divisão e imprima a variável 
//como float e inteiro.

#include <stdio.h>

int main(){
    int num1, num2;
    float divisao, quadrado;
        printf("Digite o primeiro número inteiro: ");
        scanf("%i", &num1);
        printf("Digite o segundo número inteiro: ");
        scanf("%i", &num2);
        divisao = (float)num1 / (float)num2;
    printf("Divisão float: %.2f\n", divisao);
    printf("Divisão inteira %d\n", (int)divisao);
    quadrado = divisao * divisao;
    printf("Quadrado da divisão: %.2f\n", quadrado);

    
    return 0;

}
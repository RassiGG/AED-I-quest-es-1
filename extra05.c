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
        scanf("%i, %i", &num1, &num2);
        
        divisao = (float)num1 / (float)num2;
        quadrado = divisao * divisao;
    printf("Quadrado float: %.2f\n", quadrado);
    printf("Quadrado inteiro %d\n", (int)quadrado);



    
    return 0;

}
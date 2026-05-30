#include <stdio.h>

/*Crie um programa onde o usuario digite um numero inteiro
 positivo inicial.
O programa deve aplicar as regras acima em um laço de repeticao 
ate que o numero chegue a 1. Ao final o programa deve informar 
quantos passos ou iterações foram necessarios para chegar ao 1
Qual foi o maior numero atingido durante todo o processo*/
int main(){
        int maiornumero, numero, etapas=0;
        
    printf("Digite um numero: \n");
    scanf("%i", &numero);

    maiornumero = numero;

        while(numero > 1){
            if(numero %2==0){
                printf("\nNumeros pares: %i\n", numero);
                numero = numero/=2;
                printf("\nNumeros pares divididos por 2: %i\n", numero);

            }else{
                printf("\nNumeros impares: %i\n", numero);
                numero = numero*3+1;
                printf("\nNumeros impares multiplicados por 3 e somado com 1: %i\n", numero);
                
            }
        
            printf("%i Sequencia gerada: \n", numero);
            etapas++;
        }
        if(numero > maiornumero){
            maiornumero = numero;
        }

        printf("--RESULTADOS--\n");
        printf("Sequencia de passos realizadas: %i\n", etapas);
        printf("Maior numero atingido: %i\n", maiornumero);

return 0;
}
          
          

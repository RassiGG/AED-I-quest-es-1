//parte 2 atividades extras
//Escreva um programa que preencha os valores de uma matriz quadrada e devolva o maior valor encontrado na matriz, a linha onde se encontra e a coluna.
//Adicionalmente, imprima a matriz preenchida mostrando os valores por linha e coluna.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Tam 5


int main(){

    int matriz[Tam][Tam];
    int maiorValor= 0;
    int maiorLinha = 0;
    int maiorColuna = 0;
    srand(time(NULL));

    printf("Valores da matriz: \n");
    for(int i = 0; i< Tam; i++){
        for(int j = 0; j < Tam; j++){
            matriz[i][j] = rand() % 100+1;
            printf("%d ", matriz[i][j]);
            if(matriz[i][j] > maiorValor){
                maiorValor = matriz[i][j];
                maiorLinha = i;
                maiorColuna = j;
                
            }
            printf("");
            
        }
    }

printf("O maior valor encontrado na matriz é: %d\n", maiorValor);
printf("Ele se encontra na linha: %d e coluna: %d\n", maiorLinha, maiorColuna);

    return 0;
}
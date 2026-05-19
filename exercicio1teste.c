#include <stdio.h>
    int main(){
        float media, mensalidade, bolsas;
            printf("Digite a sua média: \n");
            scanf("%f", &media);
            printf("Digite o valor da mensalidade");
            scanf("%f", &mensalidade);
            if(media >= 9.5){
                mensalidade = mensalidade *0.99;

            } else if(media >= 8.5){
            mensalidade = mensalidade * 0.50;
            }else if(media >= 7.0){
                mensalidade = mensalidade * 0.25;

            }else if(media >= 5.0){
                mensalidade = mensalidade* 0.10;
            }else {
                printf("Não recebe bolsa");
            }
            printf("Valor da mensalidade final: %f\n", mensalidade );
            printf("Média: %f\n", media);
        return 0; 
    }
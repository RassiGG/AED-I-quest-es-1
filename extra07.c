//Seu programa deve ler as seguintes características:
//Sexo: Masculino ou Feminino
//Cor do cabelo: Preto, loiro, ruivo ou castanho.
//Cor dos olhos: Azul, verde ou castanho.
//Idade.

//Seu programa deve retornar os seguintes resultados:
//A maior idade dos entrevistados
//A média das idades dos entrevistados
//A quantidade de indivíduos do sexo masculino cuja idade está entre 20 e 25
//anos e que tenham olhos castanhos e cabelos pretos
//A quantidade de indivíduos do sexo feminino cuja idade está entre 34 e 41
//anos e que tenham olhos azuis e cabelos loiros

//Dica: Utilize uma estrutura de repetição do while() para repetir a pesquisa até que o usuário diga para finalizar o programa
//e retornar os resultados.






#include <stdio.h>
int main(){
  int dados, sexo, olho, cabelo, opcao, i = 0, numHomem = 0, numMulher = 0;
    float idade, somaIdade = 0, maiorIdade = 0;
    
    
  do{
        //começo
       printf("Aperte 1 para começar as perguntas básicas \n aperte 2 para créditos: \n");
        scanf("%i", dados);
        if(dados = 1){
          //Pergunta do genero
          printf("Qual seu gênero? (1 para Masculino e 2 para Feminino):  \n");
          scanf("%i", sexo);
          if(sexo = 1){
            //pergunta do cabelo 1
            printf("Qual a cor do seu cabelo?: (1 para Preto) (2 para Loiro) (3 para castanho) (4 para Ruivo) \n");
              scanf("%i", cabelo);
              if(cabelo = 1){
                printf("Qual a cor dos seus olhos?: (1 para Azul) (2 para verde) (3 para castanho) \n");
                scanf("%i", olho);
                if(olho = 1){
                  printf("Qual é sua idade?: \n");
                  scanf("%f", idade);
                } else if(olho = 2){
                  printf("Qual é sua idade?: \n");
                  scanf("%f", idade);
                }else if(olho = 3){
                  printf("Qual é sua idade?: \n");
                  scanf("%f", idade);
                }
              }else if(cabelo =2){
                printf("Qual a cor dos seus olhos?: (1 para Azul) (2 para verde) (3 para castanho) \n");
                scanf("%i", olho);
                if(olho = 1){
                  printf("Qual é sua idade?: \n");
                  scanf("%f", idade);
                } else if(olho = 2){
                  printf("Qual é sua idade?: \n");
                  scanf("%f", idade);
                }else if(olho = 3){
                  printf("Qual é sua idade?: \n");
                  scanf("%f", idade);
                }
              }else if(cabelo =3){
                printf("Qual a cor dos seus olhos?: (1 para Azul) (2 para verde) (3 para castanho) \n");
                scanf("%i", olho);
                if(olho = 1){
                  printf("Qual é sua idade?: \n");
                  scanf("%f", idade);
                } else if(olho = 2){
                  printf("Qual é sua idade?: \n");
                  scanf("%f", idade);
                }else if(olho = 3){
                  printf("Qual é sua idade?: \n");
                  scanf("%f", idade);
                }
              }else if(cabelo = 4){
                printf("Qual a cor dos seus olhos?: (1 para Azul) (2 para verde) (3 para castanho) \n");
                scanf("%i", olho);
                if(olho = 1){
                  printf("Qual é sua idade?: \n");
                  scanf("%f", idade);
                } else if(olho = 2){
                  printf("Qual é sua idade?: \n");
                  scanf("%f", idade);
                }else if(olho = 3){
                  printf("Qual é sua idade?: \n");
                  scanf("%f", idade);
                }
              }else{
                printf("Erro pode voltar");
              }
          }else if(sexo=2){
            //Pergunta do cabelo 2
          printf("Qual a cor do seu cabelo?: (1 para Preto) (2 para Loiro) (3 para castanho) (4 para Ruivo) \n");
              scanf("%i", cabelo);
              if(cabelo = 1){
                printf("Qual a cor dos seus olhos?: (1 para Azul) (2 para verde) (3 para castanho) \n");
                scanf("%i", olho);
                if(olho = 1){
                  printf("Qual é sua idade?: \n");
                  scanf("%f", idade);
                } else if(olho = 2){
                  printf("Qual é sua idade?: \n");
                  scanf("%f", idade);
                }else if(olho = 3){
                  printf("Qual é sua idade?: \n");
                  scanf("%f", idade);
                }
              }else if(cabelo =2){
                printf("Qual a cor dos seus olhos?: (1 para Azul) (2 para verde) (3 para castanho) \n");
                scanf("%i", olho);
                if(olho = 1){
                  printf("Qual é sua idade?: \n");
                  scanf("%f", idade);
                } else if(olho = 2){
                  printf("Qual é sua idade?: \n");
                  scanf("%f", idade);
                }else if(olho = 3){
                  printf("Qual é sua idade?: \n");
                  scanf("%f", idade);
                }
              }else if(cabelo =3){
                printf("Qual a cor dos seus olhos?: (1 para Azul) (2 para verde) (3 para castanho) \n");
                scanf("%i", olho);
                if(olho = 1){
                  printf("Qual é sua idade?: \n");
                  scanf("%f", idade);
                } else if(olho = 2){
                  printf("Qual é sua idade?: \n");
                  scanf("%f", idade);
                }else if(olho = 3){
                  printf("Qual é sua idade?: \n");
                  scanf("%f", idade);
                }
              }else if(cabelo = 4){
                printf("Qual a cor dos seus olhos?: (1 para Azul) (2 para verde) (3 para castanho) \n");
                scanf("%i", olho);
                if(olho = 1){
                  printf("Qual é sua idade?: \n");
                  scanf("%f", idade);
                } else if(olho = 2){
                  printf("Qual é sua idade?: \n");
                  scanf("%f", idade);
                }else if(olho = 3){
                  printf("Qual é sua idade?: \n");
                  scanf("%f", idade);
                }
              }else{
                printf("Erro pode voltar");
              }
          }else{
            printf("Erro pode voltar");
          }
        }
        

    
    }while();
    
    
   // printf("\n");
    //printf("\nMaior idade: %.2f", maiorIdade);
    //printf("\nMedia das idades: %.2f", mediaIdade(somaIdade, i)); /*Criamos uma função float para calcular a média, inserindo a soma da idade e o divisor*/
    //printf("\nHomens entre 20 e 25 anos com olhos castanhos e cabelos loiro: %d", numHomem);
   // printf("\nMulheres entre 34 e 41 anos com olhos azuis e cabelos preto: %d", numMulher);
   // printf("\n");
   // printf("\nFinalizando programa.....");
    return 0;
}

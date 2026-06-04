/*Faça um programa em que o usuário tenha que escolher 
//a turma A ou B (utilize swi
tch-case), após selecionar a turma, verifique se a turma teve prova ou não (if-else).

Caso tenha tido prova, preencha a nota dos alunos e 
depois mostre se os alunos estão acima ou abaixo da média(if-else).
Dica: para não voltar a função principal logo após a amostragem da
 nota dos alunos, coloque uma verificação adicional para que o usuário pressione uma tecla
antes de mudar para o menu principal.

Utilize o loop de repetição "do while()"" para manter o programa em execução até que o usuário
 saia do programa. Verifique também se a turma selecionada já
tenha tenha tido prova, e se sim, mostre a nota dos alunos dessa turma 
(armazene o vetor em uma variável global)*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define alunos 10
float notasTurmaA[alunos];
float notasTurmaB[alunos];
float notaRandom(){

    return (((float)rand()) / ((float)RAND_MAX)) * 10;
}



int avaliarTurmaA(){

    int provaTurmaA;

    int resposta;
    int opcaovoltaA;
    int acimadamediaA = 0;
    int abaixodamediaA = 0;
    do{

    
  printf("Seja bem vindo a turma A Digite 1 - continuar 2- para voltar:  \n");
    scanf("%i",&opcaovoltaA);
    switch(opcaovoltaA){
        case 1: 
    printf("Essa turma ja fez avaliação?: (1 para sim e 2 para não) \n");
    scanf("%i", &provaTurmaA);
    if(provaTurmaA == 1){
         for(int i = 0; i < alunos; i++){
            notasTurmaA[i] = notaRandom();
            if(notasTurmaA[i] >= 6){   
            printf("\nOs alunos acima da media: %i\n", notasTurmaA[i]);
           
            }else{
                printf("\nOs alunos abaixo da media: %i\n", notasTurmaA[i]);
            }  

        }
    printf("\nDeseja voltar para o menu principal? (1 para sim e dois para sair do programa.) : \n");
            scanf("%i", &resposta);
            if(resposta == 1){ 
                main();
            }else{
                printf("Saindo...");
            }
    }else if(provaTurmaA == 2){
        main();
    }
    break;
    case 2:
        main();
        break;
        default: 
        avaliarTurmaA();
        break;
}
}while();
        
}
int avaliarTurmaB(){
    int provaTurmaB;
    int resposta;
    int opcaovoltaB;
    int acimadamediab = 0;
    int abaixodamediab = 0;
    do{

    
    printf("Seja bem vindo a turma B \n Digite 1 - continuar ou 2- voltar: \n");
    scanf("%i", &opcaovoltaB);
    switch(opcaovoltaB){
        case 1:   
    printf("Essa turma ja fez avaliação? (1 para sim e 2 para não): \n");
    scanf("%i", &provaTurmaB);
    if(provaTurmaB == 1){
        for(int contadorTURMAb = 0; contadorTURMAb < alunos; contadorTURMAb++){
            if(notasTurmaB[contadorTURMAb]  >= 6){
                acimadamediab = notaRandom();
                acimadamediab++;
                
                
            }else{
                abaixodamediab = notaRandom();
                abaixodamediab++;
                
            }
            printf("\nAlunos acima da media: %i\n", acimadamediab);
            printf("\nAlunos abaixo da media: %i\n", abaixodamediab);
            printf("\nAperte 1 para voltar o menu, 2 para sair: \n");
                scanf("%i", &resposta);
              while(resposta == 1 == main()){
                printf("Encerrando programa");
              }
        }
    }else if(provaTurmaB == 2){
        main();
    }
    break;
    case 2: 
    main();
    break;
    default:
    avaliarTurmaB();
    break;
}
}while();

}

int main(){

    int opcao;
    do{

    
    srand(time(NULL));
    printf("Bem vindo usuario, escolha uma turma para acessar (Digite 1 para turma A ou 2 para Turma B ou 3 para sair do programa): \n");
    scanf("%i", &opcao);
    
    
switch(opcao){
    case 1: 
    avaliarTurmaA(); 

    
    break;
    case 2:
    avaliarTurmaB();
    break;
}

}while(opcao == 1 || opcao == 2);
printf("Saindo do programa...");

    return 0;
}
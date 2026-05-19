#include <stdio.h>
//Simule o menu interativo de um Caixa Eletrônico. 
//O programa deve assumir um saldo inicial hipotético de
// R$ 1.000,00 e apresentar o seguinte menu:

//Consultar Saldo
//Fazer Depósito
//Realizar Saque
//Sair




//Regras de negócio:

//Se escolher a opção 2, peça o valor e some ao saldo.
//Se escolher a opção 3, peça o valor do saque e, usando um if interno,
// deduza o valor apenas se houver saldo suficiente. Caso contrário, emita um alerta de 
//"saldo insuficiente".
//Para as demais opções, execute a ação correspondente ou exiba uma mensagem
// de erro caso o código digitado seja inválido.
//Saída esperada: Ao final de cada operação válida de movimentação (opções 2 e 3), 
//exiba obrigatoriamente o novo saldo da conta.
int main(){
float bancoinicial =1000.00, deposito, saque;
int opcao;

    printf("Bem vindo ao Banco do RASSI!");
    printf("\nEscolha 1 para Consultar Saldo \n 2 para Fazer depósito \n 3 para realizar saque \n 4 para Sair \n:");
    scanf("%i",&opcao);
    switch(opcao){
    case 1: 
    printf("\n SEU SALDO É DE: %.2f\n", bancoinicial);
    break;
    case 2:
    printf("Digite o valor que queira depositar: \n");
    scanf("%f",&deposito);
    if(deposito){
        bancoinicial += deposito;
        printf("Novo saldo inicial: %f\n", bancoinicial);
    }
    break;
    case 3: 
    printf("Digite o valor do saque: \n");
    scanf("%f", &saque);
    if(saque <= bancoinicial){
        bancoinicial -= saque;
        printf("Novo valor do saldo inicial: %f\n", bancoinicial);
    }else{
        printf("Saldo insuficiente");
    }
    break;
    case 4:
    printf("Programa encerrado");
    break;
    default:
    printf("Erro tente novamente");
    break;
    }
    return 0; 
}
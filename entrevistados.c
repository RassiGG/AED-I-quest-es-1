#include <stdio.h>
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

int main(){
 int dadosidade = 0, sexo, olho, cabelo, opcao, numHomem = 0, numMulher = 0;
    float idade, somaIdade = 0, maiorIdade = 0, mediaidade;
    
    
  do{
         
    
            printf("Digite 1 para Masculino ou 2 para Feminino: \n");
            scanf("%i", &sexo);
           
            printf("Digite 1 para cabelo preto, 2 para cabelo loiro, 3 para cabelo ruivo e 4 para cabelo castanho: \n");
            scanf("%i", &cabelo);
            printf("Digite 1 para olho Azul, 2 para olho verde e 3 para olho castanho: \n");
            scanf("%i", &olho);
            printf("Digite sua idade: \n");
            scanf("%f", &idade);
             dadosidade++;
                somaIdade += idade; 
                
                if(idade > maiorIdade){
                    maiorIdade = idade;
                } //A quantidade de indivíduos do
                // sexo masculino cuja idade está entre 20 e 25
//anos e que tenham olhos castanhos e cabelos pretos
                    if(sexo== 1 && idade >= 20 && idade <=25 && cabelo ==1 && olho ==3){
                        numHomem++;
                    }else if(sexo == 2 && idade >=34 && idade <=41 && olho ==1 && cabelo ==2){
                     numMulher++;
            }        
            printf("Deseja cadastrar mais um entrevistado?: (1 para Sim e 2 para Não)");
            scanf("%i", &opcao);
        }while(opcao == 1);

        

                         
  printf("\n");
    printf("\nMaior idade: %f", maiorIdade);
    printf("\nMedia das idades: %f", mediaidade = somaIdade / idade); /*Criamos uma função float para calcular a média, inserindo a soma da idade e o divisor*/
    printf("\nHomens entre 20 e 25 anos com olhos castanhos e cabelos loiro: %d", numHomem);
    printf("\nMulheres entre 34 e 41 anos com olhos azuis e cabelos preto: %d", numMulher);
    printf("\n");
    printf("\nFinalizando programa.....");
        return 0;
    }
       
    
           

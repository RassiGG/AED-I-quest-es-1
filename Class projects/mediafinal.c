#include <stdio.h>
#define numerodealunos 10
int main(){
   const char *alunos[numerodealunos] = {"José", "João","Miguel","Arthur","Lucas", "Maria", "Ana","Helena","Alice","Laura"};
float nota1, nota2, nota3;
    //int alunosacimadamedia = 0;
    //int alunosabaixodamedia = 0;
    int mediafinal;
    //int alunosaindaemexame = 0;
    for(int i = 0; i < numerodealunos; i++){
        printf("\nAluno: %s\n", alunos[i]);
      printf("Digite a nota da primeira prova: \n");
    scanf("%f", &nota1);
    printf("\nDigite a nota da segunda prova: \n");
    scanf("%f",&nota2);
    printf("\nDigite a nota da terceira prova \n");
    scanf("%f", &nota3);
    if(nota1 && nota2 && nota3){
         mediafinal = nota1 + nota2 + nota3 / 3;
    
        if(mediafinal >= 7.0){
            printf("Aprovado\n");
            printf("\nBom aluno %s", alunos[i]);
            //alunosacimadamedia++;
        }else if(mediafinal >= 5.0){
            printf("Ainda em exame...");
            printf("Aluno medio: %s", alunos[i]);
            //alunosaindaemexame++;
        }else{
            printf("Reprovado");
            printf("Aluno com baixo desempenho: %s", alunos[i]);
            //alunosabaixodamedia++;
        }
    }
}
    return 0;
}
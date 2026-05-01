//parte 2 atividades extras 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    #define alunos 40

int main(){

    float notas[alunos];
    float mediatotal = 0;
    float mediaSala = 0;
      int acimadamedia = 0;
    int abaixoDamedia = 0; 
    int i;
    srand(time(NULL));
        

        printf(" Notas aleatória dos alunos: \n");
    for( i = 0; i < alunos; i++){
        notas[i] = ((float)rand() / ((float)RAND_MAX) * 10.0);
        mediatotal += notas[i];
    }

    printf("Notas dos alunos: \n");
    for( i = 0; i < alunos; i++){
        printf("%.2f\n", notas[i]);
    }
    //calcular média da sala

    mediaSala = mediatotal / alunos;
    printf(" a média da sala é: %.2f\n", mediaSala);
    for(i = 0; i < alunos; i++){
        if(notas[i] >= 6.00){
            acimadamedia++;
        } else {
            abaixoDamedia++;
        }
    }

    printf("Alunos acima da média: %d\n", acimadamedia); 
    printf("Alunos abaixo da média: %d\n", abaixoDamedia);

    return 0;
}
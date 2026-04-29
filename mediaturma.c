//parte 2 atividades extras 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    #define alunos 40

int main(){

    float notas[alunos];
    float mediatotal = 0;
    float mediaSala = 0;
    srand(time(NULL));
    

        printf(" Notas aleatória dos alunos: \n");
    for(int i = 0; i < alunos; i++){
        notas[i] = rand() % 10 + 1;
        mediatotal += notas[i];
    }
    mediatotal = mediatotal / alunos;
    printf(" a média total é: %.2f\n", mediatotal);
    //calcular média

    mediaSala = mediatotal / alunos;
    printf(" a média da sala é: %.2f\n", mediaSala);

    printf("Alunos acima da média: ", mediatotal++);
    printf("Alunos abaixo  da média: ", mediatotal--);
    return 0;
}
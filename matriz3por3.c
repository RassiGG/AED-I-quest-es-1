#include <stdio.h>
#define num 3 
int main(){
        int matriz[num][num];

    printf("Preencha a matriz\n");

    for(int i = 0; i < num; i++){
        for(int j = 0; j < num; j++){
            printf("Valor: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Mostrar valores matriz: \n");
    for(int i = 0; i < num; i++){

        for(int j = 0; j < num; j++){

            printf("%d \t", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
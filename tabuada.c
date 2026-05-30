#include <stdio.h>

int main(){
    int numero, volta;
    printf("--BEM VINDO A TABUADA DOS INTEIROS--\n");
    printf("\nDigite um numero para começar: \n");
    scanf("%i", &numero);
    if(numero<1){
        printf("Entrada inválida aperte 1 para voltar ou 2 para sair: \n");
        scanf("%i", &volta);
        while(volta == 1 == main());
           printf("Voce saiu");

    }

    
    for(int cont; cont<=10; cont++){
        printf("%i * %2i = %i\n", numero, cont, numero * cont);
    }
        printf("Tabuada desse numero até o dez %i:\n", numero);
  
    

return 0;
}



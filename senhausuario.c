#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*Crie um programa que receba uma senha de um usuário, e verifique se a 
senha possui apenas caracteres alfabéticos (de a-z),
depois de verificar se se possui apenas caracteres alfabéticos, 
verifique se a senha possui pelo menos 10 caracteres e 2 letras maiúsculas.
Lembre-se de tratar as exceções (casos de erro)*/

int main(){

    char senha[100];
    int tamanho, index, maiuscula = 0;
    printf("Digite sua senha: \n");
    fgets(senha, sizeof(senha), stdin);

    tamanho = strlen(senha);
   for( index = 0; index<tamanho; index++){
    if(!isalpha(senha[index])){
        printf("\nEssa senha nao possui caracteres alfabeticos\n");
        return 1;
    }else{
        printf("\nEssa senha possui caracteres alfabeticos\n");
    }
}
    for(int indexcarac = 0; indexcarac<tamanho; indexcarac++){

    
    if(senha[indexcarac] >= 10){
        printf("\nEssa senha possui mais de 10 caracteres\n");
    }else{
        printf("\nEssa senha possui menos de 10 caracteres \n");
    }
}


    if(senha[index] == 'A' ||'B' || 'C'||'D' ||'E' ||'F' ||'G' ||'H' ||'I' ||'J' ||'K' ||'L' ||'M' ||'N' ||'O' ||'P' ||'Q' || 'R'||'S' ||'T' ||'U' ||'V' ||'W' ||'X' ||'Y' ||'Z'){
        maiuscula++;

    }
        if(maiuscula>=2){
            printf("\nEssa senha possui mais de dois caracteres maiusculos\n");
        }   else{
            printf("\nEssa senha não possui mais de dois caracteres maiusculos\n");
        }

    return 0;
}

    
              


























        /*  if(tamanho){
            printf("Sua senha possui dez caracteres %i\n", tamanho);
        }else{
            printf("Sua senha não possui dez caracteres %i\n", tamanho);
        }

     if(senha == ('A'   || 'B'  || 'C'  ||'D'  ||'E' || 'F' ||'G' ||'H' || 'I'  || 'J' || 'K' ||'L'  || 'M' || 'N' ||'O'  || 'P'|| 'Q' ||  'R'||'S' ||'T' || 'U' || 'V' ||'W' ||'X'  ||'Y' ||'Z')){
        maiuscula++;
        printf("Sua senha possui letras maiusculas \n");
     }else{
        printf("Sua senha não possui letras maiusculas \n");
     }
       if(maiuscula = 2){
          printf("Sua  senha possui 2 letras maiusculas %i\n", maiuscula);
         }else{
            printf("Sua senha não possui 2 letras maiusculas %i\n", maiuscula);
         }
         return 0;
        }

    
        */
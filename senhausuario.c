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
    int tamanho;
    int index, maiuscula = 0;
    printf("Digite sua senha: \n");
    fflush(stdin);
    fgets(senha, sizeof(senha), stdin);

    tamanho = strlen(senha);
    for(index = 0; senha[index]< strlen(senha); index++){
 if(!isalpha(senha)){
        printf("Essa senha nao possui caracteres alfabeticos");
}else{
        printf("Essa senha possui caracteres alfabeticos");
    }
}
    if(senha[index] >= 10){
        printf("Essa senha possui mais de 10 caracteres");
    }else{
        printf("Essa senha possui menos de 10 caracteres");
    }


    if(senha[index] == 'A' ||'B' || 'C'||'D' ||'E' ||'F' ||'G' ||'H' ||'I' ||'J' ||'K' ||'L' ||'M' ||'N' ||'O' ||'P' ||'Q' || 'R'||'S' ||'T' ||'U' ||'V' ||'W' ||'X' ||'Y' ||'Z'){
        maiuscula++;

    }
        if(maiuscula>=2){
            printf("Essa senha possui mais de dois caracteres maiusculos");
        }   else{
            printf("Essa senha não possui mais de dois caracteres maiusculos");
        }

    return 0;
}
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*Crie um programa que receba uma senha de um usuário, e verifique se a 
senha possui apenas caracteres alfabéticos (de a-z),
depois de verificar se se possui apenas caracteres alfabéticos, 
verifique se a senha possui pelo menos 10 caracteres e 2 letras maiúsculas.
Lembre-se de tratar as exceções (casos de erro)*/
int main(){

    char password[100];        
    int sizecharacters=0, upper = 0;
        printf("Digite sua senha: \n");
        fgets(password, sizeof(password), stdin);
            for(int contcarac; contcarac< password[contcarac]; contcarac++){
                if(!isalpha(password[contcarac])){
                    sizecharacters++;
                    printf("The password needs only letters!");
                    if(sizecharacters >=10){
                        printf("Your password have 10 or more letters: %i\n", sizecharacters);
                        
                    }else{
                        printf("Your password doesnt have 10 or more letters: %i\n", sizecharacters);
                        
                    
                    }
                
                }

                
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
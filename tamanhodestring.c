#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define tam 150
///*Faça um programa que leia uma string de tamanho definido pelo programador, 
//receba o input por um usuário, pegue o tamanho da string
//e crie uma variável nova com
// o tamanho específico do texto digitado pelo usuário,
// copiando o texto da string 
//original na variável nova e depois printe o texto da variável 
//nova e compare o tamanho da variável origitnal com a variável nova.
int main(){
    char *texto = malloc(tam);
        printf("Digite um texto: \n");
        fgets(texto, tam, stdin);
        int tamanhooriginal = strlen(texto);
        printf("Tamanho do texto 1: %zu\n", tamanhooriginal);
            if(texto){
                char *novotexto = realloc(texto, 150);
                strcpy(novotexto, texto);
         strcmp(texto, novotexto);
         if(tamanhooriginal == strlen(novotexto)){
            printf("Textos iguais \n");

         }else{
            printf("Textos diferentes");
         }
          printf("Tamanho do novo texto 2: %zu\n", strlen(novotexto));
       printf("Texto: %s\n", novotexto);
         
       

     
            }
           


        
        
            return 0;
}





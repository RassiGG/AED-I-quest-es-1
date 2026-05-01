//Utilize a função fgets() para receber um texto inserido pelo usuário, em seguida imprima o texto 
//e quantas consoantes e quantas vogais o texto possui. Caso tenha algum caractere
//que não seja letra, ignore.
//Dica: Utilize a função a função isalpha() para verificar se é um caractere e 
//utilize outra função para padrozinar os caractere, lembrando que maiúsculo e minúsculo são diferentes.
//Para saber quando o loop deve parar, utilize a função strlen();

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char texto[50];
    int vogais = 0, consoantes = 0;
    int contadordecaracteres = 0;
    char letra;
    printf("Digite um texto: ");
    fgets(texto, sizeof(texto), stdin);
    for(contadordecaracteres = 0; contadordecaracteres < strlen(texto); contadordecaracteres++){
        letra = texto[contadordecaracteres];
        if(isalpha(letra)){
            letra = tolower(letra);
            if( (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')){
                vogais++;
            } else {
                consoantes++;
            }
        }
    }
    printf("%s\n", texto);
    printf("O texto possui %d vogais e %d consoantes.", vogais, consoantes);
}

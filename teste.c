#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM 150

int main(void)
{
    char *texto = malloc(TAM);
    if (texto == NULL) {
        fprintf(stderr, "Erro de alocação de memória.\n");
        return 1;
    }

    printf("Digite um texto:\n");
    if (fgets(texto, TAM, stdin) == NULL) {
        fprintf(stderr, "Erro ao ler o texto.\n");
        free(texto);
        return 1;
    }

    size_t tamanho_original = strlen(texto);
    if (tamanho_original > 0 && texto[tamanho_original - 1] == '\n') {
        texto[tamanho_original - 1] = '\0';
        tamanho_original--;
    }

    char *novotexto = malloc(tamanho_original + 1);
    if (novotexto == NULL) {
        fprintf(stderr, "Erro de alocação de memória.\n");
        free(texto);
        return 1;
    }

    strcpy(novotexto, texto);

    printf("Tamanho do texto 1: %zu\n", tamanho_original);
    printf("Tamanho do novo texto 2: %zu\n", strlen(novotexto));
    printf("Texto: %s\n", novotexto);

    if (tamanho_original == strlen(novotexto)) {
        printf("Textos iguais\n");
    } else {
        printf("Textos diferentes\n");
    }

    free(texto);
    free(novotexto);

    return 0;
}
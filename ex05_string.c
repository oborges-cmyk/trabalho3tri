#include <stdio.h>
#include <string.h>
#include <ctype.h> 
#define TAMANHO_MAX_STRING 101 // 100 caracteres + \0

int main() {
    char linha[TAMANHO_MAX_STRING];
    int i, contadorVogais = 0;

    printf("Digite uma linha de texto (max 100 caracteres):\n");

    if (fgets(linha, TAMANHO_MAX_STRING, stdin) == NULL) {
        printf("Erro na leitura da linha.\n");
        return 1;
    }

    size_t len = strlen(linha);
    if (len > 0 && linha[len - 1] == '\n') {
        linha[len - 1] = '\0';
        len--;
    }

    for (i = 0; linha[i] != '\0'; i++) {
        char c = tolower((unsigned char)linha[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contadorVogais++;
        }
    }

    printf("\n--- Resultado ---\n");
    printf("Linha digitada: \"%s\"\n", linha);
    printf("Comprimento da linha: %zu\n", len);
    printf("O número de vogais (a, e, i, o, u) é: %d\n", contadorVogais);

    return 0;
}

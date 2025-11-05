#include <stdio.h>
#include <limits.h>
#define TAMANHO_VETOR 10
int main() {
    int vetor[TAMANHO_VETOR];
    int i;
    int maior = INT_MIN;
    int menor = INT_MAX;
    long long soma = 0; 
    float media = 0.0;

    for (i = 0; i < TAMANHO_VETOR; i++) {
        printf("Digite o inteiro na posição %d/%d: ", i + 1, TAMANHO_VETOR);
        if (scanf("%d", &vetor[i]) != 1) {
            printf("Erro na leitura. O programa será encerrado.\n");
            return 1;
        }
    }

    for (i = 0; i < TAMANHO_VETOR; i++) {
        int valor = vetor[i];

        if (valor > maior) {
            maior = valor;
        }

        if (valor < menor) {
            menor = valor;
        }

        soma += valor;
    }

    media = (float)soma/TAMANHO_VETOR;

    printf("\nResultados:\n");
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Média: %.2f\n", media);

    return 0;
}

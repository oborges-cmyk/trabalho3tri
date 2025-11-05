#include <stdio.h>

int main() {
    int N, i;

    printf("Digite um número para calcular a sua tabuada: ");
    if (scanf("%d", &N) != 1) {
        printf("Erro na leitura do numero.\n");
        return 1;
    }

    printf("\n Tabuada do %d \n", N);
    
    for (i = 1; i <= 10; i++) {
        int resultado = N * i;
        printf("%2d x %2d = %3d\n", N, i, resultado);
    }

    return 0;
}

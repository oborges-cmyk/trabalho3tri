#include <stdio.h>

    int main() {
    int numero =0;
    int soma = 0; 
    int contador = 0;
    float media = 0.0;
    
    while (1) {
        printf("Digite no mínimo 2 números (-1 irá encerrar o programa): ");
        
        if (scanf("%d", &numero) != 1) {
            printf("\nERRO: Entrada inválida (Não é um numero inteiro).\n");
            printf("Limpando buffer e tentando novamente.\n\n");
           while (getchar() != '\n'); 
            continue;
        }
        if (numero == -1) {
            break;
        }
        soma += numero;
        contador++;
    }

    printf("\nResultados: \n");
    printf("Quantidade de numeros lidos (com a excessão do -1): %d\n", contador);
    printf("Soma dos numeros: %d\n", soma);

    if (contador > 0) {
        media = (float)soma / contador; 
        printf("Média dos numeros: %.2f\n", media);
    } else {
        printf("Nenhum numero válido foi digitado.\n");
    }

    return 0;
}

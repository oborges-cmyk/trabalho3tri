#include <stdio.h>

int main() {
    int N;

    do {
        printf("Digite o número de salários (1 a 10): ");
        if (scanf("%d", &N) != 1) return 1;
    } while (N < 1 || N > 10);

    float salarios[10];
    int opcao;

    for (int i = 0; i < N; i++) {
        printf("Salário %d: ", i + 1);
        if (scanf("%f", &salarios[i]) != 1) return 1;
    }

    do {
        printf("\n--- Menu Salários ---\n");
        printf("1) Listar salários\n");
        printf("2) Média dos salários\n");
        printf("0) Sair\n");
        printf("Escolha uma opção: ");
        
        if (scanf("%d", &opcao) != 1) break;

        switch (opcao) {
            case 1:
                printf("--- Lista de Salários ---\n");
                for (int i = 0; i < N; i++) {
                    printf("Salário %d: R$ %.2f\n", i + 1, salarios[i]);
                }
                break;
            case 2: {
                float soma = 0.0;
                for (int i = 0; i < N; i++) {
                    soma += salarios[i];
                }
                printf("Média dos salários: R$ %.2f\n", soma / N);
                break;
            }
            case 0:
                printf("Saindo do menu.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}

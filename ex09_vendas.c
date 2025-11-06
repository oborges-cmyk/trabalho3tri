#include <stdio.h>

int main() {
    float vendas[2][2];
    int opcao;

    printf("Digite os valores de vendas (2 filiais x 2 meses):\n");
    for (int i = 0; i < 2; i++) { 
        for (int j = 0; j < 2; j++) {
            printf("Filial %d, Mês %d (R$): ", i + 1, j + 1);
            if (scanf("%f", &vendas[i][j]) != 1) return 1;
        }
    }

    do {
        printf("\n--- Menu Vendas ---\n");
        printf("1) Total por filial\n");
        printf("2) Total por mês\n");
        printf("3) Total geral\n");
        printf("0) Sair\n");
        printf("Escolha uma opção: ");

        if (scanf("%d", &opcao) != 1) break;

        switch (opcao) {
            case 1: {
                float total_filial1 = vendas[0][0] + vendas[0][1];
                float total_filial2 = vendas[1][0] + vendas[1][1];
                printf("Total Filial 1: R$ %.2f\n", total_filial1);
                printf("Total Filial 2: R$ %.2f\n", total_filial2);
                break;
            }
            case 2: {
                float total_mes1 = vendas[0][0] + vendas[1][0];
                float total_mes2 = vendas[0][1] + vendas[1][1];
                printf("Total Mês 1: R$ %.2f\n", total_mes1);
                printf("Total Mês 2: R$ %.2f\n", total_mes2);
                break;
            }
            case 3: {
                float total_geral = vendas[0][0] + vendas[0][1] + vendas[1][0] + vendas[1][1];
                printf("Total Geral: R$ %.2f\n", total_geral);
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

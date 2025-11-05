#include <stdio.h>

int main() {
    float salario_mensal;
    int opcao;

    printf("Digite o salário mensal do colaborador: ");
    if (scanf("%f", &salario_mensal) != 1) return 1;

    do {
        printf("\n--- Menu RH ---\n");
        printf("1) Calcular INSS (8%%)\n");
        printf("2) Calcular valor das horas extras\n");
        printf("0) Sair\n");
        printf("Escolha uma opção: ");
        
        if (scanf("%d", &opcao) != 1) break;

        switch (opcao) {
            case 1: {
                float inss = salario_mensal * 0.08f;
                printf("Valor do INSS (8%%): R$ %.2f\n", inss);
                break;
            }
            case 2: {
                float horas_extras;
                float valor_hora_base = salario_mensal / 220.0f;
                float valor_hora_extra = valor_hora_base * 1.50f;
                float valor_total_extra;

                printf("Informe a quantidade de horas extras: ");
                if (scanf("%f", &horas_extras) != 1) break;

                valor_total_extra = valor_hora_extra * horas_extras;
                printf("Valor das horas extras: R$ %.2f\n", valor_total_extra);
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

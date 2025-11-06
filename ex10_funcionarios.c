#include <stdio.h>

int main() {
    int N;

    do {
        printf("Digite o número de funcionários (1 a 10): ");
        if (scanf("%d", &N) != 1) return 1;
    } while (N < 1 || N > 10);

    int ids[10];
    double salarios[10];
    int opcao;

    for (int i = 0; i < N; i++) {
        printf("\nCadastro funcionário %d:\n", i + 1);
        printf("ID (inteiro): ");
        if (scanf("%d", &ids[i]) != 1) return 1;
        printf("Salário (double): ");
        if (scanf("%lf", &salarios[i]) != 1) return 1;
    }

    do {
        printf("\n--- Menu Cadastro ---\n");
        printf("1) Listar todos (id e salário)\n");
        printf("2) Mostrar o maior salário e seu id\n");
        printf("0) Sair\n");
        printf("Escolha uma opção: ");

        if (scanf("%d", &opcao) != 1) break;

        switch (opcao) {
            case 1:
                printf("\n--- Lista de Funcionários ---\n");
                for (int i = 0; i < N; i++) {
                    printf("ID: %d | Salário: R$ %.2lf\n", ids[i], salarios[i]);
                }
                break;
            case 2: {
                double maior_salario = 0.0;
                int id_maior_salario = -1;

                for (int i = 0; i < N; i++) {
                    if (salarios[i] > maior_salario) {
                        maior_salario = salarios[i];
                        id_maior_salario = ids[i];
                    }
                }
                
                if (id_maior_salario != -1) {
                    printf("\n--- Maior Salário ---\n");
                    printf("Maior Salário: R$ %.2lf\n", maior_salario);
                    printf("ID do funcionário: %d\n", id_maior_salario);
                } else {
                    printf("Nenhum salário cadastrado.\n");
                }
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

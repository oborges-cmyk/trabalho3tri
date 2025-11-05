#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    bool eh_primo = true;
    int menor_divisor = 0;

    do {
        printf("Digite um inteiro n (n >= 2): ");
        if (scanf("%d", &n) != 1) return 1;
    } while (n < 2);

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            eh_primo = false;
            menor_divisor = i;
            break;
        }
    }

    if (eh_primo) {
        printf("%d é primo.\n", n);
    } else {
        printf("%d não é primo.\n", n);
        printf("Menor divisor (>1): %d\n", menor_divisor);
    }

    return 0;
}

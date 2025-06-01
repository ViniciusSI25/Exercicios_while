#include <stdio.h>

int main() {
    int numero, soma = 0, i;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    printf("Divisores de %d (exceto ele mesmo): ", numero);

    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            printf("%d ", i);
            soma += i;
        }
    }

    printf("\nSoma dos divisores = %d\n", soma);

    if (soma == numero) {
        printf("%d Eh um numero perfeito.\n", numero);
    } else {
        printf("%d Nao eh um numero perfeito.\n", numero);
    }

    return 0;
}

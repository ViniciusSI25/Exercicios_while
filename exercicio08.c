#include <stdio.h>

int main() {
    int numero, inverso = 0, resto;

    printf("Inversao de numero \n");
    printf("Digite um numero: ");
    scanf("%d", &numero);

    while (numero > 0) {
        resto = numero % 10;
        inverso = inverso * 10 + resto;
        numero /= 10;
    }

    printf("Invertido: %d\n", inverso);
    return 0;
}

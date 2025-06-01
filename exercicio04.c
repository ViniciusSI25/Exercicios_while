#include <stdio.h>

int main() {
    float nota, soma = 0;
    int divisor = 0;

    while (1) {
        printf("Digite uma nota de 0 a 10 (para parar digite 11): ");
        scanf("%f", &nota);

        if (nota < 0 || nota > 10) break;

        soma += nota;
        divisor++;
    }

    if (divisor > 0)
        printf("Media = %.2f\n", soma / divisor);
    else
        printf("Nenhuma nota valida foi digitada.\n");

    return 0;
}

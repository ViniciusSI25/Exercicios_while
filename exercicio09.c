#include <stdio.h>

int main() {
    int numero, max, min;
    
    printf("Digite um numero (Digite 0 para parar): ");
    scanf("%d", &numero);

    if (numero == 0) {
        printf("Nenhum numero foi digitado.\n");
        return 0;
    }

    max = min = numero;

    while (1) {
        printf("Digite outro numero (0 para parar): ");
        scanf("%d", &numero);
        if (numero == 0)
            break;
        if (numero > max) max = numero;
        if (numero < min) min = numero;
    }

    printf("Maximo = %d e Minimo = %d\n", max, min);
    return 0;
}

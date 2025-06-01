#include <stdio.h>

int main() {
    int numero, digito, pares = 0, impares = 0;
    
    printf("Digite um ou mais numeros inteiros: ");
    scanf("%d", &numero);

    while (numero > 0) {
        digito = numero % 10;
        if (digito % 2 == 0)
            pares++;
        else
            impares++;
        numero /= 10;
    }

    printf("%d pares, %d impares\n", pares, impares);
    return 0;
}

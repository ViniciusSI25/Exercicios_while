#include <stdio.h>

int main() {
    int num, soma = 0;

 printf("Somatoria \n");
    do {
        printf("Digite um numero (para somar tudo, digite 0): ");
        scanf("%d", &num);
        soma += num;
    } while (num != 0);

    printf("Soma total = %d\n", soma);
    return 0;
}

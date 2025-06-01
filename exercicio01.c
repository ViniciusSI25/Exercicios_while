#include <stdio.h>

int main() {
    int n;
    
    printf("Contagem Regressiva \n");
    printf("Digite um numero inteiro maior que zero: ");
    scanf("%d", &n);

    while (n >= 0) {
        printf("%d\n", n);
        n--;
    }
    return 0;
}

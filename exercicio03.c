#include <stdio.h>

int main() {
    int n; 
    long fatorial = 1;
    
    printf("Digite um numero inteiro maior que zero: ");
    scanf("%d", &n);

    while (n > 1) {
        fatorial *= n;
        n--;
    }

    printf("Fatorial = %d\n", fatorial);
    return 0;
}

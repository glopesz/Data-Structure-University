#include <stdio.h>

int main() {
    int numero, fatorial = 1;
    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++) {
        fatorial *= i;
    }

    printf("O fatorial de %d é %d\n", numero, fatorial);
    return 0;
}
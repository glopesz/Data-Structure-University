#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int numero;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero > 10) {
        printf("O número é maior que 10.\n");
    } else if (numero < 10) {
        printf("O número é menor que 10.\n");
    } else {
        printf("O número é igual a 10.\n");
    }
    return 0;
}
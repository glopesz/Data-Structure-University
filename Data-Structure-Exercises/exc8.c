#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int numero;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("O número é positivo.\n");
    } else if (numero < 0) {
        printf("O número é negativo.\n");
    } else {
        printf("O número é igual a 0.\n");
    }
    return 0;
}
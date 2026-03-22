#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int numero, numeroDois;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um número: ");
    scanf("%d", &numero);
    printf("Digite outro número: ");
    scanf("%d", &numeroDois);

    if (numero > numeroDois) {
        printf("A divisão do maior pelo menor é: %d\n", numero / numeroDois);
    } else if (numeroDois > numero) {
        printf("A divisão do maior pelo menor é: %d\n", numeroDois / numero);
    } else {
        printf("Os números são iguais.\n");
    }
    return 0;
}
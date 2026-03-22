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
    printf("Subtração: %d", numero - numeroDois);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um número: ");
    int numero;
    scanf("%d", &numero);
    printf("O número digitado foi: %d", numero);
    return 0;
}
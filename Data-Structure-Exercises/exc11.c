#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int n1, n2, n3;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    printf("Digite o terceiro número: ");
    scanf("%d", &n3);

    printf("A média é: %d\n", (n1 + n2 + n3) / 3);
    return 0;
}
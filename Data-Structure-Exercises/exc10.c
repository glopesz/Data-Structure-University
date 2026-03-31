#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int x;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um número: ");
    scanf("%d", &x);

    printf("Y = %d\n", x + 5);
    return 0;
}
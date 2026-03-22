#include <stdio.h>
#include <stdbool.h>

int main() {
    bool valor; 
    printf("Digite 0 (false) ou 1 (true): ");
    scanf("%d", &valor);
    bool oposto = !valor;
    printf("O valor oposto é: %s\n", oposto ? "true" : "false");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Digite seu nome: ");
    char nome[50];
    fgets(nome, sizeof(nome), stdin);
    printf("Bem vindo, %s", nome);
    return 0;
}
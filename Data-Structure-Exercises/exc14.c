#include <stdio.h>

int main() {
    int primeiro, razao, i, termo;

    printf("Digite o primeiro termo: ");
    scanf("%d", &primeiro);

    printf("Digite a razao: ");
    scanf("%d", &razao);

    termo = primeiro;

    for(i = 0; i < 10; i++) {
        printf("%d\n", termo);
        termo = termo + razao;
    }

    return 0;
}

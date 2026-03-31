#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h> // Para paralelismo

// Função de Ordenação (Odd-Even Sort)
void odd_even_sort(int *arr, int n) {
    int ordenado = 0;
    while (!ordenado) {
        ordenado = 1;

        // Fase Ímpar
        #pragma omp parallel for shared(arr, n) reduction(&&:ordenado)
        for (int i = 1; i < n - 1; i += 2) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                ordenado = 0;
            }
        }

        // Fase Par
        #pragma omp parallel for shared(arr, n) reduction(&&:ordenado)
        for (int i = 0; i < n - 1; i += 2) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                ordenado = 0;
            }
        }
    }
}

// Função auxiliar para imprimir o vetor
void imprimir_vetor(const char *label, int *arr, int n) {
    printf("%s: [", label);
    for (int i = 0; i < n; i++) {
        printf("%d%s", arr[i], (i == n - 1) ? "" : ", ");
    }
    printf("]\n");
}

int main() {
    int n = 8;
    srand(time(NULL));

    // 1. Vetor JÁ ORDENADO -> Melhor Caso
    int ordenado[] = {1, 2, 3, 4, 5, 6, 7, 8};
    printf("--- Teste 1: Já Ordenado ---\n");
    odd_even_sort(ordenado, n);
    imprimir_vetor("Resultado", ordenado, n);

    // 2. Vetor EM ORDEM INVERSA -> Pior Caso
    int inverso[] = {8, 7, 6, 5, 4, 3, 2, 1};
    printf("\n--- Teste 2: Ordem Inversa ---\n");
    odd_even_sort(inverso, n);
    imprimir_vetor("Resultado", inverso, n);

    // 3. Vetor COM VALORES ALEATÓRIOS -> Caso Médio
    int aleatorio[8];
    for(int i=0; i<n; i++) aleatorio[i] = rand() % 100;
    printf("\n--- Teste 3: Valores Aleatórios ---\n");
    imprimir_vetor("Antes", aleatorio, n);
    odd_even_sort(aleatorio, n);
    imprimir_vetor("Depois", aleatorio, n);

    // 4. Vetor COM ELEMENTOS REPETIDOS -> Caso Especial
    int repetidos[] = {5, 1, 5, 2, 1, 9, 5, 3};
    printf("\n--- Teste 4: Elementos Repetidos ---\n");
    imprimir_vetor("Antes", repetidos, n);
    odd_even_sort(repetidos, n);
    imprimir_vetor("Depois", repetidos, n);

    return 0;
}
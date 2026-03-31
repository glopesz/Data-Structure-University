#include <stdio.h> 

int main() { 
    float A, B; 

    printf("Digite o valor de A: "); 
    scanf("%f", &A); 

    B = (A * (A + 2)) / 5; 

    printf("O valor de B é: %.2f\n", B); 
    return 0; 
} 
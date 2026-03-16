#include <stdio.h>
#include <locale.h>

int matriz[3][2];
int matrizOposta[3][2];

int main(void){
	setlocale(LC_ALL,"Portuguese");	
	matriz[0][0] = 12;
	matriz[0][1] = 21;	
	matriz[1][0] = 6;
	matriz[1][1] = 5;	
	matriz[2][0] = -3;
	matriz[2][1] = 8;	
	int i,j;
	printf("----------- Matriz Original ----------\n");
	for(i = 0; i < 3;i++){
		for(j = 0;j < 2;j++){
			printf("%d\t",matriz[i][j]);
		}
		printf("\n");
	}
	printf("---------------------------------------\n");
	printf("----------- Matriz Oposta ----------\n");
	for(i = 0; i < 3;i++){
		for(j = 0;j < 2;j++){
			matrizOposta[i][j] = matriz[i][j]*-1;
			printf("%d\t",matrizOposta[i][j]);
		}
		printf("\n");
	}
	printf("---------------------------------------\n");
	printf("----------- Matriz Nula ----------\n");
	for(i = 0; i < 3;i++){
		for(j = 0;j < 2;j++){
			printf("%d\t",(matriz[i][j] + matrizOposta[i][j]));
		}
		printf("\n");
	}
	printf("---------------------------------------\n");
	printf("----------- Matriz Identidade ----------\n");
	
	int tam = 3;
	int matrizI[tam][tam]; //matriz de ordem 3
	
	for(i = 0; i < tam; i++) 
		for(j = 0; j < tam; j++)matrizI[i][j] = 0;
		

	matrizI[0][0] = matrizI[1][1] = matrizI[2][2] = 1;
	for(i = 0; i < tam; i++) {
		for(j = 0; j < tam; j++) {
			printf("%d\t", matrizI[i][j]);
		}
		printf("\n");
	}
	
	printf("---------------------------------------\n");
	printf("----------- Matriz Original Transposta ----------\n");
		
	for(j = 0; j < 2; j++) {
		for(i = 0; i < 3; i++) {
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("---------------------------------------\n");
	
	return 0;
}

#include <stdio.h>

int main(){
	
int matrzA[2][2] = {{1, 2}, {3, 4}};
int matrizB[2][2] = {{5, 6}, {7, 8}};
int matrizC[2][2];
	
	for(int linha = 0; linha < 2; linha++){
		for(int coluna = 0; coluna < 2; coluna++){
			matrizC[linha][coluna] = matrzA[linha][coluna] + matrizB[linha][coluna];
		}
	}
	
	for(int linha = 0; linha < 2; linha++){
		for(int coluna = 0; coluna < 2; coluna++){
			printf("%3d", matrizC[linha][coluna]);
		}
		printf("\n");
	}
	
	return 0;
}
#include <stdio.h> //Inclui as bibliotecas necessárias

int main(){
	//Declara as 3 matrizes necessárias
int matriza[2][2];
int matrizb[2][2];
int matrizc[2][2];
	
	printf("Digite os valores da Matriz A\n"); //Primeiro laço pede os valores da MATRIZ A
	for(int linha = 0; linha < 2; linha++){
		for(int coluna = 0; coluna < 2; coluna++){
			printf("Digite o numero da linha %d e coluna %d: ", linha, coluna);
			scanf("%d", &matriza[linha][coluna]);
		}
	}printf("\n");
	
	printf("Digite os valores da Matriz B\n"); //Segundo laço pede os valores da MATRIZ B
	for(int linha = 0; linha < 2; linha++){
		for(int coluna = 0; coluna < 2; coluna++){
			printf("Digite o numero da linha %d e coluna %d: ", linha, coluna);
			scanf("%d", &matrizb[linha][coluna]);
		}
	}
	
	//Terceiro laço faz a soma da duas matrizes
	for(int linha = 0; linha < 2; linha++){
		for(int coluna = 0; coluna < 2; coluna++){
			matrizc[linha][coluna] = matriza[linha][coluna] + matrizb[linha][coluna];
		}
	}printf("\n");
	
	//Quarto laço exibe a soma das matrizes
	printf("O resultado da soma das duas matrizes e: \n");
	for(int linha = 0; linha < 2; linha++){
		for(int coluna = 0; coluna < 2; coluna++){
			printf("%3d", matrizc[linha][coluna]);
		}
		printf("\n");
	}
	
	
	return 0; //Fim do código
}
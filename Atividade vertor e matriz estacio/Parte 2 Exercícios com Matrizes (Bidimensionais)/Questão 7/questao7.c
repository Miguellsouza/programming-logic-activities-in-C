#include <stdio.h> //Inclui as bibliotecas ecessárias

int main(){
int matriz[3][3] = {{1,0,0},{0,1,0},{0,0,1}}; //Declara a matriz
	
	//Imprime a matriz
	for(int linha = 0; linha < 3; linha++){
		for(int coluna = 0; coluna < 3; coluna++){
			printf("%3d", matriz[linha][coluna]);
		}
		printf("\n");
	}	
	
	return 0; //Fim do código
}
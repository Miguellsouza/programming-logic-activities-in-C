#include <stdio.h> 

int main(){
	
int matriz[2][3] = {{10, 20, 30},{15, 25, 35}};
int linha;
int coluna;
int novaquantidade;


	printf("Estoque atual:\n");

	for(linha = 0; linha < 2; linha++){
		for(coluna = 0; coluna < 3; coluna++){
			printf("%3d", matriz[linha][coluna]);
		}
		printf("\n");
	}
	
	
	printf("-----------------------------------------------------------");
	printf("\nQual o deposito em que deseja fazer a alteracao? (0 ou 1)\nDigite: ");
	scanf("%d", &linha);
	
	printf("-----------------------------------------------------------\n");
	printf("\nQual o produto em que deseja fazer a alteracao? (0, 1 ou 2)\nDigite: ");
	scanf("%d", &coluna);
	
	
	printf("-----------------------------------------------------------\n");
	printf("\nDigite a nova quantidade: ");
	scanf("%d", &novaquantidade);
	printf("-----------------------------------------------------------\n");
	

	matriz[linha][coluna] = novaquantidade;
	
	
	printf("ESTOQUE ATUALIZADO!!!\n");
	
	for(linha = 0; linha < 2; linha++){
		for(coluna = 0; coluna < 3; coluna++){
			printf("%3d", matriz[linha][coluna]);
		}
		printf("\n");
	}
	
	return 0; 
}
#include <stdio.h> //Inclui a biblioteca

int main(){
	//Declara a matriz e a variável
int matriz[3][3];
int somalinha;

	//Recebe os valores inseridos pelo usuário
	printf("Digite os valores correspondentes a cada celula da matriz\n");

	for(int linha = 0; linha < 3; linha++){
		for(int coluna = 0; coluna < 3; coluna++){
			printf("Elemento da linha %d e coluna %d: ", linha, coluna);
			scanf("%d", &matriz[linha][coluna]);
		}
	}
	
	printf("-----------------------------------------------\n"); //Separa a parte que recebe os resultados da parte que imprime
	
	//Soma as linhas
	for(int linha = 0; linha < 3; linha++){
		somalinha = 0;
		
		for(int coluna = 0; coluna < 3; coluna++){
			somalinha += matriz[linha][coluna];
		}
	
			printf("A soma da linha %d = %d\n", linha, somalinha); //Exibe o resultado da soma
	}
	
	
	return 0; //Fim do código
}
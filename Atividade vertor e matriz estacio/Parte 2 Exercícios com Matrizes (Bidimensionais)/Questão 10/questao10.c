#include <stdio.h> //Inclui as bibliotecas necessárias

int main (){
	//Declara as variáveis e a matriz
float matriz[4][4] = {{7, 15.88, 1, 12}, {9.05, 4, 14.27, 0}, {10.73, 5, 13, 2.84}, {8, 11.92, 6, 4.20}};
float num;
int comfirm = 0;
int posicaoL;
int posicaoC;
	
	//Recebe o número real digitado pelo usuário e verifica se ele está ou não na matriz, além de informar sua posição.
	printf("Digite qualquer numero real de 0 a 16 e eu irei procura-lo dentro da matriz\nDigite: ");
	scanf("%f", &num);
	for(int linha = 0; linha < 4; linha++){
		for(int coluna = 0; coluna < 4; coluna++){
			if(num == matriz[linha][coluna]){
				comfirm = 1;
				posicaoL = linha;
				posicaoC = coluna;
			}
		}
	}
	
	
	//Imprime no terminal o resultado da busca
	if(comfirm == 1){
		printf("Este numero esta dentro da matriz e se encontra na linha %d e coluna %d", posicaoL, posicaoC);
	} else{
		printf("Este numero nao se encontra dentro da matriz");
	}
	
	
	
	return 0; //Fim do código
}
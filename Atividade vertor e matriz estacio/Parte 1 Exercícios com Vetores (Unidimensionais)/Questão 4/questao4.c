#include <stdio.h> //Inclui a biblioteca necessária

int main(){ 
int vetor[6]; //Declara o vetor
	
	printf("Ao digitar 6 numeros eu direi se eles sao impares ou pares\n"); //Pede para digitar o numero
	
	//Recebe os valores digitados
	for(int i = 0; i < 6; i++){
		printf("Digite o %d numero: ", i + 1);
		scanf("%d", &vetor[i]);
	}
	
	//Verifica se o numero digitado em cada indice é ímpar ou par e exibe no terminal
	for(int i = 0; i < 6; i++){
		if(vetor[i] % 2 == 0){
			printf("O numero %d e par\n", vetor[i]);
		}else{
			printf("O numero %d e impar\n", vetor[i]);
		}
	}
	
	return 0; //Fim do código
}
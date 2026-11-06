	//Inclui as bibliotecas necessárias para o programa
#include <stdio.h>

int main(){
	//Declara o vetor
int vetor[5];

	//Laço de repetição que guarda os 5 números
	for(int i = 0; i < 5; i++){
		printf("Digite o %d numero inteiro: ", i + 1);
		scanf("%d", &vetor[i]);
		
	}
	
	//Imprime os números na forma inversa
printf("Os numeros digitados agora estao na ordem inversa: ");
printf("%d ,%d ,%d, %d, %d", vetor[4], vetor[3], vetor[2], vetor[1], vetor[0]);
	
	//Fim do código
	return 0;
}
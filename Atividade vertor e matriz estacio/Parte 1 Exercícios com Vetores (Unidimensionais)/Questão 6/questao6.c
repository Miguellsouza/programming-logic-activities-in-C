#include <stdio.h> //Inclui a biblioteca

int main(){
char vetor[15]; //Declara a variável de ate 15 caracteres

	//Recebe o nome que foi digitado
	printf("Digite seu nome(ATE 15 CARACTERES): ");
	scanf("%s", &vetor);
	
	printf("Ola, me sinto lisonjeado por recebe-lo aqui %s", vetor); //Exibe no terminal
	
	
	return 0; //Fim do código
}
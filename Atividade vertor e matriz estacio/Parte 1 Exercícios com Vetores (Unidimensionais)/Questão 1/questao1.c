	//Inclui as bibliotecas usadas no programa
#include <stdio.h>

int main(){
	//Declara as variáveis e o vetor
float notas[4];
int i;
float media;
	
	//Laço que recebe as quatro notas de um aluno
	for(i = 0; i < 4; i++){
		printf("Digite a nota %d: ", i + 1);
		scanf("%f", &notas[i]);
	}
	
	//Calcula a média das notas
	media = (notas[0] + notas[1] + notas[2] + notas[3]) / 4;
	
	//Estrutura de condição que diz se ele foi aprovado ou reprovado em relação a nota de corte
	if(media >= 6){
		printf("APROVADO");
	} else{
		printf("REPROVADO");
	}
	
	
	//Fim do programa
	return 0;
}
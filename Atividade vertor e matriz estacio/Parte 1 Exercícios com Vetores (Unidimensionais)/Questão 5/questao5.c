#include <stdio.h> //Inclui as bibliotecas necessárias

int main(){
	//O vetor e as variáveis são declarados
int vetor[8] = {100, 75, 120, 80, 60, 20, 99, 8};
int maxnum;
int minnum;

//Tanto a variável de maior número quanto a de menor número atribuem o primeiro valor do vetor para comparação
maxnum = vetor[0];
minnum = vetor[0];

	//O maior número é identificadp
	for(int i = 0; i < 8; i++){
		if(maxnum < vetor[i]){
			maxnum = vetor[i];
			
		}
		
	}
		//O menor número é identificado 
		for(int i = 0; i < 8; i++){
		if(minnum > vetor[i]){
		minnum = vetor[i];
		}
	}
	
		//Os dois são exibidos no terminal
	printf("O maior valor dentro desse vetor e %d e o menor valor e %d", maxnum, minnum);
	
	
	
	return 0; //Fim do código
}
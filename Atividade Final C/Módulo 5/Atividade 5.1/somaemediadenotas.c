#include <stdio.h>

int main(){

float notas[5];
float soma;
float media;
	
	for(int i = 0; i < 5; i++){
		printf("Digite a %d nota: ", i + 1);
		scanf("%f", &notas[i]);
	}
	
	for(int i = 0; i < 5; i++){
		soma += notas[i];
	}
	
	media = soma / 5;
	
	printf("A soma de todas as notas desse aluno e %.2f, e a sua media e de %.2f", soma, soma / 5);
	
		if(media >= 7){
			printf("\nALUNO APROVADO!");
		}else if(media >= 5){
			printf("\nALUNO DE RECUPERACAO!");
		}else{
			printf("\nREPROVADO!");
		}
	
	return 0;
}
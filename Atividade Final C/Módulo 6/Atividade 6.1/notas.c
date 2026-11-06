#include <stdio.h>

int main(){

float notas[10];
float soma = 0;
float media;
float menor;
float maior = 0;
	
	for(int i = 0; i < 10; i++){
		printf("Digite a nota %d: ", i + 1);
		scanf("%f", &notas[i]);
			if(maior < notas[i]){
				maior = notas[i];
		}
	}
	
	menor = notas[0];
	
	for(int i = 0; i < 10; i++){
		if(menor > notas[i]){
		menor = notas[i];
		}
	}
	
	for(int i = 0; i < 10; i++){
		soma += notas[i];
	}
	
	media = soma / 10;
	
	printf("%.2f\n", soma);
	printf("%.2f\n", media);
	printf("%.2f\n", maior);
	printf("%.2f\n", menor);
	
	return 0;
}
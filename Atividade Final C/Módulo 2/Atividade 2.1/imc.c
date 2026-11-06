#include <stdio.h>

int main(){
	float peso = 62.0;
	float altura = 1.83;
	
	printf("Para calcular seu IMC precisamos dos seguintes dados: Peso e Altura\n\n");
	printf("Seu peso e de %.1f\n", peso);
	printf("Sua altura e de %.2f\n", altura);
	printf("E seu IMC e de: %.2f", peso / (altura * altura));
	
	
	return 0;
}
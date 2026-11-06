#include <stdio.h>

int main(){
	
float c;
float f;
float k;

	printf("Ao digitar a temperatura em graus celsius eu te retornarei em Fahrenheit e Kelvin\n");
	printf("Digite a temperatura em Celsius: ");
	scanf("%f", &c);
	
	f = c * 9.0/5 + 32;
	k = c + 273.15;
	
	printf("============== Quadro de Temperaturas ==============\n\n");
	printf("A temperatura em Graus Celsius e de: %.2f \nA temperatura em Fahrenheit e de: %.2f \nA temperatura em Kelvin e de: %.2f", c, f, k);
	
	
	return 0;
}
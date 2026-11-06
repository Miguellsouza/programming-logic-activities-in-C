#include <stdio.h>

int main(){
	
float a, b, c;

	printf("DIGITE OS 3 LADOS DE UM TRIANGULO E EU DIREI SE ELE E VALIDO, SE FOR DIREI SUA CLASSIFICACAO\n\n");
	printf("Digite o primeiro lado do triangulo: ");
	scanf("%f", &a);
	printf("Digite o segundo lado do triangulo: ");
	scanf("%f", &b);
	printf("Digite o terceiro lado do triangulo: ");
	scanf("%f", &c);
	
	if(a < b + c && b < a + c && c < a + b){
		printf("E UM TRIANGULO VALIDO!\n");
			if(a == b == c){
				printf("E UM TRIANGULO EQUILATERO");
			}if(a == b && b != c || b != a && a == c || a == c && c != b){
				printf("E UM TRIANGULO ISOSCELES");
			}else{
				printf("E UM TRIANGULO ESCALENO");
			}
			
	}else{
		printf("NAO E UM TRIANGULO VALIDO!");
	}
	
	
	
	return 0;
}
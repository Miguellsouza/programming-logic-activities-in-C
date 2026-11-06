#include <stdio.h>

int main(){
	
	float a, b;
	int c;
	
	printf("==================== CALCULADORA ====================\n\n");
	printf("Digite o primeiro numero: ");
	scanf("%f", &a);
	printf("Digite o segundo numero: ");
	scanf("%f", &b);
	
	printf("\n\nEscolha o operador numerico\n\n");
	printf("PARA SOMAR / DIGITE 1\nPara SUBTRAIR / DIGITE 2\nPARA MULTIPLICAR / DIGITE 3\nPARA DIVIDIR / DIGITE 4 \n\nDIGITE: ");
	scanf("%d", &c);
		switch(c){
			
			case 1:
				printf("O resultado da soma de %.2f com %.2f e: %.2f", a, b, a + b);
				break;
			case 2:
				printf("O resultado da subtracao de %.2f com %.2f e: %.2f", a, b, a - b);
				break;
			case 3:
				printf("O resultado da multiplicacao de %.2f com %.2f e: %.2f", a, b, a * b);
				break;
			case 4:
				printf("O resultado da divisao de %.2f com %.2f e: %.2f", a, b, a / b);
				break;
		}
	
	
	
	return 0;
}
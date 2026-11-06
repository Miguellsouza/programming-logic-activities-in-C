#include <stdio.h>

int main(){

int a = 9;
int b;
int tentativas;
	
	
		
	do {
		printf("Adivinhe o numero inteiro secreto de 1 a 10\nDIGITE: ");
		scanf("%d", &b);
		
		tentativas++;
	
		if(a > b){
			printf("Esse numero e menor do que o numero secreto\n\n");
		}else if(a < b){
			printf("Esse numero e maior do que o numero secreto\n\n");
		}
	
	}while(a != b);
	
	printf("Correto\n");
	printf("Numero de tentativas = %d", tentativas);
	
	return 0;
}
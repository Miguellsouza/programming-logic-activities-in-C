#include <stdio.h>

int main(){

char nome[50];
int idade;
float salario;

	printf("Para conseguirmos preencher a sua ficha precisamos dos seguintes dados: ");
	printf("\n\nDigite seu nome: ");
	fgets(nome, 50, stdin);
	printf("\nDigite sua idade: ");
	scanf("%d", &idade);
	printf("\nDigite o seu salario em reais: R$");
	scanf("%f", &salario);
	printf("\n\n");
	printf("============== Ficha do Usuario ==============\n\n");
	printf("Nome: %sIdade: %d\nSalario: R$%.2f", nome, idade, salario);
	
	
	
	
	return 0;
}
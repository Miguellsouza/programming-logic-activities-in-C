	//Inclui as bibliotecas necessárias
#include <stdio.h>
	
int main(){
	//Declara o vetor e as veriáveis do programa
int NumInteiros[10] = {7, 2, 0, 9, 4, 1, 8, 3, 6, 5};
int i;
int num;
int procura;
int indice;
	
	//Guarda o valor digitado	
	printf("Digite qualquer numero inteiro e eu irei procura-lo na biblioteca: ");
	scanf("%d", &num);

	
	for(i = 0; i < 10; i++){
			if(NumInteiros[i] == num ){
				procura = 1; //Se o numero digitado estiver na biblioteca está variavel assume o valor 1
				indice = i; //Quando o valor é encontrado o laço para e a variável atribui esse valor
		}
	}
	
		//Exibe o resultado
	if(procura == 1){
		printf("O numero %d pertence a nossa biblioteca e esta na posicao %d", num, indice);
	} else{
		printf("O numero digitado nao pertence a nossa biblioteca");
	}
	
	//Fim do código
return 0;
}
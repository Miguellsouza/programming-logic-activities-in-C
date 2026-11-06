#include <stdio.h> //Inclui as bibliotecas necessárias

int main(){
	//Declara o vetor de a matriz usadas
float matriz[3][2];
float media[3];

	//Pega a nota dos alunos
	printf("Digite a nota dos alunos correspondentes\n");
	for(int aluno = 0; aluno < 3; aluno++){
		printf("Digite as duas notas do aluno %d\n", aluno + 1);
		for(int nota = 0; nota < 2; nota++){
			printf("nota %d: ", nota + 1);
			scanf("%f", &matriz[aluno][nota]);
		}
	}
	
	//Calcula a média de cada aluno
	for(int i = 0; i < 3; i++){
		media[i] = (matriz[i][0] + matriz[i][1]) / 2;
	}
	
	//Mostra o aluno, a média e se foi ou não reprovado
	for(int i = 0; i < 3; i++){
		printf("-----------------------\n");
		printf("Aluno %d\n media final: %.2f\n", i + 1, media[i]);
		
		if(media[i] >= 6) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
        printf("-----------------------\n");
	}
	
	
	
	return 0; //Fim do código
}
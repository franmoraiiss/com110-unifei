#include <stdio.h>
#include <stdlib.h>

#define quantaluno 10
#define quantquest 8 
#define mediaaprov 6 //média para aprovar

int main(){

	char gabarito[quantaluno], resposta[quantaluno];

	int matricula[quantaluno];

	float aprov_perc;
	float aprovados = 0;

	int pontos = 0;
	int numero;

	printf("Digite a resposta da \n");
	for(int i = 0; i < quantquest; i++) {
		printf("Questão %d: ", i + 1);
		scanf(" %c", &gabarito[i]);
	}

	for(int i = 0; i < quantaluno; i++){
		
		printf("\nDigite o número do aluno: ");
		scanf("%d", &numero);

		//checar se a matricula foi previamente registrada		
		for(int v = 0; v < quantaluno; v++){

			while(numero == matricula[v]) {
				printf("Número de matrícula previamente registrado! Digite outro número: ");
				v = 0;
				scanf("%d", &numero);
			}

		}

		matricula[i] = numero;

		for(int j = 0; j < quantquest; j++){
			printf("Resposta questão %d: ", j+1);
			scanf(" %c", &resposta[j]);
			if(resposta[j] == gabarito[j]){
				pontos++;
			}
		}

		printf("A nota do aluno %d foi %d pontos\n\n", numero, pontos);		

		if(pontos >= mediaaprov){
			aprovados = aprovados + 1;	
		}

		pontos = 0;

	}

	aprov_perc = (aprovados * 100) / quantaluno;
	printf("-- O percentual de aprovados é de: %.2f%%\n\n", aprov_perc);

	return 0;
}
#include <stdio.h>
#include <stdlib.h>

#define quantaluno 15
#define quantquest 10

int main(){

	char gabarito[quantaluno - 1], resposta[quantaluno - 1];

	float aprov_perc;
	float aprovados = 0;

	int pontos = 0;
	int numero;

	printf("Digite a resposta da \n");
	for(int i = 0; i < quantquest; i++) {
		printf("Questao %d: ", i + 1);
		scanf("%s", &gabarito[i]);
	}

	for(int i = 0; i < quantaluno; i++){
		
		printf("\nDigite o número do aluno: ");
		scanf("%d", &numero);

		for(int j = 0; j < quantquest; j++){
			printf("Respota questão %d: ", j+1);
			scanf("%s", &resposta[j]);
			if(resposta[j] == gabarito[j]){
				pontos++;
			}
		}

		printf("A nota do aluno %d foi %d pontos\n\n", numero, pontos);		

		if(pontos >= 6){
			aprovados = aprovados + 1;	
		}

		pontos = 0;

	}

	aprov_perc = (aprovados * 100) / quantaluno;
	printf("-- O percentual de aprovados é de: %.2f%%\n\n", aprov_perc);

	return 0;
}
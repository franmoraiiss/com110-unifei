#include <stdio.h>
#include <stdlib.h>

int main() {

	char gabarito[7], resposta[7];
	int aluno, matricula, ponto;

	char temp;

	printf("-- Correção de provas --\n");

	printf("Primeiro, digite o gabarito: \n");

	for(int i = 0; i < 8; i++) {
		printf("Questão %d: ", i + 1);
		scanf("%s", &temp);
	}



	return 0;
}
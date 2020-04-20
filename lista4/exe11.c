#include <stdio.h>

//Descrição: o programa recebe a data atual e de nascimento, e verifica a iddade da pessoa.
//Autor: Francisco Morais
//Data: 15/04/2020

int main() {

	int diaNas, mesNas, anoNas;
	int diaAtual, mesAtual, anoAtual;
	int idadeDia, idadeMes, idadeAno;

	printf("-- Calcular idade --\n");

	//RECEBER DATA DE NASCIMENTO
	do {
		printf("Informe o dia que você nasceu (1-31): ");
		scanf("%d", &diaNas);

		if(diaNas <= 0 || diaNas > 31) {
			printf("Digite um dia entre 1 e 31!\n");
		}

	} while(diaNas <= 0 || diaNas > 31);

	do {
		printf("Informe o mes que você nasceu (1-12): ");
		scanf("%d", &mesNas);

		if(mesNas <=0 || mesNas > 12) {
			printf("Digite um mes entre 1 e 12!\n");
		}

	} while(mesNas <= 0 || mesNas > 12);


	do {

		printf("Informe o ano que você nasceu: ");
		scanf("%d", &anoNas);

		if(anoNas < 0) {
			printf("Anos não assumem valor negativo!\n");
		}

	} while (anoNas < 0);


	//RECEBER DATA ATUAL
	do {
		printf("\nInforme o dia atual (1-31):: ");
		scanf("%d", &diaAtual);

		if(diaAtual <= 0 || diaAtual > 31) {
			printf("Digite um dia entre 1 e 31!\n");
		}

	} while(diaAtual <= 0 || diaAtual > 31);

	do {

		printf("Informe o mes atual (0-12): ");
		scanf("%d", &mesAtual);

		if(mesNas <=0 || mesNas > 12) {
			printf("Digite um mes entre 1 e 12!\n");
		}

	} while(mesAtual <= 0 || mesAtual > 12);

	do {
		printf("Informe o ano atual: ");
		scanf("%d", &anoAtual);

		if(anoAtual < 0) {
			printf("Anos não assumem valor negativo!\n");
		}

	} while(anoAtual < 0);

	idadeDia = diaAtual - diaNas;
	idadeMes = mesAtual - mesNas;
	idadeAno = anoAtual - anoNas;

	if(idadeDia < 0 || idadeMes < 0){ //caso um deles seja negativo, significa que a pessoa não fez aniversario ainda.
   		idadeAno = idadeAno - 1;
  	}

	if(anoAtual < anoNas) {
		printf("Seu ano de nascimento não pode ser maior que o ano atual!\n");
	} else {

		printf("\nVocê possui %d anos!\n", idadeAno);

	}

	return 0;
	
}
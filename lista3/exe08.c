#include <stdio.h>

//Descrição: o programa mostra o período do dia (manhã, tarde ou noite) de acordo com o horário
//Autor: Francisco Morais
//Data: 15/04/2020

int main(){

	double horario;

	do {
		printf("Digite o horário atual: ");
		scanf("%lf", &horario);

		if(horario < 0 || horario >= 24) {
			printf("Digite um horario entre 00h e 23h59 (0 e 23.99) !\n");
		}

	} while(horario < 0 || horario >= 24);

	if(horario >= 5 && horario < 12) {
		printf("Período do dia: MANHÃ\n");

	} else if(horario >= 12 && horario < 18) {
		printf("Periodo do dia: TARDE\n");

	} else if(horario >= 18 && horario < 24 || horario < 5) {
		printf("Periodo do dia: NOITE\n");
	}

	return 0;
}
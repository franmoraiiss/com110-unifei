#include <stdio.h>

//Descrição: o programa mostrará as opções até que o usuário escolha alguma delas
//Autor: Francisco Morais
//Data: 15/04/2020

int main() {

	int escolha = 0;

	printf("-- MENU --\n");
	printf("1 - Primeira opção\n");
	printf("2 - Segunda opção\n");
	printf("3 - Terceira opção\n");

	while(escolha != 1 && escolha != 2 && escolha != 3) {
		printf("Escolha uma das opções demonstradas: ");
		scanf("%d", &escolha);
	}

	printf("Você escolheu a opção %d!\n", escolha);

	return 0;
}
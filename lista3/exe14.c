#include <stdio.h> 

//Descrição: O programa recebe valores inteiro positivos, armazenando o maior e menor entre eles, até que 
//			 um número seja negativo seja digitado. Porém o menor número será o menor positivo digitado.
//Autor: Francisco Morais
//Data: 15/04/2020

int main() {

	int valor, maior, menor;

	printf("Use apenas valores inteiros!\n");
	printf("Digite um valor: ");
	scanf("%d", &valor);

	maior = valor;
	menor = valor;

	if(valor >= 0) {
		do {
			if(valor > maior) {
				maior = valor;
			}

			
			if(valor < menor) {
				menor = valor;
			}
			
			printf("Digite um valor: ");
			scanf("%d", &valor);

	} while(valor >= 0);	

		printf("MAIOR: %d\n", maior);	
		printf("MENOR: %d\n", menor);	//O MENOR VALOR MOSTRADO É O ANTERIOR AO NÚMERO NEGATIVO!

	}


	return 0;
}
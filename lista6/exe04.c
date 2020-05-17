#include <stdio.h>
#include <stdlib.h>

#define tamanhofras 10

int main(){

	char frase[tamanhofras];

	for(int i = 0; i < tamanhofras; i++){
		printf("Insira a %dª letra: ", i+1);
		scanf(" %c", &frase[i]);
	}

	printf("\nO contrário do que você digitou é:\n");

	for(int j = tamanhofras; j >= 0; j--) {
		printf(" %c ", frase[j]);
	}

	printf("\n");

	return 0;

}

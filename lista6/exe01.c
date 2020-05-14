#include <stdio.h>
#include <stdlib.h>

int main(){

	int vetor[7];	//8 vetores de [0 a 7]
	int temp;		//Valor temporário
	int i, j, k;	//Variáveis contadoras

	for(i = 0; i < 8; i++){

		printf("[%d] Digite um valor inteiro: ", i + 1);
		scanf("%d", &temp);

		for(j = 0; vetor[j] < temp && j < i; j++);

		for(k = i; k >= j + 1; k--) {
			vetor[k] = vetor[k - 1];
		}

		vetor[j] = temp;
	}

	printf("\n- Valores digitados em ordem crescente: \n");
	for(i = 0; i < 8; i++){
		printf("| %d ", vetor[i]);
	}
	
	printf("\n");

	return 0;
}
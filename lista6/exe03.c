#include <stdio.h>
#include <stdlib.h>

#define quantdado 20

int main(){

	int numdado[quantdado];
	int freq[6];

	for(int i = 0; i < quantdado; i++){

		printf("[DADO %d] Digite o número sorteado: ", i+1);		
		scanf("%d", &numdado[i]);

		while(numdado[i] != 1 && numdado[i] !=2 && numdado[i] !=3 && numdado[i] !=4 && numdado[i] !=5 && numdado[i] !=6){
			printf("\n-- Dados só assumem valores entre 1 e 6!\n");
			printf("[DADO %d] Digite o número sorteado novamente: ", i+1);		
			scanf("%d", &numdado[i]);
		}
	}

	printf("\n-- Valor de cada dado:\n");	
	for(int k = 0; k < quantdado; k++){
		printf("[DADO %d]: %d\n", k+1, numdado[k]);
	}

	//calcular frequencia
	for(int j = 0; j < quantdado; j++){

		for(int l = 0; l < 6; l++){
			if(numdado[j] == l+1){
				freq[l] += 1;
			}
		}

	}

	printf("\n-- Frequência:\n");
	for(int x = 0; x < 6; x++){
		printf("[NUMERO %d] %d vezes \n", x+1, freq[x]);		
	}

	return 0;
}
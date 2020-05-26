#include <stdio.h>

#define lin 4
#define col 7

int main() {

	float m[lin][col];
	float menor = 0;
	float minmax = 0;

	int linmenor;

	for(int i = 0; i < lin; i++){

		for(int j = 0; j < col; j++){
			printf("Digite o número da posição [%d][%d]: ", i+1, j+1);
			scanf("%f", &m[i][j]);

			if(i == 0 && j == 0){
				menor = m[i][j];
			}

			//Encontra o menor número e sua linha
			if(m[i][j] < menor) {
				menor = m[i][j];
				linmenor = i;
			}
		}
	}

	//Encontra o minmax
	for(int i = 0; i < col; i++){
		if(i == 0){
			minmax = m[linmenor][i];
		}
		if(m[linmenor][i] > minmax) {
			minmax = m[linmenor][i];
		}
	}
	printf("\n");

	printf("Matriz: \n");
	for(int i = 0; i < lin; i++){
		for(int j = 0; j < col; j++){
			printf("%.2f\t", m[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	printf("Menor número da matriz: %.2f\n", menor);
	printf("Linha do menor número: %d\n", linmenor+1);
	printf("\n- MINMAX: %.2f\n", minmax);

	return 0;
}

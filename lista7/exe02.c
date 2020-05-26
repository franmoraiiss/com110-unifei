#include <stdio.h>

#define lin 8
#define col 8

int main() {

	int m[lin][col];
	int simetrico = 0;
	int assimetrico = 0;

	for(int i = 0; i < lin; i++){

		for(int j = 0; j < col; j++){
			printf("Digite um número para a posição [%d][%d]: ", i, j);
			scanf("%d", &m[i][j]);
		}
	}
	printf("\n");

	for(int i = 0; i < lin; i++){
		for(int j = 0; j < col; j++){
			if(m[i][j] == m[j][i]){
				simetrico = 1;
			} else {
				assimetrico = 1;
			}
		}
	}

	//printar matriz
	printf("Matriz M:\n");
	for(int i = 0; i < lin; i++){
		for(int j = 0; j < col; j++){
			printf("%d\t", m[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	//printando a matriz transposta
	printf("Matriz M(transposta):\n");
	for(int i = 0; i < lin; i++){
		for(int j = 0; j < col; j++){
			printf("%d\t", m[j][i]);
		}
		printf("\n");
	}

	if(simetrico == 1 && assimetrico == 0) {
		printf("\nA matriz é simétrica!\n");
	} else {
		printf("\nA matriz é assimétrica!\n");
	}

	return 0;
}

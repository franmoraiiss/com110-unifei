#include <stdio.h>

#define lin 2
#define col 2

int main() {

	int m[lin][col];
	int r[lin][col];

	int maior;

	for(int i = 0; i < lin; i++){

		for(int j = 0; j < col; j++) {
			printf("Digite o número da posição (%d, %d): ", i, j);
			scanf("%d", &m[i][j]);

			if(i == 0 && j == 0) {
				maior = m[i][j];
			}

			if(m[i][j] > maior) {
				maior = m[i][j];
			}
		}

	}

	printf("\n");
	printf("O maior número da matriz é: %d", maior);
	printf("\n\n");

	printf("Matriz resultante:\n");
	for(int i = 0; i < lin; i++){

		for(int j = 0; j < col; j++) {
			r[i][j] = (maior * m[i][j]);
			printf("%d\t", r[i][j]);
		}

		printf("\n");

	}

	return 0;
}

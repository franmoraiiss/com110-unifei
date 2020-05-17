#include <stdio.h>
#include <stdlib.h>

#define size 25

int main(){

	char palavra[size], palavrafinal[size];

	int n;

	printf("- Criptografia de Cesar -\n");
	printf("Escreva a palavra a ser criptografada: ");
	scanf("%s", palavra);

	printf("Digite a quantidade n de letras a serem puladas: ");
	scanf("%d", &n);

	int i = 0;
	while(palavra[i] != '\0') {
		palavrafinal[i] = palavra[i] + n;

		//Caso passar do caracter 'z' (dec = 122), irá voltar ao caracter 'a' (dec = 97)
		if((palavra[i] + n) > 122) {
			palavrafinal[i] = palavrafinal[i] - 26;
		}

		//Caso o caracter seja anterior ao 'a' (dec < 97)
		if((palavra[i] + n) < 97){
			palavrafinal[i] = palavrafinal[i] + 26;
		}

		i++;
	}

	palavrafinal[i] = '\0';

	printf("\nFrase criptografada: %s\n\n", palavrafinal);

	return 0;
}


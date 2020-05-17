#include <stdio.h>
#include <stdlib.h>

#define size 50

int main(){

	char palavra[size], palavrafinal[size];

	int n;

	printf("- Criptografia de Cesar -\n");

	start:
	printf("Escreva a palavra a ser criptografada: ");
	scanf("%s", palavra);

	printf("Digite a quantidade n de letras a serem puladas: ");
	scanf("%d", &n);

	//Número negativos são usados para descriptografar a cifra de Cesar, por isso não é permitido
	//Não faz sentido digitar número >= 26, pois digitar 26 é o mesmo que digitar 0, a frase não muda.
	//Por exemplo: 'a' + 26 = 'a', pois ao passar da letra 'z', retornamos a letra 'a'.

	while(n < 0 || n >= 26) {
		printf("=> Valor inválido. Digite um números no intervalo [0, 25]: ");
		scanf("%d", &n);
	}

	int i = 0;
	while(palavra[i] != '\0') {
		palavrafinal[i] = palavra[i] + n;

		//Ao digitar ponto, virgula, chaves, ou qualquer caracter de decimal < 97 e decimal > 122, o programa não aceita
		if((palavra[i]) < 97 || (palavra[i]) > 122) {
			printf("\n=> Palavra possui caracter inválido! Digite apenas letras.\n");
			goto start;
		}

		//Caso passar do caracter 'z' (dec = 122), irá voltar ao caracter 'a' (dec = 97)
		if((palavra[i] + n) > 122) {
			palavrafinal[i] = palavrafinal[i] - 26;
		}

		i++;
	}

	palavrafinal[i] = '\0';

	printf("\nFrase criptografada: %s\n\n", palavrafinal);

	return 0;
}


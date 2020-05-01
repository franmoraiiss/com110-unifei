#include <stdio.h>

void main(){

	int idade;

	printf("Informe sua idade: ");
	scanf("%d", &idade);

	if(idade < 16)
	{
		printf("Classe eleitoral: NÃO ELEITOR\n");
	} else if (idade >= 16 && idade < 18 || idade > 65)
	{
		printf("Classe eleitoral: ELEITOR FACULTATIVO\n");

	} else if(idade >= 18 && idade <= 65)
	{
		printf("Classe eleitoral: ELEITOR OBRIGATÓRIO\n");
	} 

	return;
}
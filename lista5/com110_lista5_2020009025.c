#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {

	int	maxcolunas = 56;	//57 colunas (0-56)
	int maxlinhas = 14;		//15 linhas (0-14)
	int linha, coluna;		//colunas e linhas atuais

	//MENU
	menu: 
	for (linha = 0; linha <= maxlinhas; linha++) {
        
        for (coluna = 0; coluna <= maxcolunas; coluna++) {

            if (linha == 0 || linha == 1 && coluna < 20 || linha == 1 && coluna > 20 && coluna < 56 ||
             linha == 2 || linha == maxlinhas || linha == maxlinhas - 1 || coluna == 0 || coluna == 1||
             coluna == maxcolunas || coluna == maxcolunas - 1 && linha != 1 && coluna != 20) {
                printf("#");

            } else if(linha == 1 && coluna == 20) {
               	printf(" MENU DE OPCOES ");
               	coluna = maxcolunas - 21;
            } else if(linha == 4 && coluna == 3) {
            	printf("Escolha uma forma geométrica:");
            	coluna = maxcolunas - 25;
            } else if(linha == 6 && coluna == 4){
            	printf("1. Quadrado");
            	coluna = maxcolunas - 42;
            } else if(linha == 7 && coluna == 4) {
            	printf("2. Retângulo");
            	coluna = maxcolunas - 41;
            } else if(linha == 8 && coluna == 4) {
            	printf("3. Triângulo Equilátero");
            	coluna = maxcolunas - 30;
            } else if(linha == 9 && coluna == 4) {
            	printf("4. Triângulo Retângulo (catetos iguais)");
            	coluna = maxcolunas - 14;
            } else if(linha == 10 && coluna == 4) {
            	printf("5. Losango");
            	coluna = maxcolunas - 43;
            } else if(linha == 11 && coluna == 4) {
            	printf("6. Sair");
            	coluna = maxcolunas - 46;
            } else {
                printf(" ");
            }

        }

        printf("\n");
    }

    int opcao;
    int base, altura, diagonal;
    float base_tri, diagonal_los, area;

    //ESCOLHA
    printf("\n Opção: ");
    scanf("%d", &opcao);

    int linha_atual = 0;
	int coluna_atual = 0;

	switch(opcao){
		case (1):

			printf("\n\n\n============================================================");
			printf("\nQUADRADO");
			printf("\n============================================================");

			printf("\nDigite a base do quadrado: ");
			scanf("%d", &base);

			if(base <= 0){
				printf("Valor inválido!\n");
				goto menu;
			}

				printf("\nÁREA: %d", base*base);
				printf("\nPERIMETRO: %d\n\n", 4*base);

				for(coluna_atual = 0; coluna_atual < base + 2; coluna_atual++){
					printf("_ ");
			 	}

				printf("\n");

				for(linha_atual = 0; linha_atual < base; linha_atual++) {
					for(coluna_atual = 0; coluna_atual <= base + 1; coluna_atual++){
						
						if(coluna_atual == 0){
							printf("| ");
						} else if(coluna_atual == base + 1) {
							printf("| ");
						} else {
							printf("@ ");
						}
					}

					printf("\n");
				}

				if(linha_atual == base) {
					for(coluna_atual = 0; coluna_atual < base + 2; coluna_atual++){
						printf("_ ");
					}
				}

			printf("\n\n============================================================");


			coluna_atual = 0; //Resetar variaveis
			linha_atual = 0;
			printf("\n\n\n");

			goto menu;

		case (2):

			printf("\n\n\n============================================================");
			printf("\n RETANGULO");
			printf("\n============================================================");

			printf("\nDigite a base do retângulo: ");
			scanf("%d", &base);

			if(base <= 0){
				printf("Valor inválido!\n");
				goto menu;
			}

			printf("\nDigite a altura do retângulo: ");
			scanf("%d", &altura);

			if(altura <= 0){
				printf("Valor inválido!\n");
				goto menu;
			}

			printf("\nÁREA: %d", base*altura);
			printf("\nPERIMETRO: %d\n\n", (2*base + 2*altura));

			for(coluna_atual = 0; coluna_atual < base + 2; coluna_atual++){
				printf("_ ");
		 	}

			printf("\n");

			for(linha_atual = 0; linha_atual < altura; linha_atual++) {
				for(coluna_atual = 0; coluna_atual <= base + 1; coluna_atual++){
						
					if(coluna_atual == 0){
						printf("| ");
					} else if(coluna_atual == base + 1) {
						printf("| ");
					} else {
						printf("@ ");
					}
				}

				printf("\n");
			}

			if(linha_atual == altura) {
				for(coluna_atual = 0; coluna_atual < base + 2; coluna_atual++){
					printf("_ ");
				}
			}

			printf("\n\n============================================================");


			coluna_atual = 0; //Resetar variaveis
			linha_atual = 0;
			printf("\n\n\n");

			goto menu;

		case (3):

			printf("\n\n\n============================================================");
			printf("\n TRIANGULO EQUILATERO");
   			printf("\n============================================================");
			printf("\nDigite o lado do triângulo equilátero: ");
			scanf("%d", &base);

			if(base <= 0){
				printf("Valor inválido!\n");
				goto menu;
			}

			base_tri = base;
			area = (base_tri*base_tri)/2;

			printf("\nÁREA: %.2f", area);
			printf("\nPERIMETRO: %d\n\n", 3*base);

			printf("\n");

			for(coluna_atual = 0; coluna_atual <= base - linha_atual; coluna_atual++) {

      				printf(" ");

         			if(coluna_atual == base - linha_atual && linha_atual == 0)
         			{
         				printf("  .");
         			} 
         			
      		}

      		printf("\n");

			for(linha_atual = 0; linha_atual <= base; linha_atual++) {

      			for(coluna_atual = 0; coluna_atual <= base - linha_atual; coluna_atual++) {

      				printf(" ");

         			if(coluna_atual == base - linha_atual - 1 && linha_atual == 0)
         			{
         				printf("  / \\");
         			} 
         			
      			}

      			for(coluna_atual = 0; coluna_atual < linha_atual; coluna_atual++) {

      				if(coluna_atual == 0 && linha_atual > 0){
      					printf(" /");
      				}

         			if(coluna_atual == linha_atual - 1)
         			{
         				printf(" @ \\");
         			} else {
         				printf(" @");
         			}
      			}

      			printf("\n");
      			
   			}

   			for(coluna_atual = 0; coluna_atual < base + 2; coluna_atual++){

   				if(coluna_atual == 0){
   					printf(" /");
   				} if(coluna_atual == base + 1){
   					printf(" \\");
   				} else {
   					printf(" _");
   				}
   			}

   			printf("\n\n============================================================");

			coluna_atual = 0; //Resetar variaveis
			linha_atual = 0;
			printf("\n\n\n");
			goto menu;

		case (4):

			printf("\n\n\n============================================================");
			printf("\n TRIANGULO RETANGULO");
			printf("\n============================================================");
			printf("\n\nDigite o lado do triângulo equilátero (catetos iguais): ");
			scanf("%d", &base);

			if(base <= 0){
				printf("Valor inválido!\n");
				goto menu;
			}

			base_tri = base;

			float hipotenusa;
			hipotenusa = sqrt(2*(base*base));

			area = (base_tri*base_tri)/2;

			printf("\nÁREA: %.2f", area);
			printf("\nPERIMETRO: %.2f\n\n", base_tri + base_tri + hipotenusa);

			coluna_atual = 0;
			linha_atual = 0;

			printf(".\n");
			printf("|\\");

			for (linha_atual = 0; linha_atual <= base; linha_atual++) {
				for (coluna_atual = 0; coluna_atual < linha_atual; coluna_atual++) {

					if(coluna_atual == 0) {
						printf("|");
					}

					printf("@");

					if(coluna_atual == linha_atual - 1){
						printf("\\");
					}

       			}

        		printf("\n");
   			}

   			for(coluna_atual = 0; coluna_atual <= base; coluna_atual++){

   				if(coluna_atual == 0){
   					printf("|");
   				} if(coluna_atual == base){
   					printf("_\\");
   				} else {
   					printf("_");
   				}
   			}

   			printf("\n\n============================================================");

			coluna_atual = 0; //Resetar variaveis
			linha_atual = 0;
			printf("\n\n\n");
			goto menu;			

		case (5):

			printf("\n\n\n============================================================");
			printf("\n LOSANGO");
			printf("\n============================================================");
			printf("\n\nDigite a diagonal do losango: ");
			scanf("%d", &diagonal);

			if(diagonal <= 1){
				printf("Valor inválido!\n");
				goto menu;
			}

			diagonal_los = diagonal;
			area = (diagonal_los*diagonal_los)/2;

			float lado_los;
			lado_los = sqrt(2*((diagonal_los/2)*(diagonal_los/2)));

			printf("\nÁREA: %.2f", area);
			printf("\nPERIMETRO: %.2f\n\n", 4*lado_los);

			printf("\n");

			for(coluna_atual = 0; coluna_atual <= diagonal - linha_atual; coluna_atual++) {

      				printf(" ");

         			if(coluna_atual == diagonal - linha_atual && linha_atual == 0)
         			{
         				printf("  .");
         			} 
         			
      		}

      		printf("\n");

			for(linha_atual = 0; linha_atual <= diagonal; linha_atual++) {

      			for(coluna_atual = 0; coluna_atual <= diagonal - linha_atual; coluna_atual++) {

      				printf(" ");

         			if(coluna_atual == diagonal - linha_atual - 1 && linha_atual == 0)
         			{
         				printf("  / \\");
         			} 
         			
      			}

      			for(coluna_atual = 0; coluna_atual < linha_atual; coluna_atual++) {

      				if(coluna_atual == 0 && linha_atual > 0){
      					printf(" /");
      				}

         			if(coluna_atual == linha_atual - 1)
         			{
         				printf(" @ \\");
         			} else {
         				printf(" @");
         			}
      			}

      			printf("\n");
      			
   			}

   			for(linha_atual = diagonal - 1; linha_atual >= 0; linha_atual--) {

      			for(coluna_atual = 0; coluna_atual <= diagonal - linha_atual; coluna_atual++) {

      				printf(" ");

         			if(coluna_atual == diagonal - linha_atual - 1 && linha_atual == 0)
         			{
         				printf("  \\ /");
         			} 
         			
      			}

      			for(coluna_atual = 0; coluna_atual < linha_atual; coluna_atual++) {

      				if(coluna_atual == 0 && linha_atual > 0){
      					printf(" \\");
      				}

         			if(coluna_atual == linha_atual - 1)
         			{
         				printf(" @ /");
         			} else {
         				printf(" @");
         			}
      			}

      			printf("\n");
      			
   			}


			coluna_atual = 0; //Resetar variaveis
			linha_atual = 0;

   			for(coluna_atual = 0; coluna_atual <= diagonal - linha_atual; coluna_atual++) {

      				printf(" ");

         			if(coluna_atual == diagonal - linha_atual && linha_atual == 0)
         			{
         				printf("  .");
         			} 
         			
      		}

      		printf("\n");
	
      		printf("\n\n============================================================");

			printf("\n\n\n");
			goto menu;		


		case (6):
			break;

		default:
			printf("\n-- Digite uma opção válida! --\n\n");
			goto menu;
	}


	return 0;
}
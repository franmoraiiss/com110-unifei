#include <stdio.h>

#define lin 5
#define col 7

int main(){

    int matriz[lin][col];

    int vmenor[lin]; //menor da linha
    int vmaior[col]; //maior da coluna

    int sela_exist;

    //receber cada linha
    for (int i = 0; i < lin; i++) {
        //receber cada coluna
        for (int j = 0; j < col; j++) {
            printf("Matriz [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n");

    printf("Matriz: \n");
    for (int i = 0; i < lin; i++) {
        
        for (int j = 0; j < col; j++) {
            printf(" %d", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //encontrar o menor número de cada linha
    for (int i = 0; i < lin; i++) {   
        //o primeiro numero de cada linha assume o menor antes de testar com cada sequencia
        vmenor[i] = matriz[i][0]; 

        for (int j = 0; j < col; j++) {
            if(matriz[i][j] < vmenor[i]) {
                vmenor[i] = matriz[i][j];
            }
        }   
    }

    //encontrando o maior número de cada coluna
    for (int i = 0; i < col; i++) {   
        //o primeiro numero de cada coluna assume o maior antes de testar com cada sequencia
        vmaior[i] = matriz[0][i]; 

        for (int j = 0; j < lin; j++) {
            if(matriz[j][i] > vmaior[i]) {
                vmaior[i] = matriz[j][i];
            }
        }   
    }
    
    //comparar cada elemento, se menor[x] = maior[y] para afirmar 
    //que é o menor da linha e maior da coluna ao mesmo tempo
    for(int i = 0; i < lin; i++) {

        for(int j = 0; j < col; j++) {
            if(vmaior[j] == vmenor[i]) {
                printf("-> Sela: %d (Matriz[%d][%d])\n", vmenor[i], i+1, j+1);
                sela_exist = 1;
            } 
        }
    }

    if(sela_exist != 1) {
        printf("-> Sela inexistente!\n");
    }

    return 0;
}
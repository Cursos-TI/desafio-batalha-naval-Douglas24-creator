#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main (){

    //posicionamento dos navios
    char linhas[] = {'A', 'B','C','D','E','F','G','H','I','J'};
    int matriz [LINHAS][COLUNAS];
    int i, j;

    //posicionamento em água
    for (i= 0; i < LINHAS; i++){
        for (j = 0; j < COLUNAS; j++){
            matriz[i][j] = 0;
        }

    }

    //navio na horizontal
    matriz[1][0] = 3;
    matriz[1][1] = 3;
    matriz[1][2] = 3;

    //navio na vertical
    matriz[0][4] = 3;
    matriz[1][4] = 3;
    matriz[2][4] = 3;

    //navio diagonal em três
    matriz[7][5] = 3;
    matriz[6][6] = 3;
    matriz[5][7] = 3;


    //navio diagonal completa
    for (i = 0; i < LINHAS; i++){
        j = 9 - i;
        matriz[i][j] = 3;
    }

    printf("  BATALHA NAVAL\n\n");

    //cabeçalho com letras 
    printf("  ");
    for(j = 0; j < LINHAS; j++){
        printf("%2c", linhas[j]);
    }
    printf("\n");

    //impressão com numeração
    for(i = 0; i < LINHAS; i++){
       printf("%2d", i + 1);
       for(j = 0; j < COLUNAS; j++){
           printf(" %d", matriz[i][j]);
       }
       printf("\n");
    }

    return 0;
}
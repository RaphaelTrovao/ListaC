#include <stdio.h>
#include <time.h>

/*Questão 02:
Implementar uma função que, dadas uma matriz M de inteiros (com lin linhas e col colunas) e duas colunas c1 e c2, inverta
a ordem (por linha) dos elementos compreendidos entre estas colunas.*/
int prm(int x, int y, int matriz[x][y]);
void exibirMatriz(int x, int y, int matriz[x][y]);
int invrMatriz(int x, int y, int matriz[x][y]);

void main(){
    int x = 7;
    int y = 9;
    int matriz[x][y];
    prm(x, y, matriz);
    exibirMatriz(x, y, matriz);
    invrMatriz(x,y, matriz);
    printf("\n\n");
     exibirMatriz(x, y, matriz);
}

int prm(int x, int y, int matriz[x][y]){
    for(int i = 0; i < x; i++){
        for(int j = 0; j <  y; j++){
            matriz[i][j] = rand() % 10;
            
        }
    }
}

void exibirMatriz(int x, int y, int matriz[x][y]){
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int invrMatriz(int x, int y, int matriz[x][y]){
    int c1 = 1;
    int c2 = 4;

    /*if(c1 < x || c1 > y || c2 < x || c2 > y ){
        printf("a");
        return 0;
    } else {*/
        for(int i = 0; i < x; i++){
            int s = c2;
            for(int j = c1; j <= c2; j++){
                if(j < s){
                int h1 = matriz[i][s];
                matriz[i][s] = matriz[i][j];
                matriz[i][j] = h1;
                s--;
                }
            }
        }
        return matriz;
    }
//}
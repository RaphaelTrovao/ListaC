#include <stdio.h>
#include <time.h>
#include <string.h>

/*QUESTÃO 01:
Faça uma função que, dada uma matriz Mm×n de
reais, gere a matriz Mt

, sua transposta.*/

/*int transpor(int matriz[2][3]){
    int mt[3][2];
    for(int i = 0; i<3; i++){
        for(int j = 0; j<2; j++){
            mt[i][j] = matriz[j][i];
        }
    }
    exibir_matriz(3, 2, mt);
}
void exibir_matriz(int linha, int coluna, int matriz[linha][coluna]){
    int i, j;
    
    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++) {
           
            printf("%4d ", matriz[i][j]); 
        }
        printf("\n");
    }
   
}

void main(){
    int matriz[2][3] = {{1,2,4},{2,3,5}};
    exibir_matriz(2, 3, matriz);
    transpor(matriz);
}*/

/*void preencherMatrizAleatoria (int l, int c, int mat[l][c], int limite)
{
	//declaração de variáveis
	int i, j;
	
	srand (time(NULL));
	
	for (i=0;i<l;i++)
	{
		for (j=0;j<c;j++)
		{
			mat[i][j] = rand()%limite;
		}
	}	
}
void exibirMatriz (int l, int c, int mat[l][c])
{
	//declaração de variáveis
	int i, j;
	
	for (i=0;i<l;i++)
	{
		for (j=0;j<c;j++)
		{
			printf ("%3d ", mat[i][j]);
		}
		
		printf ("\n");
	}
}
int invermat(int x, int y, int mat[x][y]){
    int c1, c2;
    scanf("%d", &c1);
    scanf("%d", &c2);
    if(c1 > x || c1 < x || c2 > x || c2 < x){
        printf("t");
        return 0;
    } else {
        for(int i = 0; i < y; i++){
            int s = c2;
            for(int j = c1; j <= c2; j++){
                if(j < s){
                int h1 = mat[i][j];
                mat[i][j] = mat[i][s];
                mat[i][s] = h1;
                s--;
                }
            }
        }
        exibirMatriz (x, y,mat);
        return 1;
    }
}

void main(){
    int a, b, c;
    a = 7;
    b = 9;
    c = 10;
    int mat[a][b];
    preencherMatrizAleatoria (a, b,mat, c);
    exibirMatriz (a, b,mat);
    invermat(a, b, mat);
}*/
/*Questão 02:
Suponha a existência de um vetor de tamanho
TAM, cada posição armazenando o nome da
pessoa e a sua data de aniversário
(representada por um struct do tipo TData,
contendo os campos dia e mes). Pede-se o
desenvolvimento das seguintes funções:
 Determinar a quantidade de pessoas que
fazem aniversário no mês M;
 Exibir os nomes de todas pessoas que fazem
aniversário entre as datas d1 e d2, ambas
do tipo TData.*/
typedef struct{
    char nome[30];
    int dia;
    int mes;
} TData;

int aniano(TData an[]);
void main(){
    TData anivs[4];
    anivs[0].dia = 25;
    anivs[0].mes = 10;
    strcpy (anivs[0].nome, "RAPHAEL");

    anivs[1].dia = 28;
    anivs[1].mes = 7;
    strcpy (anivs[1].nome, "MALU");

    anivs[2].dia = 1;
    anivs[2].mes = 3;
    strcpy (anivs[2].nome, "TAYLOR");
    

    anivs[3].dia = 15;
    anivs[3].mes = 10;
    strcpy (anivs[3].nome, "RAPHAEL");

    printf("%d", aniano(anivs));
}

int aniano(TData an[]){
    int m, aniM = 0;
    scanf("%d", &m);
    for(int i = 0; i < 4; i++){
        if(an[i].mes == m){
            aniM++;
        }
    }
    return aniM;
}
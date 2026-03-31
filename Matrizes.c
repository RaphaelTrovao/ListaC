#include <stdio.h>
#include <time.h>

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

void preencherMatrizAleatoria (int l, int c, int mat[l][c], int limite)
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
}
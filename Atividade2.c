#include <stdio.h>

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


void ajustarmat(int mt[5][6], int col){
    int mh[5] = {0};
    
     for(int k = 0; k < 5; k++){
                    mh[k] = mt[k][col];
                }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 6; j++){
              if(j >= col){
                int h1 = j-1;
                
                mt[i][h1] = mt[i][j];
            }
        }
    }
    for(int m = 0; m < 5; m++){
        mt[m][5] = mh[m];
    }
    exibirMatriz(5, 6, mt);
}


void main(){
    int matriz[5][6] = { {1, 2, 3, 4, 5, 6}, {7, 8, 9, 1, 2, 7}, {5, 2, 8, 6, 4, 8}, {4, 5 ,8 ,6 ,1, 7}, {2,6,3,7,1,2} };
   exibirMatriz(5,6, matriz);
    int coluna = 1;
    ajustarmat(matriz, coluna);
}
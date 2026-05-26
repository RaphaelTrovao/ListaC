#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int gerarMapa(int mp, int a, int b);

void main(){
    int clickx = 3, clicky = 3;
    int mapsize = 7;
    gerarMapa(mapsize, clickx, clicky);
}

int gerarMapa(int mp, int a, int b){
    int mapa[mp][mp];
    int range = 1;
    srand(time(NULL));
    for(int i = 0; i < mp; i++){
        for(int j = 0; j < mp; j++){
            mapa[i][j] = 0;
            int random = rand()%100;
            //printf("%d ", random);
            if(random < 35){
                if(i < a-range || i > a+range || j < b-range || j > b+range){
                mapa[i][j] = 9;
                }
            }
        }
    }
    
    for(int i = 0; i < mp; i++){
        for(int j = 0; j < mp; j++){
            int bomba = 0;
            if(mapa[i][j] == 0){
                for(int x = i-1; x <= i+1; x++){
                    for(int y = j-1; y <= j+1; y++){
                        if(x < mp && y < mp && x > -1 && y > -1 && mapa[x][y] == 9){
                            bomba++;
                        }
                    }
                    
                }
                mapa[i][j] = bomba;
            }
           
        }
        
    }
    for(int e = 0; e < mp; e++){
        for(int f = 0; f<mp; f++){
            printf("%d ", mapa[e][f]);
        }
        printf("\n");
    }
}
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int **mapaInit(int mpz, int a);
int gerarMapa(int mpsz, int mp[mpsz][mpsz], int a, int b);
int mapDig(int x, int  y);
int exibirMat(int mpsz, int **mp);

void main(){
    int clickx = 3, clicky = 3;
    int mapsize = 7;
    int **mapa;
    mapa = mapaInit(mapsize, 0);
     exibirMat(mapsize, mapa);
    //memset(mapa, 0, sizeof(mapa));
    scanf("%d ", &clickx);
    scanf("%d ", &clicky);
    //gerarMapa(mapsize, mapa, clickx, clicky);
    int x, y, win = 0;
    /*while(win == 0){
        scanf("%d", &x);
        scanf("%d", &y);
        mapDig(x, y);
    }*/
}

int exibirMat(int mpsz, int **mp){
    for(int e = 0; e < mpsz; e++){
        for(int f = 0; f<mpsz; f++){
            printf("%d ", mp[e][f]);
        }
        printf("\n");
    }
   
}

int **mapaInit(int mpz, int a){
    int **mp;
    mp = malloc(sizeof(int *) * mpz);

    for(int i = 0; i < mpz; i++){
        mp[i] = malloc(sizeof(int ) * mpz);
    }
    for(int i = 0; i < mpz; i++){
        for(int j = 0; j < mpz; j++){
            mp[i][j] = a+1;
            //printf("%d ", mp[i][j]);
        }
        
    }
    return mp;
}

int gerarMapa(int mpsz, int mp[mpsz][mpsz],int a, int b){
    printf("Gerando Mapa 0%%\n");
    int range = 1;
    srand(time(NULL));
    for(int i = 0; i < mpsz; i++){
        for(int j = 0; j < mpsz; j++){
            int random = rand()%100;
            //printf("%d ", random);
            if(random < 35){
                if(i < a-range || i > a+range || j < b-range || j > b+range){
                mp[i][j] = 9;
                }
            }
        }
    }
    printf("Gerando Mapa 50%%\n");
    for(int i = 0; i < mpsz; i++){
        for(int j = 0; j < mpsz; j++){
            int bomba = 0;
            if(mp[i][j] == 0){
                for(int x = i-1; x <= i+1; x++){
                    for(int y = j-1; y <= j+1; y++){
                        if(x < mpsz && y < mpsz && x > -1 && y > -1 && mp[x][y] == 9){
                            bomba++;
                        }
                    }
                    
                }
                mp[i][j] = bomba*10;
            }
           
        }
        
    }
    printf("Gerando Mapa 100%%\n");
    //exibirMat(mpsz, mp);
}

int mapDig(int x, int  y){

}
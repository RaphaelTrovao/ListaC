#include <stdio.h>
#include <string.h>


void substituir(char string1[], char string2[]){
    int pi = 6;
    int pf = 7;
    char hold[20];
    int k = 0, a = 0;;
    int tam = strlen(string2);
    
    //loop para salvar o final da string na string de hold
    for(int j = pf+1; string1[j] != '\0'; j++){
            hold[k] = string1[j];
            k++;
       }
       
        int h1 = 0;
         pf = pi + tam;
         
    //loop para preencher a string primária com a string secundária e depois inserir o final da string primária de volta
     for(int l = pi; string1[l] != '\0'; l++){
         
         if(l < pf){
                string1[l] = string2[a];
                a++;
         } else {
              if(l-pi < k){
                string1[l] = hold[h1];
                h1++;
                }   
            }
        }
}

void main(){
    char str[] = {"e ai, vc vem?    "};
    char s1[] = {"voce"};
    substituir(str, s1);
    printf("%s", str);
}
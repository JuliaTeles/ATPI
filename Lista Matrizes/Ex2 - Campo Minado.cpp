#include <iostream>
#include <cstdio>
#include <locale>
using namespace std;

int  main(){
    setlocale(LC_ALL, "Portuguese");
    printf("--- CAMPO MINADO ---\n");

    int n,bomb;
    printf("\n1) Informe o tamanho do campo: ");
    scanf("%d", &n);

    printf("2) Informe o número de bombas: ");
    scanf("%d", &bomb);

    char campo[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            campo[i][j] = '0';
        }
    }

    int aux1, aux2;
    for(int i=0; i<bomb; i++){
        aux1 = rand()%n;
        aux2 = rand()%n;
        if (aux1 != n-1 && aux1 != 0 && aux2 != n-1 && aux2 != 0 ){
            campo[aux1][aux2] = 'B';

            campo[aux1-1][aux2] = campo[aux1-1][aux2] + 1;
            campo[aux1-1][aux2-1] = campo[aux1-1][aux2-1] + 1;
            campo[aux1][aux2-1] = campo[aux1][aux2-1] + 1;

            //diagonais
            campo[aux1+1][aux2-1] = campo[aux1+1][aux2-1] + 1;
            campo[aux1-1][aux2+1] = campo[aux1-1][aux2+1] + 1;

            campo[aux1+1][aux2] = campo[aux1+1][aux2] + 1;
            campo[aux1+1][aux2+1] = campo[aux1+1][aux2+1] + 1;
            campo[aux1][aux2+1] = campo[aux1][aux2+1] + 1;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(campo[i][j] == '0'){
                campo[i][j] = '.';
            }
        }
    }

    printf(" \n--------------------\n\n");
    //------ desenhar a matriz
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j == 0){ printf("|"); }
            printf(" %c ", campo[i][j]);
            if(j == n-1){ printf("|\n"); }
        }
    }
}

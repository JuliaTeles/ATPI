#include <iostream>
#include <cstdio>
#include <locale>
using namespace std;

int  main(){
    setlocale(LC_ALL, "Portuguese");
    int n;
    printf("Informe o tamanho da matriz: ");
    scanf("%d", &n);

    int matriz[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("Informe a posição [%d ,%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf(" \n------------- \n\n");
    //------ desenhar a matriz
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j == 0){ printf("|"); }
            printf(" %d ", matriz[i][j]);
            if(j == n-1){ printf("|\n"); }
        }
    }
    printf("\n------------- \n");

    bool flag = true;
    for(int i = 0; i<n-1; i++){
        for(int j=i+1; j<n; j++ ){
            if(j%2 != 0){
                if(matriz[i][j]<0){
                    flag = false;
                }
            }
        }
    }

    int soma = 0, aux = 0;
    if(flag){
        for(int i = 0; i<n; i++){
            if(matriz[i][n-1-i]%2 == 0){
                soma = soma + matriz[i][n-1-i];
                aux++;
            }
        }
        soma = soma/aux;
        printf("\nOs elementos eram todos positivos!");
    }
    else{
        for(int i = 0; i<n; i++){
            soma = soma + matriz[i][n];
        }
        printf("\nHavia pelo menos um elemento negativo!");
    }

    printf("\n---> A soma é: %d", soma);


}

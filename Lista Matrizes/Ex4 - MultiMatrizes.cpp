#include <iostream>
#include <cstdio>
#include <locale>
using namespace std;

int  main(){
    setlocale(LC_ALL, "Portuguese");
    printf("--- Multiplicação de Matrizes ---\n\n");

    int m,n;
    printf(" 1º Matriz \n");
    printf("    Informe a quant. de linhas: ");
    scanf("%d", &m);
    printf("    Informe a quant. de colunas: ");
    scanf("%d", &n);

    int matriz1[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("        [%d , %d] = ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    //------ desenhar a matriz
    printf("\n    Desenho da matriz: \n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(j == 0){ printf("        |"); }
            printf(" %d ", matriz1[i][j]);
            if(j == n-1){ printf("|\n"); }
        }
    }

    int p;
    printf("\n 2º Matriz \n");
    printf("    Informe a quant. de colunas: ");
    scanf("%d", &p);

    int matriz2[n][p];
    for(int i=0; i<n; i++){
        for(int j=0; j<p; j++){
            printf("        [%d , %d] = ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    //------ desenhar a matriz
    printf("\n    Desenho da matriz: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<p; j++){
            if(j == 0){ printf("        |"); }
            printf(" %d ", matriz2[i][j]);
            if(j == p-1){ printf("|\n"); }
        }
    }

    int resultado[m][p];
    for (int i=0; i<m; i++){
        for(int j=0; j<p; j++){
            resultado[i][j] = 0;
        }
    }

    for (int i=0; i<p; i++){
        for(int j=0; j<n; j++){
            int soma=0;
            for(int k=0; k<m; k++){
                soma = soma + matriz1[j][k] * matriz2[k][i];
            }
            resultado[j][i] = soma;

        }
    }

    printf("\n Matriz Resultante \n");
    //------ desenhar a matriz
    printf("\n    Desenho da matriz: \n");
    for(int i=0; i<m; i++){
        for(int j=0; j<p; j++){
            if(j == 0){ printf("        |"); }
            printf(" %d ", resultado[i][j]);
            if(j == p-1){ printf("|\n"); }
        }
    }


}

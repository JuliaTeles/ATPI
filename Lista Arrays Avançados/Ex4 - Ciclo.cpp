#include <iostream>
#include <cstdio>
#include <locale>
using namespace std;

int  main(){
    setlocale(LC_ALL, "Portuguese");

    int n;
    int aux = 0;
    printf("Informe N: ");
    scanf("%d", &n);

    int sequencia[n];
    for(int i=0; i<n; i++){
        printf("Informe a Casa %d:", i+1);
        scanf("%d", &sequencia[i]);
    }

    int ciclo[n];
    for(int i=0; i<n; i++){
        ciclo[i] = 444;
    }

    for(int i=0, j=0; i<n; j++){
        if(sequencia[i] == 0){
            break;
        }
        else{
          ciclo[j] = sequencia[i];
          aux = sequencia[i];
        }
        i = aux;
    }

    int cicloFinal[n];
    cicloFinal[0] = 0;
    for(int i=1; i<n; i++){
        cicloFinal[i] = ciclo[i-1];
    }

    for(int i=0; i<n; i++){
        if(cicloFinal[i] != 444){
            printf("| %i |", cicloFinal[i]);
        }
    }
}

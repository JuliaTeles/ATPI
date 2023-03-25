/*
  --> PSEUDO-CÓDIGO <--

    algoritmo
        declare i, numero numérico
        i <- 0
        x <- 1
        enquanto i < 5 faça
        início
            escreva x
            i <- i + 1
            numero <- numero/2
        fim
    fim_algoritmo
*/

#include <iostream>
using namespace std;

int main(){

    int i, numero;

    i = 0;
    numero = 1;

    while(i<5){
        cout << numero << "\n";
        numero = (numero/2);
        i++;
        // Observação: [i++] é equivalente a [i = i + 1].
    }
}

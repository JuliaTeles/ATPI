/*
  --> PSEUDO-CÓDIGO <--

    algoritmo
        declare numero numérico
        escreva "Informe o número: "
        leia numero

        se numero%2 = 0
        então escreva "Par"
        senão escreva "Ímpar"

    fim_algoritmo

*/

#include <iostream>
using namespace std;

int main(){

    int numero;
    cout << "Informe um numero: " ;
    cin >> numero;

    if (numero%2 == 0){
        cout << "\nO numero " << numero << " e par. \n";
        cout << "================== \n";
    }else{
        cout << "O numero " << numero << " e impar. \n";
        cout << "================== \n";
    }


}


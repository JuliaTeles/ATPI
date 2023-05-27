#include <iostream>
#include <locale>
using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int numero;
    int binario[100];
    cout << "Informe um número inteiro positivo a ser convertido em binário: \n";
    cin >> numero;

    int i = 0;
    while(numero>0){
        binario[i] = numero%2;
        numero = numero/2;
        i++;
    }

    cout << "O número em binário é: \n";
    for (int j=0; j<i; j++){
        cout << binario[j];
    }

}

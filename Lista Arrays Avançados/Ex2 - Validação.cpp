#include <iostream>
#include <locale>
using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");
    int soma;
    int numeros[16];
    for (int i=0; i<16; i++){
        cout << "Digite o número " << i+1 << ": ";
        cin >> numeros[i];
    }

    for(int i=0; i<16; i++){
        if((i+1)%2 != 0){
            if(numeros[i]*2 > 9){
                numeros[i] = numeros[i]*2 - 9;
            }else{
                numeros[i] = numeros[i]*2;
            }
        }
    }

    for(int i=0; i<16; i++){
        soma = soma + numeros[i];
    }

    if(soma % 10 == 0){
        cout << "O cartão é VÁLIDO, número: " << soma;
    }else{
        cout << "O cartão é INVÁLIDO, número: " << soma;
    }

}

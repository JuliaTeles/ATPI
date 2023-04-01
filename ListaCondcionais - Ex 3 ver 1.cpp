#include <iostream>
using namespace std;

int main(){

    int codigo_produto, codigo_pais;
    float peso, preco, total, imposto;
    imposto = 0;
    preco = 0;
    total = 0;

    cout << "Digite o codigo do produto: \n";
    cin >> codigo_produto;
    cout << "Digite o peso do produto (em quilogramas): \n";
    cin >> peso;
    cout << "Digite o codigo do pais: \n";
    cin >> codigo_pais;

    if(codigo_produto > 10 || codigo_produto < 1 || codigo_pais > 3 || codigo_pais < 1){
        cout << "---- Codigo invalido ----\n";
        cout << "a) Apenas numeros de 1 a 10 para os produtos\n";
        cout << "b) Apenas numeros de 1 a 3 para os paises\n";
    }else{
        peso = peso*1000;
        if(codigo_produto >= 1 && codigo_produto <= 4){
            preco = 10*peso;
        }else if(codigo_produto >= 5 && codigo_produto <= 7){
            preco = 25*peso;
        }else{
            preco = 35*peso;
        }
        switch (codigo_pais){
            case 1:
                imposto = preco*0;
                break;
            case 2:
                imposto = preco*0.15;
                break;
            case 3:
                imposto = preco*0.30;
                break;
            default:
                break;
        }
        total = preco + imposto;
        cout << "Peso: " << peso << " gramas\n";
        cout << "Preco: " << preco << " reais\n";
        cout << "Imposto: " << imposto << " reais\n";
        cout << "Valor total: " << total << " reais\n";

    }
}

#include <iostream>
#include <locale>
using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");
    int quantidade;
    int qtdmaximos = 0;

    cout << "Digite a quantidade de números do array: \n";
    cin >> quantidade;
    int numeros[quantidade];
    int maximos[quantidade];

    for(int k=0; k<quantidade; k++){
        cout << "Digite o número da posição " << k+1 << ":\n";
        cin >> numeros[k];
    }

    cout << "---------\n";
    for(int i=0; i<quantidade; i++){
        if(i=0){
            if(numeros[i]>numeros[i+1]){
                maximos[i] = numeros[i];
                qtdmaximos = i;
            }
        }else if(i = quantidade-1){
            if(numeros[i]>numeros[i-1]){
                maximos[i] = numeros[i];
                qtdmaximos = i;
            }
        }else if(numeros[i]>numeros[i-1] && numeros[i]>numeros[i+1]){
            maximos[i] = numeros[i];
            qtdmaximos = i;
        }else{
            cout << "Não é máx \n";
        }
    }

    cout << "Qtd maximos: \n" << qtdmaximos << endl;
    cout << "Máximos Locais: \n";
    for(int j=0; j<qtdmaximos; j++){
        cout << maximos[j] << " | ";
    }
}

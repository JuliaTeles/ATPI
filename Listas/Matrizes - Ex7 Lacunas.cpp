#include <iostream>
using namespace std;

int main(){

    int quantidade;
    cout << "Digite a quantidade de elementos do array: \n";
    cin >> quantidade;

    int inicial[quantidade];
    int novo[quantidade* 2];
    for (int i=0; i<quantidade; i++){
        cout << "Digite o elemento " << i+1 << " do array: \n";
        cin >> inicial[i];
    }

    int tamanho = 0, aumento =0;
    for(tamanho = 0; tamanho<quantidade; tamanho++){
        
        // +2
		if(inicial[tamanho]+2 == inicial[tamanho+1]){
            novo[tamanho] = inicial[tamanho];
            novo[tamanho+1] = inicial[tamanho]+1;
            novo[tamanho+2] = inicial[tamanho]+2;
            tamanho=tamanho+2;
            quantidade++;
            aumento++;
            
        }
		// -2
		else if(inicial[tamanho]-2 == inicial[tamanho+1]){
            novo[tamanho] = inicial[tamanho];
            novo[tamanho+1] = inicial[tamanho]-1;
            novo[tamanho+2] = inicial[tamanho]-2;
            tamanho=tamanho+2;
            quantidade++;
            aumento++;
            
        }
        // Positivo e negativo
		else if(inicial[tamanho]>0 && inicial[tamanho+1]<0){
			novo[tamanho] = inicial[tamanho];
            novo[tamanho+1] = 0;
            novo[tamanho+2] = inicial[tamanho+1];
            tamanho=tamanho+2;
            quantidade++;
            aumento++;
    
		}else if(inicial[tamanho]<0 && inicial[tamanho+1]>0){
			novo[tamanho] = inicial[tamanho];
            novo[tamanho+1] = 0;
            novo[tamanho+2] = inicial[tamanho+1];
            tamanho=tamanho+2;
            quantidade++;
            aumento++;
			   
		}else{
        	novo[tamanho] = inicial[tamanho-1];
		}

    }

	cout << "------------\n";
	cout << "Array antigo: \n";
    for (int i=0; i<quantidade-aumento; i++){
        cout << inicial[i] << "| ";
    }
	
	cout << "\n";
	cout << "Array novo: \n";
    for (int i=0; i<quantidade; i++){
        cout << novo[i] << "| ";
    }

}

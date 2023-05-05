#include <iostream>
#include <locale>
using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n, m;
	bool flagReflexiva, flagPar, flagSimetrica, flagTransitiva;
	flagReflexiva = true;
	flagSimetrica = true;
	flagTransitiva = true;
	
	cout << "Digite a quantidade de PARES na Relação: \n";
	cin >> n;
	int x[n];
	int y[n];
	
	for(int i = 0; i<n; i++){
		cout << "X do par?\n";
		cin >> x[i];
		cout << "Y do par?\n";
		cin >> y[i];
	}
	
	cout << "Digite a quantidade de ELEMENTOS no conjunto: \n";
	cin >> m;
	int conjunto[m];
	
	for(int i=0; i<m; i++){
		cout << "Elemento - " << i << endl;
		cin >> conjunto[i];		
	}
	
	// REFLEXIVA
	for (int i=0; i<m; i++){
		flagPar = false;
		for(int j=0; j<n; j++){
			if(conjunto[i]==x[j] && conjunto[i]==y[j]){
				flagPar = true;
				break;
			}
		}
		if(!flagPar){
			flagReflexiva = false;
		}
	}
	
	if(flagReflexiva){
		cout << "\nA Relação É reflexiva! \n";
	}else{
		cout << "\nA Relação NÃO É reflexiva! \n";
	}
	
	// SIMÉTRICA
	for(int j=0; j<n; j++){
		flagPar = false;
		for(int k=0; k<n; k++){	
			if(x[j] == y[k] && y[j] == x[k]){
				flagPar = true;
				break;
			}
		}
		if(!flagPar){
		flagSimetrica = false;
		}
	}
	
	if(flagSimetrica){
		cout << "\nA Relação É simetrica! \n";
	}else{
		cout << "\nA Relação NÃO É simetrica! \n";
	}
	
	// TRANSITIVA
	for(int i=0; i<n; i++){
		flagPar = false;
		for(int j=0; j<n; j++){
			if(x[j] ==y[i]){
				for(int k=0; k<n; k++){	
					if(x[k] == x[i] && y[k] == y[j] ){
						flagPar = true;
						break;
					}
				}
			}
		}
		if(!flagPar){
			flagTransitiva = false;
		}
	}
	
	if(flagTransitiva){
		cout << "\nA Relação É transitiva! \n";
	}else{
		cout << "\nA Relação NÃO É transitiva! \n";
	}
	
}

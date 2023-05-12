#include <iostream>
#include <locale>
using namespace std;

#define LINHA 2
#define COLUNA 3

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int matriz[LINHA][COLUNA] = { {-1, 0, 5}, {6 ,-4, 4} };
	int array[COLUNA];
	int soma, pares;
		pares = 0;
		soma = 0;
	bool flag_Positivo = true; 
	
	for (int i = 0; i < LINHA; i++){
		soma = soma + matriz[i][1];
	}
	
	for (int i = 0; i < COLUNA; i++){
		if (matriz[1][i] % 2 == 0){
			pares++;
		}
	}
	
	for (int i = 0; i < LINHA; i++){
		for (int j = 0; j < COLUNA-1; j++){
			if (matriz[i][j] <= 0){
				flag_Positivo = false;
			}
		}	
	}
	
	for (int i = 0; i < LINHA; i++){
		array[i] = matriz[i][0];
	}
	
	cout << "A soma da segunda coluna é: " << soma <<"\n";
	cout << "A segunda coluna possui " << pares <<" números pares\n";
	
	if (flag_Positivo){
		cout << "Todos são positivos! \n";
	}else{
		cout << "Todos são negativos! \n";
	}
	
	for (int i = 0; i < LINHA; i++){
		cout << array[i] << " ";
	}
	
}

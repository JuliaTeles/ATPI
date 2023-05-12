#include <iostream>
#include <locale>
using namespace std;

#define LINHA 3
#define COLUNA 3

int main(){
	//CORRIGIR FINAL
	setlocale(LC_ALL, "Portuguese");
	int matriz[LINHA][COLUNA] = { {5, 0, 1}, {2, 3, 9}, {10, 3, 4} };
	int transposta[LINHA][COLUNA];
	int array[LINHA];
	bool flag_Repetido = true; 
	bool flag_Crescente = true; 
	
	for (int i = 0; i < LINHA; i++){
		if(matriz[i][i] == matriz[i+1][i+1]){
			flag_Repetido = false;	
		}
	}
	
	for (int i = 0; i < LINHA; i++){
		if(matriz[i][LINHA - 1 - i] > matriz[i][LINHA - i]){
			flag_Crescente = false;
		}
	}
	
	for (int i = 0; i < LINHA; i++){
		for (int j = 0; j < LINHA; j++){
			transposta[i][j] = matriz[j][i];
		}
	}
	
	for (int i = 1; i < LINHA; i++){
		for (int j = i+1; j < COLUNA+1; j++){
			for (int k = 0; k < COLUNA; k++){
				if(matriz[k][LINHA - 1 - i] % 2 != 0){
					array[k] = matriz[k][LINHA - 1 - i];
				}
			}	
		}
	}
	
	if (flag_Repetido){
		cout << "Não há elementos repetidos! \n";
	}else{
		cout << "Há elementos repetidos! \n";
	}
	
	for (int i = 0; i < LINHA; i++){
		cout << array[i] << " ";
	}
	
}

#include <iostream>
#include <locale>
using namespace std;

// Variaveis globais
int numero, resultado;

int divisor(int n){
	int m = 1;
	while(resultado<numero){
		if(n%m == 0){
			resultado = resultado + m;	
		}	
		m++;
	}
	
	return resultado;
}

void perfeito(int n){
	if(n == numero){
		cout << "O número " << n << " é perfeito" ;
	}
	else{
		cout << "O número " << numero << " não é perfeito";
	}
	
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	cout << "Digite o número a ser consultado: ";
	cin >> numero;
	resultado = 0;
	
	divisor(numero);
	perfeito(resultado);
		
}

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int i, valor, valorAnterior1, valorAnterior2; 
	
	i = 0;
	valorAnterior1 = 0;
	valorAnterior2 = 1;
	valor = 0;

	while(i < 10){
		valor = valorAnterior1 + valorAnterior2; 
		valorAnterior1 = valorAnterior2;
		valorAnterior2 = valor;
		cout << valor;
		i++;
	}
}

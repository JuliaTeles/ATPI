#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float numeroGeometrico, razaoGeometrica, fracao, i;
	int numeroNada;
	
	numeroGeometrico = 1;
	razaoGeometrica = 2;
	
	numeroNada = 2;
	
	i = 0;
	
	while(i < 10){
		
		fracao = (numeroNada/numeroGeometrico);
		numeroGeometrico = (numeroGeometrico*razaoGeometrica);
		numeroNada = (abs(numeroNada)+1)*(-1);
		cout << fracao;
		i++;
	}
}

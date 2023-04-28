#include <iostream>
using namespace std;

int main(){
	float razao, numero, fracao, i, soma;
	
	numero = 3;
	razao = 3;
	i = 0;
	soma = 0;
	
	while(i < 10){
		
		fracao = (1/numero);
		numero = (numero*razao);		
		i++;
		soma = soma + fracao;
		cout << fracao;
	}
	cout << soma;
}

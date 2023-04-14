#include <iostream>
#include <locale>
#include<cmath>
using namespace std;

// variaveis globais
int numero, unidade, dezena, centena, resultado;

int unidades(int n){
	n = n%100;
	n = n%10;
	unidade = n;
	return unidade;
}

int dezenas(int n){
	n = n%100;
	dezena = n - unidade;
	dezena = dezena/10;
	return dezena;
}

int centenas(int n){
	centena = n - dezena - unidade;
	centena = centena/100;
	cout << centena;
	return centena;
}

bool armstrong(int n){
	unidade = pow(unidade,3);
	dezena = pow(dezena,3);
	centena = pow(centena,3);
	
	int soma = 0;
	soma = unidade+dezena+centena;
	if(soma == numero){
		cout << "É um número de armstrong";
	}else{
		cout << "Não é um número de armstrong";
	}
	
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	cout << "Digite o número a ser consultado: ";
	cin >> numero;
	unidades(numero);
	dezenas(numero);
	centenas(numero);
	armstrong(numero);
}

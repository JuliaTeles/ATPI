/*----------------------------------------------------------
	condicional-sentença = não resulta num valor
	condicional-expressão = resulta num valor
-----------------------------------------------------------*/
#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	int a;
	
	if(3>2)
		a = 10;
	else
		a = 7;
		
	int b;
	b = 3 > 2 ? 10 : 7;
	/* ----------------------------------------------------
		Operador ternário: codição ? valor A : valor B
		Se codição = true -> valor A 
		Se codição = false -> valor B 
	----------------------------------------------------*/
	std::cout << b; 
	return 0;
}

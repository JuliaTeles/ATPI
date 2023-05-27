#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	char stream;
	cout << "Informe o serviço de streaming ";
	cout << "(N-Netflix, P-Prime, H-HBO Max): \n";
	cin >> stream;
	
	float preco;
	switch(stream){
		case 'n': cout << "Upper case";
		case 'N': preco = 55.90;
			break;
		case 'p': cout << "Upper case";
		case 'P': preco = 14.90;
			break;
		case 'h': cout << "Upper case";
		case 'H': preco = 16.90;
			break;
		default: preco = -1.0;
	} 
	cout << preco;
	return 0; 
	
}

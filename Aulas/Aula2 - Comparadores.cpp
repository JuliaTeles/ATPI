#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b, c;
	cout << "Informe três valores inteiros diferentes: ";
	cin>> a >> b >> c;
	
	if (a>b)
	{
		if (b>c){
			cout << a << " > " << b << " > " << c;
		}
		else if(a>c){
			cout << a << " > " << c << " > " << b;
		}
		else{
			cout << c << " > " << a << " > " << b;
		}
	} 
	else{
		if (a>c){
			cout << b << " > " << a << " > " << c;
		}
		else if(b>c){
			cout << b << " > " << c << " > " << a;
		}
		else{
			cout << c << " > " << b << " > " << a;
		}
	}
	
	return 0; 
}

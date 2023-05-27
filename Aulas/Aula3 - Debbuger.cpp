#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i;
	float f;
	bool flag;
	char ch;
	
	i = 100;
	f = 2.78;
	flag = true;
	ch = '?';

	if (i > 0)
		flag = false;
	else if(f < 37.89)
		ch = 'N';
	else 
		ch = 'N';
	
	i = -1;
	
	return 0; 
}

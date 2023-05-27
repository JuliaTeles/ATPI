#include <iostream>
using namespace std;

int main(){
	int n, i, fatorial;
	
	cin >> n;
	i = 1;
	fatorial = 1;
	while(i <= n){
		fatorial = fatorial * i;
		i = i + 1;
	}
	cout << fatorial;
}

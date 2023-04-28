#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i = 0, tempoAntigo = 0, comissaoAntigo = 0;
	float media;
	float salario[5];
	int tempo[5];
	int comissao[5];
	
	while (i<5){
		
		cout << "Informe o salário: "<< endl;
		cin >> salario[i];
		cout << "Informe o tempo de serviço: "<< endl;
		cin >> tempo[i];
		cout << "Informe a comissão: "<< endl;
		cin >> comissao[i];
		
		media = media + salario[i];
		if(tempo[i]>tempoAntigo){
			tempoAntigo = tempo[i];
			comissaoAntigo = comissao[i];
		}
		i++;
	}
	media = media/i;
	cout << "A média do salário é: "<< media << endl;
	cout << "A comisão do funcionáio mais antigo é: "<< comissaoAntigo << endl;

}
